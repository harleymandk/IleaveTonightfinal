#ifndef _EXTENSIONES_H_
#define _EXTENSIONES_H_

#ifdef WINDOWS
#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_LEAN
#include <windows.h>
#endif
#include <GL/gl.h>
#include "glext.h"

#ifdef DEBUG
#define NUMFUNCIONES 14
#else
#define NUMFUNCIONES 11
#endif

extern void *myglfunc[NUMFUNCIONES];

typedef GLuint (APIENTRYP PFNGLCREATEPROGRAMPROC) (void);
typedef GLuint (APIENTRYP PFNGLCREATESHADERPROC) (GLenum type);
typedef void (APIENTRYP PFNGLSHADERSOURCEPROC) (GLuint shader, GLsizei count, const GLchar* *string, const GLint *length); //
typedef void (APIENTRYP PFNGLCOMPILESHADERPROC) (GLuint shader);
typedef void (APIENTRYP PFNGLATTACHSHADERPROC) (GLuint program, GLuint shader);
typedef void (APIENTRYP PFNGLLINKPROGRAMPROC) (GLuint program);
typedef void (APIENTRYP PFNGLUSEPROGRAMPROC) (GLuint program);
typedef void (APIENTRYP PFNGLUNIFORM1IPROC) (GLint location, GLint v0);
typedef void (APIENTRYP PFNGLUNIFORM1FPROC) (GLint location, GLfloat v0);
typedef void (APIENTRYP PFNGLUNIFORM2FPROC) (GLint location, GLfloat v0, GLfloat v1);
typedef GLint (APIENTRYP PFNGLGETUNIFORMLOCATIONARBPROC) (GLhandleARB programObj, const GLcharARB *name);  ///

#define oglCreateProgram	            ((PFNGLCREATEPROGRAMPROC)myglfunc[0])
#define oglCreateShader		            ((PFNGLCREATESHADERPROC)myglfunc[1])
#define oglShaderSource                 ((PFNGLSHADERSOURCEPROC)myglfunc[2])
#define oglCompileShader                ((PFNGLCOMPILESHADERPROC)myglfunc[3])
#define oglAttachShader                 ((PFNGLATTACHSHADERPROC)myglfunc[4])
#define oglLinkProgram                  ((PFNGLLINKPROGRAMPROC)myglfunc[5])
#define oglUseProgram                   ((PFNGLUSEPROGRAMPROC)myglfunc[6])
#define oglUniform1i                    ((PFNGLUNIFORM1IPROC)myglfunc[7])
#define oglUniform1f                    ((PFNGLUNIFORM1FPROC)myglfunc[8])// New GLSL
#define oglUniform2f                    ((PFNGLUNIFORM2FPROC)myglfunc[9])// New GLSL
#define oglGetUniformLocation           ((PFNGLGETUNIFORMLOCATIONARBPROC)myglfunc[10])

/*

#define wglCreateContextAttribsARB ((PFNWGLCREATECONTEXTATTRIBSARB)glFP[0])
#define glCreateShader ((PFNGLCREATESHADERPROC)glFP[1])
#define glCreateProgram ((PFNGLCREATEPROGRAMPROC)glFP[2])
#define glShaderSource ((PFNGLSHADERSOURCEPROC)glFP[3])
#define glCompileShader ((PFNGLCOMPILESHADERPROC)glFP[4])
#define glAttachShader ((PFNGLATTACHSHADERPROC)glFP[5])
#define glLinkProgram ((PFNGLLINKPROGRAMPROC)glFP[6])
#define glUseProgram ((PFNGLUSEPROGRAMPROC)glFP[7])
#define glGenVertexArrays ((PFNGLGENVERTEXARRAYSPROC)glFP[8])
#define glBindVertexArray ((PFNGLBINDVERTEXARRAYPROC)glFP[9])
#define glGenBuffers ((PFNGLGENBUFFERSPROC)glFP[10])
#define glBindBuffer ((PFNGLBINDBUFFERPROC)glFP[11])
#define glBufferData ((PFNGLBUFFERDATAPROC)glFP[12])
#define glVertexAttribPointer ((PFNGLVERTEXATTRIBPOINTERPROC)glFP[13])
#define glEnableVertexAttribArray ((PFNGLENABLEVERTEXATTRIBARRAYPROC)glFP[14])
#define glBufferSubData ((PFNGLBUFFERSUBDATAPROC)glFP[15])
#define glUniformMatrix4fv ((PFNGLUNIFORMMATRIX4FVPROC)glFP[16])
#define glGetUniformLocation ((PFNGLGETUNIFORMLOCATIONPROC)glFP[17])
*/
// init
int EXT_Init( void );

#endif
