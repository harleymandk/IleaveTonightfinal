#ifndef __EXTENSIONS_H__
#define __EXTENSIONS_H__

#include "Common.h"

enum ExtensionTokens
{
	TEXIMAGE3D,

	CREATESHADER,
	DELETESHADER,
	SHADERSOURCE,
	COMPILESHADER,
	ATTACHSHADER,
	DETACHSHADER,
	GETSHADERIV,
	GETSHADERINFOLOG,

	CREATEPROGRAM,
	DELETEPROGRAM,
	LINKPROGRAM,
	USEPROGRAM,
	GETPROGRAMIV,
	GETPROGRAMINFOLOG,
	ACTIVETEXTURE,
	GETUNIFORMLOCATION,
	UNIFORM1F,
	UNIFORM2F,
	UNIFORM3F,
	UNIFORM4F,
	UNIFORM1I,
	UNIFORM2I,
	UNIFORM3I,
	UNIFORM4I,
	UNIFORMMATRIX4FV,

	GENRENDERBUFFERS,
	DELETERENDERBUFFERS,
	BINDRENDERBUFFER,
	RENDERBUFFERSTORAGE,

	GENFRAMEBUFFERS,
	DELETEFRAMEBUFFERS,
	BINDFRAMEBUFFER,
	FRAMEBUFFERTEXTURE2D,
	FRAMEBUFFERTEXTURELAYER,
	FRAMEBUFFERRENDERBUFFER,
	DRAWBUFFERS,

	EXTENSIONS_COUNT
};

static const char *const ExtensionProcNames[EXTENSIONS_COUNT] =
{
	"glTexImage3D",

	"glCreateShader",
	"glDeleteShader",
	"glShaderSource",
	"glCompileShader",
	"glAttachShader",
	"glDetachShader",
	"glGetShaderiv",
	"glGetShaderInfoLog",

	"glCreateProgram",
	"glDeleteProgram",
	"glLinkProgram",
	"glUseProgram",
	"glGetProgramiv",
	"glGetProgramInfoLog",
	"glActiveTexture",
	"glGetUniformLocation",
	"glUniform1f",
	"glUniform2f",
	"glUniform3f",
	"glUniform4f",
	"glUniform1i",
	"glUniform2i",
	"glUniform3i",
	"glUniform4i",
	"glUniformMatrix4fv",

	"glGenRenderbuffers",
	"glDeleteRenderbuffers",
	"glBindRenderbuffer",
	"glRenderbufferStorage",

	"glGenFramebuffers",
	"glDeleteFramebuffers",
	"glBindFramebuffer",
	"glFramebufferTexture2D",
	"glFramebufferTextureLayer",
	"glFramebufferRenderbuffer",
	"glDrawBuffers"
};

class Extensions
{
public:
	static void Init();
	static void *Procs[EXTENSIONS_COUNT];
};

#define EXTENSION(token) ((PFNGL ## token ## PROC) Extensions::Procs[(token)])

#define glTexImage3D				EXTENSION(TEXIMAGE3D)

#define glCreateShader				EXTENSION(CREATESHADER)
#define glDeleteShader				EXTENSION(DELETESHADER)
#define glShaderSource				EXTENSION(SHADERSOURCE)
#define glCompileShader				EXTENSION(COMPILESHADER)
#define glAttachShader				EXTENSION(ATTACHSHADER)
#define glDetachShader				EXTENSION(DETACHSHADER)
#define glGetShaderiv				EXTENSION(GETSHADERIV)
#define glGetShaderInfoLog			EXTENSION(GETSHADERINFOLOG)

#define glCreateProgram				EXTENSION(CREATEPROGRAM)
#define glDeleteProgram				EXTENSION(DELETEPROGRAM)
#define glLinkProgram				EXTENSION(LINKPROGRAM)
#define glUseProgram				EXTENSION(USEPROGRAM)
#define glGetProgramiv				EXTENSION(GETPROGRAMIV)
#define glGetProgramInfoLog			EXTENSION(GETPROGRAMINFOLOG)
#define glActiveTexture				EXTENSION(ACTIVETEXTURE)
#define glGetUniformLocation		EXTENSION(GETUNIFORMLOCATION)
#define glUniform1f					EXTENSION(UNIFORM1F)
#define glUniform2f					EXTENSION(UNIFORM2F)
#define glUniform3f					EXTENSION(UNIFORM3F)
#define glUniform4f					EXTENSION(UNIFORM4F)
#define glUniform1i					EXTENSION(UNIFORM1I)
#define glUniform2i					EXTENSION(UNIFORM2I)
#define glUniform3i					EXTENSION(UNIFORM3I)
#define glUniform4i					EXTENSION(UNIFORM4I)
#define glUniformMatrix4fv			EXTENSION(UNIFORMMATRIX4FV)

#define glGenRenderbuffers			EXTENSION(GENRENDERBUFFERS)
#define glDeleteRenderbuffers		EXTENSION(DELETERENDERBUFFERS)
#define glBindRenderbuffer			EXTENSION(BINDRENDERBUFFER)
#define glRenderbufferStorage		EXTENSION(RENDERBUFFERSTORAGE)

#define glGenFramebuffers			EXTENSION(GENFRAMEBUFFERS)
#define glDeleteFramebuffers		EXTENSION(DELETEFRAMEBUFFERS)
#define glBindFramebuffer			EXTENSION(BINDFRAMEBUFFER)
#define glFramebufferTexture2D		EXTENSION(FRAMEBUFFERTEXTURE2D)
#define glFramebufferTextureLayer	EXTENSION(FRAMEBUFFERTEXTURELAYER)
#define glFramebufferRenderbuffer	EXTENSION(FRAMEBUFFERRENDERBUFFER)
#define glDrawBuffers				EXTENSION(DRAWBUFFERS)

#endif
