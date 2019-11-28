/*
   Copyright (C) 1999-2007 id Software, Inc. and contributors.
   For a list of contributors, see the accompanying CONTRIBUTORS file.

   This file is part of GtkRadiant.

   GtkRadiant is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   GtkRadiant is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GtkRadiant; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*
   IGL tp QGL mapping header
   Copyright (C) 2002 Splash Damage Ltd.
 */

#ifndef _IGL_TO_QGL_H_
#define _IGL_TO_QGL_H_

#ifdef _WIN32
#include <wtypes.h>
#endif

enum VIEWTYPE {YZ, XZ, XY};

#include "igl.h"

#ifndef APIENTRY
 #define APIENTRY
#endif

void ( APIENTRY * qglAccum )( GLenum op, GLfloat value );
void ( APIENTRY * qglAlphaFunc )( GLenum func, GLclampf ref );
GLboolean ( APIENTRY * qglAreTexturesResident )( GLsizei n, const GLuint *textures, GLboolean *residences );
void ( APIENTRY * qglArrayElement )( GLint i );
void ( APIENTRY * qglBegin )( GLenum mode );
void ( APIENTRY * qglBindTexture )( GLenum target, GLuint texture );
void ( APIENTRY * qglBitmap )( GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap );
void ( APIENTRY * qglBlendFunc )( GLenum sfactor, GLenum dfactor );
void ( APIENTRY * qglCallList )( GLuint list );
void ( APIENTRY * qglCallLists )( GLsizei n, GLenum type, const GLvoid *lists );
void ( APIENTRY * qglClear )( GLbitfield mask );
void ( APIENTRY * qglClearAccum )( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );
void ( APIENTRY * qglClearColor )( GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha );
void ( APIENTRY * qglClearDepth )( GLclampd depth );
void ( APIENTRY * qglClearIndex )( GLfloat c );
void ( APIENTRY * qglClearStencil )( GLint s );
void ( APIENTRY * qglClipPlane )( GLenum plane, const GLdouble *equation );
void ( APIENTRY * qglColor3b )( GLbyte red, GLbyte green, GLbyte blue );
void ( APIENTRY * qglColor3bv )( const GLbyte *v );
void ( APIENTRY * qglColor3d )( GLdouble red, GLdouble green, GLdouble blue );
void ( APIENTRY * qglColor3dv )( const GLdouble *v );
void ( APIENTRY * qglColor3f )( GLfloat red, GLfloat green, GLfloat blue );
void ( APIENTRY * qglColor3fv )( const GLfloat *v );
void ( APIENTRY * qglColor3i )( GLint red, GLint green, GLint blue );
void ( APIENTRY * qglColor3iv )( const GLint *v );
void ( APIENTRY * qglColor3s )( GLshort red, GLshort green, GLshort blue );
void ( APIENTRY * qglColor3sv )( const GLshort *v );
void ( APIENTRY * qglColor3ub )( GLubyte red, GLubyte green, GLubyte blue );
void ( APIENTRY * qglColor3ubv )( const GLubyte *v );
void ( APIENTRY * qglColor3ui )( GLuint red, GLuint green, GLuint blue );
void ( APIENTRY * qglColor3uiv )( const GLuint *v );
void ( APIENTRY * qglColor3us )( GLushort red, GLushort green, GLushort blue );
void ( APIENTRY * qglColor3usv )( const GLushort *v );
void ( APIENTRY * qglColor4b )( GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha );
void ( APIENTRY * qglColor4bv )( const GLbyte *v );
void ( APIENTRY * qglColor4d )( GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha );
void ( APIENTRY * qglColor4dv )( const GLdouble *v );
void ( APIENTRY * qglColor4f )( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );
void ( APIENTRY * qglColor4fv )( const GLfloat *v );
void ( APIENTRY * qglColor4i )( GLint red, GLint green, GLint blue, GLint alpha );
void ( APIENTRY * qglColor4iv )( const GLint *v );
void ( APIENTRY * qglColor4s )( GLshort red, GLshort green, GLshort blue, GLshort alpha );
void ( APIENTRY * qglColor4sv )( const GLshort *v );
void ( APIENTRY * qglColor4ub )( GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha );
void ( APIENTRY * qglColor4ubv )( const GLubyte *v );
void ( APIENTRY * qglColor4ui )( GLuint red, GLuint green, GLuint blue, GLuint alpha );
void ( APIENTRY * qglColor4uiv )( const GLuint *v );
void ( APIENTRY * qglColor4us )( GLushort red, GLushort green, GLushort blue, GLushort alpha );
void ( APIENTRY * qglColor4usv )( const GLushort *v );
void ( APIENTRY * qglColorMask )( GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha );
void ( APIENTRY * qglColorMaterial )( GLenum face, GLenum mode );
void ( APIENTRY * qglColorPointer )( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
void ( APIENTRY * qglCopyPixels )( GLint x, GLint y, GLsizei width, GLsizei height, GLenum type );
void ( APIENTRY * qglCopyTexImage1D )( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border );
void ( APIENTRY * qglCopyTexImage2D )( GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border );
void ( APIENTRY * qglCopyTexSubImage1D )( GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width );
void ( APIENTRY * qglCopyTexSubImage2D )( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height );
void ( APIENTRY * qglCullFace )( GLenum mode );
void ( APIENTRY * qglDeleteLists )( GLuint list, GLsizei range );
void ( APIENTRY * qglDeleteTextures )( GLsizei n, const GLuint *textures );
void ( APIENTRY * qglDepthFunc )( GLenum func );
void ( APIENTRY * qglDepthMask )( GLboolean flag );
void ( APIENTRY * qglDepthRange )( GLclampd zNear, GLclampd zFar );
void ( APIENTRY * qglDisable )( GLenum cap );
void ( APIENTRY * qglDisableClientState )( GLenum array );
void ( APIENTRY * qglDrawArrays )( GLenum mode, GLint first, GLsizei count );
void ( APIENTRY * qglDrawBuffer )( GLenum mode );
void ( APIENTRY * qglDrawElements )( GLenum mode, GLsizei count, GLenum type, const GLvoid *indices );
void ( APIENTRY * qglDrawPixels )( GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );
void ( APIENTRY * qglEdgeFlag )( GLboolean flag );
void ( APIENTRY * qglEdgeFlagPointer )( GLsizei stride, const GLvoid *pointer );
void ( APIENTRY * qglEdgeFlagv )( const GLboolean *flag );
void ( APIENTRY * qglEnable )( GLenum cap );
void ( APIENTRY * qglEnableClientState )( GLenum array );
void ( APIENTRY * qglEnd )( void );
void ( APIENTRY * qglEndList )( void );
void ( APIENTRY * qglEvalCoord1d )( GLdouble u );
void ( APIENTRY * qglEvalCoord1dv )( const GLdouble *u );
void ( APIENTRY * qglEvalCoord1f )( GLfloat u );
void ( APIENTRY * qglEvalCoord1fv )( const GLfloat *u );
void ( APIENTRY * qglEvalCoord2d )( GLdouble u, GLdouble v );
void ( APIENTRY * qglEvalCoord2dv )( const GLdouble *u );
void ( APIENTRY * qglEvalCoord2f )( GLfloat u, GLfloat v );
void ( APIENTRY * qglEvalCoord2fv )( const GLfloat *u );
void ( APIENTRY * qglEvalMesh1 )( GLenum mode, GLint i1, GLint i2 );
void ( APIENTRY * qglEvalMesh2 )( GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2 );
void ( APIENTRY * qglEvalPoint1 )( GLint i );
void ( APIENTRY * qglEvalPoint2 )( GLint i, GLint j );
void ( APIENTRY * qglFeedbackBuffer )( GLsizei size, GLenum type, GLfloat *buffer );
void ( APIENTRY * qglFinish )( void );
void ( APIENTRY * qglFlush )( void );
void ( APIENTRY * qglFogf )( GLenum pname, GLfloat param );
void ( APIENTRY * qglFogfv )( GLenum pname, const GLfloat *params );
void ( APIENTRY * qglFogi )( GLenum pname, GLint param );
void ( APIENTRY * qglFogiv )( GLenum pname, const GLint *params );
void ( APIENTRY * qglFrontFace )( GLenum mode );
void ( APIENTRY * qglFrustum )( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );
GLuint ( APIENTRY * qglGenLists )( GLsizei range );
void ( APIENTRY * qglGenTextures )( GLsizei n, GLuint *textures );
void ( APIENTRY * qglGetBooleanv )( GLenum pname, GLboolean *params );
void ( APIENTRY * qglGetClipPlane )( GLenum plane, GLdouble *equation );
void ( APIENTRY * qglGetDoublev )( GLenum pname, GLdouble *params );
GLenum ( APIENTRY * qglGetError )( void );
void ( APIENTRY * qglGetFloatv )( GLenum pname, GLfloat *params );
void ( APIENTRY * qglGetIntegerv )( GLenum pname, GLint *params );
void ( APIENTRY * qglGetLightfv )( GLenum light, GLenum pname, GLfloat *params );
void ( APIENTRY * qglGetLightiv )( GLenum light, GLenum pname, GLint *params );
void ( APIENTRY * qglGetMapdv )( GLenum target, GLenum query, GLdouble *v );
void ( APIENTRY * qglGetMapfv )( GLenum target, GLenum query, GLfloat *v );
void ( APIENTRY * qglGetMapiv )( GLenum target, GLenum query, GLint *v );
void ( APIENTRY * qglGetMaterialfv )( GLenum face, GLenum pname, GLfloat *params );
void ( APIENTRY * qglGetMaterialiv )( GLenum face, GLenum pname, GLint *params );
void ( APIENTRY * qglGetPixelMapfv )( GLenum map, GLfloat *values );
void ( APIENTRY * qglGetPixelMapuiv )( GLenum map, GLuint *values );
void ( APIENTRY * qglGetPixelMapusv )( GLenum map, GLushort *values );
void ( APIENTRY * qglGetPointerv )( GLenum pname, GLvoid* *params );
void ( APIENTRY * qglGetPolygonStipple )( GLubyte *mask );
const GLubyte * ( APIENTRY * qglGetString )(GLenum name);
void ( APIENTRY * qglGetTexEnvfv )( GLenum target, GLenum pname, GLfloat *params );
void ( APIENTRY * qglGetTexEnviv )( GLenum target, GLenum pname, GLint *params );
void ( APIENTRY * qglGetTexGendv )( GLenum coord, GLenum pname, GLdouble *params );
void ( APIENTRY * qglGetTexGenfv )( GLenum coord, GLenum pname, GLfloat *params );
void ( APIENTRY * qglGetTexGeniv )( GLenum coord, GLenum pname, GLint *params );
void ( APIENTRY * qglGetTexImage )( GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels );
void ( APIENTRY * qglGetTexLevelParameterfv )( GLenum target, GLint level, GLenum pname, GLfloat *params );
void ( APIENTRY * qglGetTexLevelParameteriv )( GLenum target, GLint level, GLenum pname, GLint *params );
void ( APIENTRY * qglGetTexParameterfv )( GLenum target, GLenum pname, GLfloat *params );
void ( APIENTRY * qglGetTexParameteriv )( GLenum target, GLenum pname, GLint *params );
void ( APIENTRY * qglHint )( GLenum target, GLenum mode );
void ( APIENTRY * qglIndexMask )( GLuint mask );
void ( APIENTRY * qglIndexPointer )( GLenum type, GLsizei stride, const GLvoid *pointer );
void ( APIENTRY * qglIndexd )( GLdouble c );
void ( APIENTRY * qglIndexdv )( const GLdouble *c );
void ( APIENTRY * qglIndexf )( GLfloat c );
void ( APIENTRY * qglIndexfv )( const GLfloat *c );
void ( APIENTRY * qglIndexi )( GLint c );
void ( APIENTRY * qglIndexiv )( const GLint *c );
void ( APIENTRY * qglIndexs )( GLshort c );
void ( APIENTRY * qglIndexsv )( const GLshort *c );
void ( APIENTRY * qglIndexub )( GLubyte c );
void ( APIENTRY * qglIndexubv )( const GLubyte *c );
void ( APIENTRY * qglInitNames )( void );
void ( APIENTRY * qglInterleavedArrays )( GLenum format, GLsizei stride, const GLvoid *pointer );
GLboolean ( APIENTRY * qglIsEnabled )( GLenum cap );
GLboolean ( APIENTRY * qglIsList )( GLuint list );
GLboolean ( APIENTRY * qglIsTexture )( GLuint texture );
void ( APIENTRY * qglLightModelf )( GLenum pname, GLfloat param );
void ( APIENTRY * qglLightModelfv )( GLenum pname, const GLfloat *params );
void ( APIENTRY * qglLightModeli )( GLenum pname, GLint param );
void ( APIENTRY * qglLightModeliv )( GLenum pname, const GLint *params );
void ( APIENTRY * qglLightf )( GLenum light, GLenum pname, GLfloat param );
void ( APIENTRY * qglLightfv )( GLenum light, GLenum pname, const GLfloat *params );
void ( APIENTRY * qglLighti )( GLenum light, GLenum pname, GLint param );
void ( APIENTRY * qglLightiv )( GLenum light, GLenum pname, const GLint *params );
void ( APIENTRY * qglLineStipple )( GLint factor, GLushort pattern );
void ( APIENTRY * qglLineWidth )( GLfloat width );
void ( APIENTRY * qglListBase )( GLuint base );
void ( APIENTRY * qglLoadIdentity )( void );
void ( APIENTRY * qglLoadMatrixd )( const GLdouble *m );
void ( APIENTRY * qglLoadMatrixf )( const GLfloat *m );
void ( APIENTRY * qglLoadName )( GLuint name );
void ( APIENTRY * qglLogicOp )( GLenum opcode );
void ( APIENTRY * qglMap1d )( GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points );
void ( APIENTRY * qglMap1f )( GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points );
void ( APIENTRY * qglMap2d )( GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points );
void ( APIENTRY * qglMap2f )( GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points );
void ( APIENTRY * qglMapGrid1d )( GLint un, GLdouble u1, GLdouble u2 );
void ( APIENTRY * qglMapGrid1f )( GLint un, GLfloat u1, GLfloat u2 );
void ( APIENTRY * qglMapGrid2d )( GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2 );
void ( APIENTRY * qglMapGrid2f )( GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2 );
void ( APIENTRY * qglMaterialf )( GLenum face, GLenum pname, GLfloat param );
void ( APIENTRY * qglMaterialfv )( GLenum face, GLenum pname, const GLfloat *params );
void ( APIENTRY * qglMateriali )( GLenum face, GLenum pname, GLint param );
void ( APIENTRY * qglMaterialiv )( GLenum face, GLenum pname, const GLint *params );
void ( APIENTRY * qglMatrixMode )( GLenum mode );
void ( APIENTRY * qglMultMatrixd )( const GLdouble *m );
void ( APIENTRY * qglMultMatrixf )( const GLfloat *m );
void ( APIENTRY * qglNewList )( GLuint list, GLenum mode );
void ( APIENTRY * qglNormal3b )( GLbyte nx, GLbyte ny, GLbyte nz );
void ( APIENTRY * qglNormal3bv )( const GLbyte *v );
void ( APIENTRY * qglNormal3d )( GLdouble nx, GLdouble ny, GLdouble nz );
void ( APIENTRY * qglNormal3dv )( const GLdouble *v );
void ( APIENTRY * qglNormal3f )( GLfloat nx, GLfloat ny, GLfloat nz );
void ( APIENTRY * qglNormal3fv )( const GLfloat *v );
void ( APIENTRY * qglNormal3i )( GLint nx, GLint ny, GLint nz );
void ( APIENTRY * qglNormal3iv )( const GLint *v );
void ( APIENTRY * qglNormal3s )( GLshort nx, GLshort ny, GLshort nz );
void ( APIENTRY * qglNormal3sv )( const GLshort *v );
void ( APIENTRY * qglNormalPointer )( GLenum type, GLsizei stride, const GLvoid *pointer );
void ( APIENTRY * qglOrtho )( GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar );
void ( APIENTRY * qglPassThrough )( GLfloat token );
void ( APIENTRY * qglPixelMapfv )( GLenum map, GLsizei mapsize, const GLfloat *values );
void ( APIENTRY * qglPixelMapuiv )( GLenum map, GLsizei mapsize, const GLuint *values );
void ( APIENTRY * qglPixelMapusv )( GLenum map, GLsizei mapsize, const GLushort *values );
void ( APIENTRY * qglPixelStoref )( GLenum pname, GLfloat param );
void ( APIENTRY * qglPixelStorei )( GLenum pname, GLint param );
void ( APIENTRY * qglPixelTransferf )( GLenum pname, GLfloat param );
void ( APIENTRY * qglPixelTransferi )( GLenum pname, GLint param );
void ( APIENTRY * qglPixelZoom )( GLfloat xfactor, GLfloat yfactor );
void ( APIENTRY * qglPointSize )( GLfloat size );
void ( APIENTRY * qglPolygonMode )( GLenum face, GLenum mode );
void ( APIENTRY * qglPolygonOffset )( GLfloat factor, GLfloat units );
void ( APIENTRY * qglPolygonStipple )( const GLubyte *mask );
void ( APIENTRY * qglPopAttrib )( void );
void ( APIENTRY * qglPopClientAttrib )( void );
void ( APIENTRY * qglPopMatrix )( void );
void ( APIENTRY * qglPopName )( void );
void ( APIENTRY * qglPrioritizeTextures )( GLsizei n, const GLuint *textures, const GLclampf *priorities );
void ( APIENTRY * qglPushAttrib )( GLbitfield mask );
void ( APIENTRY * qglPushClientAttrib )( GLbitfield mask );
void ( APIENTRY * qglPushMatrix )( void );
void ( APIENTRY * qglPushName )( GLuint name );
void ( APIENTRY * qglRasterPos2d )( GLdouble x, GLdouble y );
void ( APIENTRY * qglRasterPos2dv )( const GLdouble *v );
void ( APIENTRY * qglRasterPos2f )( GLfloat x, GLfloat y );
void ( APIENTRY * qglRasterPos2fv )( const GLfloat *v );
void ( APIENTRY * qglRasterPos2i )( GLint x, GLint y );
void ( APIENTRY * qglRasterPos2iv )( const GLint *v );
void ( APIENTRY * qglRasterPos2s )( GLshort x, GLshort y );
void ( APIENTRY * qglRasterPos2sv )( const GLshort *v );
void ( APIENTRY * qglRasterPos3d )( GLdouble x, GLdouble y, GLdouble z );
void ( APIENTRY * qglRasterPos3dv )( const GLdouble *v );
void ( APIENTRY * qglRasterPos3f )( GLfloat x, GLfloat y, GLfloat z );
void ( APIENTRY * qglRasterPos3fv )( const GLfloat *v );
void ( APIENTRY * qglRasterPos3i )( GLint x, GLint y, GLint z );
void ( APIENTRY * qglRasterPos3iv )( const GLint *v );
void ( APIENTRY * qglRasterPos3s )( GLshort x, GLshort y, GLshort z );
void ( APIENTRY * qglRasterPos3sv )( const GLshort *v );
void ( APIENTRY * qglRasterPos4d )( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
void ( APIENTRY * qglRasterPos4dv )( const GLdouble *v );
void ( APIENTRY * qglRasterPos4f )( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
void ( APIENTRY * qglRasterPos4fv )( const GLfloat *v );
void ( APIENTRY * qglRasterPos4i )( GLint x, GLint y, GLint z, GLint w );
void ( APIENTRY * qglRasterPos4iv )( const GLint *v );
void ( APIENTRY * qglRasterPos4s )( GLshort x, GLshort y, GLshort z, GLshort w );
void ( APIENTRY * qglRasterPos4sv )( const GLshort *v );
void ( APIENTRY * qglReadBuffer )( GLenum mode );
void ( APIENTRY * qglReadPixels )( GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels );
void ( APIENTRY * qglRectd )( GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2 );
void ( APIENTRY * qglRectdv )( const GLdouble *v1, const GLdouble *v2 );
void ( APIENTRY * qglRectf )( GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2 );
void ( APIENTRY * qglRectfv )( const GLfloat *v1, const GLfloat *v2 );
void ( APIENTRY * qglRecti )( GLint x1, GLint y1, GLint x2, GLint y2 );
void ( APIENTRY * qglRectiv )( const GLint *v1, const GLint *v2 );
void ( APIENTRY * qglRects )( GLshort x1, GLshort y1, GLshort x2, GLshort y2 );
void ( APIENTRY * qglRectsv )( const GLshort *v1, const GLshort *v2 );
GLint ( APIENTRY * qglRenderMode )( GLenum mode );
void ( APIENTRY * qglRotated )( GLdouble angle, GLdouble x, GLdouble y, GLdouble z );
void ( APIENTRY * qglRotatef )( GLfloat angle, GLfloat x, GLfloat y, GLfloat z );
void ( APIENTRY * qglScaled )( GLdouble x, GLdouble y, GLdouble z );
void ( APIENTRY * qglScalef )( GLfloat x, GLfloat y, GLfloat z );
void ( APIENTRY * qglScissor )( GLint x, GLint y, GLsizei width, GLsizei height );
void ( APIENTRY * qglSelectBuffer )( GLsizei size, GLuint *buffer );
void ( APIENTRY * qglShadeModel )( GLenum mode );
void ( APIENTRY * qglStencilFunc )( GLenum func, GLint ref, GLuint mask );
void ( APIENTRY * qglStencilMask )( GLuint mask );
void ( APIENTRY * qglStencilOp )( GLenum fail, GLenum zfail, GLenum zpass );
void ( APIENTRY * qglTexCoord1d )( GLdouble s );
void ( APIENTRY * qglTexCoord1dv )( const GLdouble *v );
void ( APIENTRY * qglTexCoord1f )( GLfloat s );
void ( APIENTRY * qglTexCoord1fv )( const GLfloat *v );
void ( APIENTRY * qglTexCoord1i )( GLint s );
void ( APIENTRY * qglTexCoord1iv )( const GLint *v );
void ( APIENTRY * qglTexCoord1s )( GLshort s );
void ( APIENTRY * qglTexCoord1sv )( const GLshort *v );
void ( APIENTRY * qglTexCoord2d )( GLdouble s, GLdouble t );
void ( APIENTRY * qglTexCoord2dv )( const GLdouble *v );
void ( APIENTRY * qglTexCoord2f )( GLfloat s, GLfloat t );
void ( APIENTRY * qglTexCoord2fv )( const GLfloat *v );
void ( APIENTRY * qglTexCoord2i )( GLint s, GLint t );
void ( APIENTRY * qglTexCoord2iv )( const GLint *v );
void ( APIENTRY * qglTexCoord2s )( GLshort s, GLshort t );
void ( APIENTRY * qglTexCoord2sv )( const GLshort *v );
void ( APIENTRY * qglTexCoord3d )( GLdouble s, GLdouble t, GLdouble r );
void ( APIENTRY * qglTexCoord3dv )( const GLdouble *v );
void ( APIENTRY * qglTexCoord3f )( GLfloat s, GLfloat t, GLfloat r );
void ( APIENTRY * qglTexCoord3fv )( const GLfloat *v );
void ( APIENTRY * qglTexCoord3i )( GLint s, GLint t, GLint r );
void ( APIENTRY * qglTexCoord3iv )( const GLint *v );
void ( APIENTRY * qglTexCoord3s )( GLshort s, GLshort t, GLshort r );
void ( APIENTRY * qglTexCoord3sv )( const GLshort *v );
void ( APIENTRY * qglTexCoord4d )( GLdouble s, GLdouble t, GLdouble r, GLdouble q );
void ( APIENTRY * qglTexCoord4dv )( const GLdouble *v );
void ( APIENTRY * qglTexCoord4f )( GLfloat s, GLfloat t, GLfloat r, GLfloat q );
void ( APIENTRY * qglTexCoord4fv )( const GLfloat *v );
void ( APIENTRY * qglTexCoord4i )( GLint s, GLint t, GLint r, GLint q );
void ( APIENTRY * qglTexCoord4iv )( const GLint *v );
void ( APIENTRY * qglTexCoord4s )( GLshort s, GLshort t, GLshort r, GLshort q );
void ( APIENTRY * qglTexCoord4sv )( const GLshort *v );
void ( APIENTRY * qglTexCoordPointer )( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
void ( APIENTRY * qglTexEnvf )( GLenum target, GLenum pname, GLfloat param );
void ( APIENTRY * qglTexEnvfv )( GLenum target, GLenum pname, const GLfloat *params );
void ( APIENTRY * qglTexEnvi )( GLenum target, GLenum pname, GLint param );
void ( APIENTRY * qglTexEnviv )( GLenum target, GLenum pname, const GLint *params );
void ( APIENTRY * qglTexGend )( GLenum coord, GLenum pname, GLdouble param );
void ( APIENTRY * qglTexGendv )( GLenum coord, GLenum pname, const GLdouble *params );
void ( APIENTRY * qglTexGenf )( GLenum coord, GLenum pname, GLfloat param );
void ( APIENTRY * qglTexGenfv )( GLenum coord, GLenum pname, const GLfloat *params );
void ( APIENTRY * qglTexGeni )( GLenum coord, GLenum pname, GLint param );
void ( APIENTRY * qglTexGeniv )( GLenum coord, GLenum pname, const GLint *params );
void ( APIENTRY * qglTexImage1D )( GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
void ( APIENTRY * qglTexImage2D )( GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels );
void ( APIENTRY * qglTexParameterf )( GLenum target, GLenum pname, GLfloat param );
void ( APIENTRY * qglTexParameterfv )( GLenum target, GLenum pname, const GLfloat *params );
void ( APIENTRY * qglTexParameteri )( GLenum target, GLenum pname, GLint param );
void ( APIENTRY * qglTexParameteriv )( GLenum target, GLenum pname, const GLint *params );
void ( APIENTRY * qglTexSubImage1D )( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels );
void ( APIENTRY * qglTexSubImage2D )( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels );
void ( APIENTRY * qglTranslated )( GLdouble x, GLdouble y, GLdouble z );
void ( APIENTRY * qglTranslatef )( GLfloat x, GLfloat y, GLfloat z );
void ( APIENTRY * qglVertex2d )( GLdouble x, GLdouble y );
void ( APIENTRY * qglVertex2dv )( const GLdouble *v );
void ( APIENTRY * qglVertex2f )( GLfloat x, GLfloat y );
void ( APIENTRY * qglVertex2fv )( const GLfloat *v );
void ( APIENTRY * qglVertex2i )( GLint x, GLint y );
void ( APIENTRY * qglVertex2iv )( const GLint *v );
void ( APIENTRY * qglVertex2s )( GLshort x, GLshort y );
void ( APIENTRY * qglVertex2sv )( const GLshort *v );
void ( APIENTRY * qglVertex3d )( GLdouble x, GLdouble y, GLdouble z );
void ( APIENTRY * qglVertex3dv )( const GLdouble *v );
void ( APIENTRY * qglVertex3f )( GLfloat x, GLfloat y, GLfloat z );
void ( APIENTRY * qglVertex3fv )( const GLfloat *v );
void ( APIENTRY * qglVertex3i )( GLint x, GLint y, GLint z );
void ( APIENTRY * qglVertex3iv )( const GLint *v );
void ( APIENTRY * qglVertex3s )( GLshort x, GLshort y, GLshort z );
void ( APIENTRY * qglVertex3sv )( const GLshort *v );
void ( APIENTRY * qglVertex4d )( GLdouble x, GLdouble y, GLdouble z, GLdouble w );
void ( APIENTRY * qglVertex4dv )( const GLdouble *v );
void ( APIENTRY * qglVertex4f )( GLfloat x, GLfloat y, GLfloat z, GLfloat w );
void ( APIENTRY * qglVertex4fv )( const GLfloat *v );
void ( APIENTRY * qglVertex4i )( GLint x, GLint y, GLint z, GLint w );
void ( APIENTRY * qglVertex4iv )( const GLint *v );
void ( APIENTRY * qglVertex4s )( GLshort x, GLshort y, GLshort z, GLshort w );
void ( APIENTRY * qglVertex4sv )( const GLshort *v );
void ( APIENTRY * qglVertexPointer )( GLint size, GLenum type, GLsizei stride, const GLvoid *pointer );
void ( APIENTRY * qglViewport )( GLint x, GLint y, GLsizei width, GLsizei height );

void ( APIENTRY * qglPointParameterfEXT )( GLenum param, GLfloat value );
void ( APIENTRY * qglPointParameterfvEXT )( GLenum param, const GLfloat *value );
void ( APIENTRY * qglColorTableEXT )( int, int, int, int, int, const void * );

void ( APIENTRY * qglMTexCoord2fSGIS )( GLenum, GLfloat, GLfloat );
void ( APIENTRY * qglSelectTextureSGIS )( GLenum );

void ( APIENTRY * qglActiveTextureARB )( GLenum texture );
void ( APIENTRY * qglClientActiveTextureARB )( GLenum texture );
void ( APIENTRY * qglMultiTexCoord1dARB )( GLenum target, GLdouble s );
void ( APIENTRY * qglMultiTexCoord1dvARB )( GLenum target, const GLdouble *v );
void ( APIENTRY * qglMultiTexCoord1fARB )( GLenum target, GLfloat s );
void ( APIENTRY * qglMultiTexCoord1fvARB )( GLenum target, const GLfloat *v );
void ( APIENTRY * qglMultiTexCoord1iARB )( GLenum target, GLint s );
void ( APIENTRY * qglMultiTexCoord1ivARB )( GLenum target, const GLint *v );
void ( APIENTRY * qglMultiTexCoord1sARB )( GLenum target, GLshort s );
void ( APIENTRY * qglMultiTexCoord1svARB )( GLenum target, const GLshort *v );
void ( APIENTRY * qglMultiTexCoord2dARB )( GLenum target, GLdouble s );
void ( APIENTRY * qglMultiTexCoord2dvARB )( GLenum target, const GLdouble *v );
void ( APIENTRY * qglMultiTexCoord2fARB )( GLenum target, GLfloat s );
void ( APIENTRY * qglMultiTexCoord2fvARB )( GLenum target, const GLfloat *v );
void ( APIENTRY * qglMultiTexCoord2iARB )( GLenum target, GLint s );
void ( APIENTRY * qglMultiTexCoord2ivARB )( GLenum target, const GLint *v );
void ( APIENTRY * qglMultiTexCoord2sARB )( GLenum target, GLshort s );
void ( APIENTRY * qglMultiTexCoord2svARB )( GLenum target, const GLshort *v );
void ( APIENTRY * qglMultiTexCoord3dARB )( GLenum target, GLdouble s );
void ( APIENTRY * qglMultiTexCoord3dvARB )( GLenum target, const GLdouble *v );
void ( APIENTRY * qglMultiTexCoord3fARB )( GLenum target, GLfloat s );
void ( APIENTRY * qglMultiTexCoord3fvARB )( GLenum target, const GLfloat *v );
void ( APIENTRY * qglMultiTexCoord3iARB )( GLenum target, GLint s );
void ( APIENTRY * qglMultiTexCoord3ivARB )( GLenum target, const GLint *v );
void ( APIENTRY * qglMultiTexCoord3sARB )( GLenum target, GLshort s );
void ( APIENTRY * qglMultiTexCoord3svARB )( GLenum target, const GLshort *v );
void ( APIENTRY * qglMultiTexCoord4dARB )( GLenum target, GLdouble s );
void ( APIENTRY * qglMultiTexCoord4dvARB )( GLenum target, const GLdouble *v );
void ( APIENTRY * qglMultiTexCoord4fARB )( GLenum target, GLfloat s );
void ( APIENTRY * qglMultiTexCoord4fvARB )( GLenum target, const GLfloat *v );
void ( APIENTRY * qglMultiTexCoord4iARB )( GLenum target, GLint s );
void ( APIENTRY * qglMultiTexCoord4ivARB )( GLenum target, const GLint *v );
void ( APIENTRY * qglMultiTexCoord4sARB )( GLenum target, GLshort s );
void ( APIENTRY * qglMultiTexCoord4svARB )( GLenum target, const GLshort *v );

extern "C" void InitIglToQgl( _QERQglTable *g_QglTable ){
/*
   // initialze the qgl functions
   qglAccum = NULL;
   qglAlphaFunc = g_QglTable->m_pfn_qglAlphaFunc;
   qglAreTexturesResident = NULL;
   qglArrayElement = NULL;
   qglBegin = g_QglTable->m_pfn_qglBegin;
   qglBindTexture = g_QglTable->m_pfn_qglBindTexture;
   qglBitmap = NULL;
   qglBlendFunc = g_QglTable->m_pfn_qglBlendFunc;
   qglCallList = g_QglTable->m_pfn_qglCallList;
   qglCallLists = g_QglTable->m_pfn_qglCallLists;
   qglClear = g_QglTable->m_pfn_qglClear;
   qglClearAccum = NULL;
   qglClearColor = g_QglTable->m_pfn_qglClearColor;
   qglClearDepth = g_QglTable->m_pfn_qglClearDepth;
   qglClearIndex = NULL;
   qglClearStencil = NULL;
   qglClipPlane = NULL;
   qglColor3b = NULL;
   qglColor3bv = NULL;
   qglColor3d = NULL;
   qglColor3dv = NULL;
   qglColor3f = g_QglTable->m_pfn_qglColor3f;
   qglColor3fv = g_QglTable->m_pfn_qglColor3fv;
   qglColor3i = NULL;
   qglColor3iv = NULL;
   qglColor3s = NULL;
   qglColor3sv = NULL;
   qglColor3ub = NULL;
   qglColor3ubv = NULL;
   qglColor3ui = NULL;
   qglColor3uiv = NULL;
   qglColor3us = NULL;
   qglColor3usv = NULL;
   qglColor4b = NULL;
   qglColor4bv = NULL;
   qglColor4d = NULL;
   qglColor4dv = NULL;
   qglColor4f = g_QglTable->m_pfn_qglColor4f;
   qglColor4fv = g_QglTable->m_pfn_qglColor4fv;
   qglColor4i = NULL;
   qglColor4iv = NULL;
   qglColor4s = NULL;
   qglColor4sv = NULL;
   qglColor4ub = NULL;
   qglColor4ubv = NULL;
   qglColor4ui = NULL;
   qglColor4uiv = NULL;
   qglColor4us = NULL;
   qglColor4usv = NULL;
   qglColorMask = NULL;
   qglColorMaterial = NULL;
   qglColorPointer = NULL;
   qglCopyPixels = NULL;
   qglCopyTexImage1D = NULL;
   qglCopyTexImage2D = NULL;
   qglCopyTexSubImage1D = NULL;
   qglCopyTexSubImage2D = NULL;
   qglCullFace = g_QglTable->m_pfn_qglCullFace;
   qglDeleteLists = g_QglTable->m_pfn_qglDeleteLists;
   qglDeleteTextures = g_QglTable->m_pfn_qglDeleteTextures;
   qglDepthFunc = g_QglTable->m_pfn_qglDepthFunc;
   qglDepthMask = g_QglTable->m_pfn_qglDepthMask;
   qglDepthRange = NULL;
   qglDisable = g_QglTable->m_pfn_qglDisable;
   qglDisableClientState = NULL;
   qglDrawArrays = NULL;
   qglDrawBuffer = NULL;
   qglDrawElements = NULL;
   qglDrawPixels = NULL;
   qglEdgeFlag = NULL;
   qglEdgeFlagPointer = NULL;
   qglEdgeFlagv = NULL;
   qglEnable = g_QglTable->m_pfn_qglEnable;
   qglEnableClientState = NULL;
   qglEnd = g_QglTable->m_pfn_qglEnd;
   qglEndList = g_QglTable->m_pfn_qglEndList;
   qglEvalCoord1d = NULL;
   qglEvalCoord1dv = NULL;
   qglEvalCoord1f  = NULL;
   qglEvalCoord1fv = NULL;
   qglEvalCoord2d = NULL;
   qglEvalCoord2dv = NULL;
   qglEvalCoord2f= NULL;
   qglEvalCoord2fv = NULL;
   qglEvalMesh1 = NULL;
   qglEvalMesh2 = NULL;
   qglEvalPoint1 = NULL;
   qglEvalPoint2 = NULL;
   qglFeedbackBuffer = NULL;
   qglFinish = NULL;
   qglFlush = NULL;
   qglFogf = g_QglTable->m_pfn_qglFogf;
   qglFogfv = g_QglTable->m_pfn_qglFogfv;
   qglFogi = g_QglTable->m_pfn_qglFogi;
   qglFogiv = NULL;
   qglFrontFace = NULL;
   qglFrustum = NULL;
   qglGenLists = g_QglTable->m_pfn_qglGenLists;
   qglGenTextures = g_QglTable->m_pfn_qglGenTextures;
   qglGetBooleanv = NULL;
   qglGetClipPlane = NULL;
   qglGetDoublev = NULL;
   qglGetError = NULL;
   qglGetFloatv = NULL;
   qglGetIntegerv = NULL;
   qglGetLightfv = NULL;
   qglGetLightiv = NULL;
   qglGetMapdv = NULL;
   qglGetMapfv = NULL;
   qglGetMapiv = NULL;
   qglGetMaterialfv = NULL;
   qglGetMaterialiv = NULL;
   qglGetPixelMapfv = NULL;
   qglGetPixelMapuiv = NULL;
   qglGetPixelMapusv = NULL;
   qglGetPointerv = NULL;
   qglGetPolygonStipple = NULL;
   qglGetString = NULL;
   qglGetTexEnvfv = NULL;
   qglGetTexEnviv = NULL;
   qglGetTexGendv = NULL;
   qglGetTexGenfv = NULL;
   qglGetTexGeniv = NULL;
   qglGetTexImage = NULL;
   qglGetTexLevelParameterfv = NULL;
   qglGetTexLevelParameteriv = NULL;
   qglGetTexParameterfv = NULL;
   qglGetTexParameteriv = NULL;
   qglHint = g_QglTable->m_pfn_qglHint;
   qglIndexMask = NULL;
   qglIndexPointer = NULL;
   qglIndexd = NULL;
   qglIndexdv = NULL;
   qglIndexf = NULL;
   qglIndexfv = NULL;
   qglIndexi = NULL;
   qglIndexiv = NULL;
   qglIndexs = NULL;
   qglIndexsv = NULL;
   qglIndexub = NULL;
   qglIndexubv = NULL;
   qglInitNames = NULL;
   qglInterleavedArrays = NULL;
   qglIsEnabled = NULL;
   qglIsList = NULL;
   qglIsTexture = NULL;
   qglLightModelf = NULL;
   qglLightModelfv = NULL;
   qglLightModeli = NULL;
   qglLightModeliv = NULL;
   qglLightf = NULL;
   qglLightfv = g_QglTable->m_pfn_qglLightfv;
   qglLighti = NULL;
   qglLightiv = NULL;
   qglLineStipple = g_QglTable->m_pfn_qglLineStipple;
   qglLineWidth = g_QglTable->m_pfn_qglLineWidth;
   qglListBase = g_QglTable->m_pfn_qglListBase;
   qglLoadIdentity = g_QglTable->m_pfn_qglLoadIdentity;
   qglLoadMatrixd = NULL;
   qglLoadMatrixf = NULL;
   qglLoadName = NULL;
   qglLogicOp = NULL;
   qglMap1d = NULL;
   qglMap1f = NULL;
   qglMap2d = NULL;
   qglMap2f = NULL;
   qglMapGrid1d = NULL;
   qglMapGrid1f = NULL;
   qglMapGrid2d = NULL;
   qglMapGrid2f = NULL;
   qglMaterialf = g_QglTable->m_pfn_qglMaterialf;
   qglMaterialfv = g_QglTable->m_pfn_qglMaterialfv;
   qglMateriali = NULL;
   qglMaterialiv = NULL;
   qglMatrixMode = g_QglTable->m_pfn_qglMatrixMode;
   qglMultMatrixd = NULL;
   qglMultMatrixf = g_QglTable->m_pfn_qglMultMatrixf;
   qglNewList = g_QglTable->m_pfn_qglNewList;
   qglNormal3b = NULL;
   qglNormal3bv = NULL;
   qglNormal3d = NULL;
   qglNormal3dv = NULL;
   qglNormal3f = g_QglTable->m_pfn_qglNormal3f;
   qglNormal3fv = g_QglTable->m_pfn_qglNormal3fv;
   qglNormal3i = NULL;
   qglNormal3iv = NULL;
   qglNormal3s = NULL;
   qglNormal3sv = NULL;
   qglNormalPointer = NULL;
   qglOrtho = g_QglTable->m_pfn_qglOrtho;
   qglPassThrough = NULL;
   qglPixelMapfv = NULL;
   qglPixelMapuiv = NULL;
   qglPixelMapusv = NULL;
   qglPixelStoref = NULL;
   qglPixelStorei = NULL;
   qglPixelTransferf = NULL;
   qglPixelTransferi = NULL;
   qglPixelZoom = NULL;
   qglPointSize = g_QglTable->m_pfn_qglPointSize;
   qglPolygonMode = g_QglTable->m_pfn_qglPolygonMode;
   qglPolygonOffset = NULL;
   qglPolygonStipple = NULL;
   qglPopAttrib = g_QglTable->m_pfn_qglPopAttrib;
   qglPopClientAttrib = NULL;
   qglPopMatrix = g_QglTable->m_pfn_qglPopMatrix;
   qglPopName = NULL;
   qglPrioritizeTextures = NULL;
   qglPushAttrib = g_QglTable->m_pfn_qglPushAttrib;
   qglPushClientAttrib = NULL;
   qglPushMatrix = g_QglTable->m_pfn_qglPushMatrix;
   qglPushName = NULL;
   qglRasterPos2d = NULL;
   qglRasterPos2dv = NULL;
   qglRasterPos2f = NULL;
   qglRasterPos2fv = NULL;
   qglRasterPos2i = NULL;
   qglRasterPos2iv = NULL;
   qglRasterPos2s = NULL;
   qglRasterPos2sv = NULL;
   qglRasterPos3d = NULL;
   qglRasterPos3dv = NULL;
   qglRasterPos3f = NULL;
   qglRasterPos3fv = g_QglTable->m_pfn_qglRasterPos3fv;
   qglRasterPos3i = NULL;
   qglRasterPos3iv = NULL;
   qglRasterPos3s = NULL;
   qglRasterPos3sv = NULL;
   qglRasterPos4d = NULL;
   qglRasterPos4dv = NULL;
   qglRasterPos4f = NULL;
   qglRasterPos4fv = NULL;
   qglRasterPos4i = NULL;
   qglRasterPos4iv = NULL;
   qglRasterPos4s = NULL;
   qglRasterPos4sv = NULL;
   qglReadBuffer = NULL;
   qglReadPixels = NULL;
   qglRectd = NULL;
   qglRectdv = NULL;
   qglRectf = NULL;
   qglRectfv = NULL;
   qglRecti = NULL;
   qglRectiv = NULL;
   qglRects = NULL;
   qglRectsv = NULL;
   qglRenderMode = NULL;
   qglRotated = g_QglTable->m_pfn_qglRotated;
   qglRotatef = g_QglTable->m_pfn_qglRotatef;
   qglScaled = NULL;
   qglScalef = g_QglTable->m_pfn_qglScalef;
   qglScissor = g_QglTable->m_pfn_qglScissor;
   qglSelectBuffer = NULL;
   qglShadeModel = g_QglTable->m_pfn_qglShadeModel;
   qglStencilFunc = NULL;
   qglStencilMask = NULL;
   qglStencilOp = NULL;
   qglTexCoord1d = NULL;
   qglTexCoord1dv = NULL;
   qglTexCoord1f = NULL;
   qglTexCoord1fv = NULL;
   qglTexCoord1i = NULL;
   qglTexCoord1iv = NULL;
   qglTexCoord1s = NULL;
   qglTexCoord1sv = NULL;
   qglTexCoord2d = NULL;
   qglTexCoord2dv = NULL;
   qglTexCoord2f = g_QglTable->m_pfn_qglTexCoord2f;
   qglTexCoord2fv = g_QglTable->m_pfn_qglTexCoord2fv;
   qglTexCoord2i = NULL;
   qglTexCoord2iv = NULL;
   qglTexCoord2s = NULL;
   qglTexCoord2sv = NULL;
   qglTexCoord3d = NULL;
   qglTexCoord3dv = NULL;
   qglTexCoord3f = NULL;
   qglTexCoord3fv = NULL;
   qglTexCoord3i = NULL;
   qglTexCoord3iv = NULL;
   qglTexCoord3s = NULL;
   qglTexCoord3sv = NULL;
   qglTexCoord4d = NULL;
   qglTexCoord4dv = NULL;
   qglTexCoord4f = NULL;
   qglTexCoord4fv = NULL;
   qglTexCoord4i = NULL;
   qglTexCoord4iv = NULL;
   qglTexCoord4s = NULL;
   qglTexCoord4sv = NULL;
   qglTexCoordPointer = NULL;
   qglTexEnvf = g_QglTable->m_pfn_qglTexEnvf;
   qglTexEnvfv = NULL;
   qglTexEnvi = NULL;
   qglTexEnviv = NULL;
   qglTexGend = NULL;
   qglTexGendv = NULL;
   qglTexGenf = g_QglTable->m_pfn_qglTexGenf;
   qglTexGenfv = NULL;
   qglTexGeni = NULL;
   qglTexGeniv = NULL;
   qglTexImage1D = g_QglTable->m_pfn_qglTexImage1D;
   qglTexImage2D = g_QglTable->m_pfn_qglTexImage2D;
   qglTexParameterf = g_QglTable->m_pfn_qglTexParameterf;
   qglTexParameterfv = g_QglTable->m_pfn_qglTexParameterfv;
   qglTexParameteri = g_QglTable->m_pfn_qglTexParameteri;
   qglTexParameteriv = g_QglTable->m_pfn_qglTexParameteriv;
   qglTexSubImage1D = g_QglTable->m_pfn_qglTexSubImage1D;
   qglTexSubImage2D = g_QglTable->m_pfn_qglTexSubImage2D;
   qglTranslated = g_QglTable->m_pfn_qglTranslated;
   qglTranslatef = g_QglTable->m_pfn_qglTranslatef;
   qglVertex2d = NULL;
   qglVertex2dv = NULL;
   qglVertex2f = g_QglTable->m_pfn_qglVertex2f;
   qglVertex2fv = NULL;
   qglVertex2i = NULL;
   qglVertex2iv = NULL;
   qglVertex2s = NULL;
   qglVertex2sv = NULL;
   qglVertex3d = NULL;
   qglVertex3dv = NULL;
   qglVertex3f = g_QglTable->m_pfn_qglVertex3f;
   qglVertex3fv = g_QglTable->m_pfn_qglVertex3fv;
   qglVertex3i = NULL;
   qglVertex3iv = NULL;
   qglVertex3s = NULL;
   qglVertex3sv = NULL;
   qglVertex4d = NULL;
   qglVertex4dv = NULL;
   qglVertex4f = NULL;
   qglVertex4fv = NULL;
   qglVertex4i = NULL;
   qglVertex4iv = NULL;
   qglVertex4s = NULL;
   qglVertex4sv = NULL;
   qglVertexPointer = NULL;
   qglViewport = g_QglTable->m_pfn_qglViewport;

   qglPointParameterfEXT = NULL;
   qglPointParameterfvEXT = NULL;
   qglColorTableEXT = NULL;

   qglMTexCoord2fSGIS = NULL;
   qglSelectTextureSGIS = NULL;

   qglActiveTextureARB = NULL;
   qglClientActiveTextureARB = NULL;
   qglMultiTexCoord1dARB = NULL;
   qglMultiTexCoord1dvARB = NULL;
   qglMultiTexCoord1fARB = NULL;
   qglMultiTexCoord1fvARB = NULL;
   qglMultiTexCoord1iARB = NULL;
   qglMultiTexCoord1ivARB = NULL;
   qglMultiTexCoord1sARB = NULL;
   qglMultiTexCoord1svARB = NULL;
   qglMultiTexCoord2dARB = NULL;
   qglMultiTexCoord2dvARB = NULL;
   qglMultiTexCoord2fARB = NULL;
   qglMultiTexCoord2fvARB = NULL;
   qglMultiTexCoord2iARB = NULL;
   qglMultiTexCoord2ivARB = NULL;
   qglMultiTexCoord2sARB = NULL;
   qglMultiTexCoord2svARB = NULL;
   qglMultiTexCoord3dARB = NULL;
   qglMultiTexCoord3dvARB = NULL;
   qglMultiTexCoord3fARB = NULL;
   qglMultiTexCoord3fvARB = NULL;
   qglMultiTexCoord3iARB = NULL;
   qglMultiTexCoord3ivARB = NULL;
   qglMultiTexCoord3sARB = NULL;
   qglMultiTexCoord3svARB = NULL;
   qglMultiTexCoord4dARB = NULL;
   qglMultiTexCoord4dvARB = NULL;
   qglMultiTexCoord4fARB = NULL;
   qglMultiTexCoord4fvARB = NULL;
   qglMultiTexCoord4iARB = NULL;
   qglMultiTexCoord4ivARB = NULL;
   qglMultiTexCoord4sARB = NULL;
   qglMultiTexCoord4svARB = NULL;
 */
}

#endif // _IGL_TO_QGL_H_
