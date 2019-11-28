/*
   Copyright (c) 2001, Loki software, inc.
   All rights reserved.

   Redistribution and use in source and binary forms, with or without modification,
   are permitted provided that the following conditions are met:

   Redistributions of source code must retain the above copyright notice, this list
   of conditions and the following disclaimer.

   Redistributions in binary form must reproduce the above copyright notice, this
   list of conditions and the following disclaimer in the documentation and/or
   other materials provided with the distribution.

   Neither the name of Loki software nor the names of its contributors may be used
   to endorse or promote products derived from this software without specific prior
   written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS''
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
   DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY
   DIRECT,INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
   ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

//
// Rules:
//
// - Directories should be searched in the following order: ~/.q3a/baseq3,
//   install dir (/usr/local/games/quake3/baseq3) and cd_path (/mnt/cdrom/baseq3).
//
// - Pak files are searched first inside the directories.
// - Case insensitive.
// - Unix-style slashes (/) (windows is backwards .. everyone knows that)
//
// Leonardo Zide (leo@lokigames.com)
//

#include <stdio.h>

#if defined( __linux__ ) || defined( __FreeBSD__ ) || defined( __APPLE__ )
#include <dirent.h>
#include <unistd.h>
#else
#include <wtypes.h>
#include <io.h>
#define R_OK 04
#define S_ISDIR( mode ) ( mode & _S_IFDIR )
#define PATH_MAX 260
#endif

#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>

#include "cmdlib.h"
#include "mathlib.h"
#include <stdint.h>
#include "inout.h"
#include "vfs.h"
#include "unzip.h"

// =============================================================================
// Global variables

static char g_strDirs[VFS_MAXDIRS][PATH_MAX];
static int g_numDirs;

// =============================================================================
// Static functions

static void vfsAddSlash( char *str ){
	int n = strlen( str );
	if ( n > 0 ) {
		if ( str[n - 1] != '\\' && str[n - 1] != '/' ) {
			strcat( str, "/" );
		}
	}
}

static void vfsFixDOSName( char *src ){
	if ( src == NULL ) {
		return;
	}

	while ( *src )
	{
		if ( *src == '\\' ) {
			*src = '/';
		}
		src++;
	}
}

//!\todo Define globally or use heap-allocated string.
#define NAME_MAX 255

static int vfsPakSort(const void *a, const void *b) {
	char    *s1, *s2;
	int c1, c2;

	s1 = (char*)a;
	s2 = (char*)b;

	do {
		c1 = *s1++;
		c2 = *s2++;

		if (c1 >= 'a' && c1 <= 'z') {
			c1 -= ('a' - 'A');
		}
		if (c2 >= 'a' && c2 <= 'z') {
			c2 -= ('a' - 'A');
		}

		if (c1 == '\\' || c1 == ':') {
			c1 = '/';
		}
		if (c2 == '\\' || c2 == ':') {
			c2 = '/';
		}

		// Arnout: note - sort pakfiles in reverse order. This ensures that
		// later pakfiles override earlier ones. This because the vfs module
		// returns a filehandle to the first file it can find (while it should
		// return the filehandle to the file in the most overriding pakfile, the
		// last one in the list that is).
		if (c1 < c2) {
			//return -1;		// strings not equal
			return 1;       // strings not equal
		}
		if (c1 > c2) {
			//return 1;
			return -1;
		}
	} while (c1);

	return 0;       // strings are equal
}

// =============================================================================
// Global functions

// reads all pak files from a dir
void vfsInitDirectory( const char *path ){
	char filename[PATH_MAX];

	if ( g_numDirs == ( VFS_MAXDIRS - 1 ) ) {
		return;
	}

	Sys_Printf( "VFS Init: %s\n", path );

	strcpy( g_strDirs[g_numDirs], path );
	vfsFixDOSName( g_strDirs[g_numDirs] );
	vfsAddSlash( g_strDirs[g_numDirs] );
	g_numDirs++;
}

// frees all memory that we allocated
void vfsShutdown(){

}

// return the number of files that match
int vfsGetFileCount( const char *filename ){
	int i, count = 0;
	char fixed[NAME_MAX], tmp[NAME_MAX];

	strcpy( fixed, filename );
	vfsFixDOSName( fixed );
	char *lower = lower = strlower(fixed);

	for ( i = 0; i < g_numDirs; i++ )
	{
		strcpy( tmp, g_strDirs[i] );
		strcat( tmp, lower );
		if ( access( tmp, R_OK ) == 0 ) {
			count++;
		}
	}

	return count;
}

// NOTE: when loading a file, you have to allocate one extra byte and set it to \0
int vfsLoadFile( const char *filename, void **bufferptr, int index ){
	int i, count = 0;
	char tmp[NAME_MAX], fixed[NAME_MAX];
	char *lower;

	// filename is a full path
	if ( index == -1 ) {
		long len;
		FILE *f;

		f = fopen( filename, "rb" );
		if ( f == NULL ) {
			return -1;
		}

		fseek( f, 0, SEEK_END );
		len = ftell( f );
		rewind( f );

		*bufferptr = safe_malloc( len + 1 );
		if ( *bufferptr == NULL ) {
			fclose( f );
			return -1;
		}

		if ( fread( *bufferptr, 1, len, f ) != (size_t) len ) {
			fclose( f );
			return -1;
		}
		fclose( f );

		// we need to end the buffer with a 0
		( (char*) ( *bufferptr ) )[len] = 0;

		return len;
	}

	*bufferptr = NULL;
	strcpy( fixed, filename );
	vfsFixDOSName( fixed );
	lower = strlower( fixed );

	for ( i = 0; i < g_numDirs; i++ )
	{
		strcpy( tmp, g_strDirs[i] );
		strcat( tmp, filename );
		if ( access( tmp, R_OK ) == 0 ) {
			if ( count == index ) {
				long len;
				FILE *f;

				f = fopen( tmp, "rb" );
				if ( f == NULL ) {
					return -1;
				}

				fseek( f, 0, SEEK_END );
				len = ftell( f );
				rewind( f );

				*bufferptr = safe_malloc( len + 1 );
				if ( *bufferptr == NULL ) {
					fclose( f );
					return -1;
				}

				if ( fread( *bufferptr, 1, len, f ) != (size_t) len ) {
					fclose( f );
					return -1;
				}
				fclose( f );

				// we need to end the buffer with a 0
				( (char*) ( *bufferptr ) )[len] = 0;

				return len;
			}

			count++;
		}
	}

	return -1;
}
