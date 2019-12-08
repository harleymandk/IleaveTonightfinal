#ifdef WINDOWS
#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_LEAN
#include <windows.h>
#endif
#include <GL/gl.h>
#include "glext.h"


//--- d a t a ---------------------------------------------------------------

#include "ext.h"

static char *strs[] = {
	"glCreateProgram",
	"glCreateShader",
	"glShaderSource",
	"glCompileShader",
	"glAttachShader",
	"glLinkProgram",
	"glUseProgram",
    "glUniform1i",
	"glUniform1f",
	"glUniform2f",
    "glGetUniformLocation",
   
    };

void *myglfunc[NUMFUNCIONES];

int EXT_Init( void )
{
    for( int i=0; i<NUMFUNCIONES; i++ )
    {
        #ifdef WIN32
        myglfunc[i] = wglGetProcAddress( strs[i] );
        #endif
 
    }
    return( 1 );
}


