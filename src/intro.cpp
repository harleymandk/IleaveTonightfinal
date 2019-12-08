#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_LEAN
#include <windows.h>
#include <GL/gl.h>
#include <math.h>
#include "config.h"
#include "clinkster.h"
#include "ext.h"
#include "shaders/fsh_rayt.inl"
#include "shaders/vsh_2d.inl"
#include "fp.h"
#include <GL/glut.h>

void init()
{
	glClearColor(0.0,0.0,0.0,0.0); 
}

void reshape(int w,int h) 
{ 
 
    glViewport(0,0,w,h); 
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    gluOrtho2D(0,w,h,0); 
    glMatrixMode(GL_MODELVIEW); 
    glLoadIdentity(); 
}
static void initShader( int *pid, const char *fs5)
{
    pid[0] = oglCreateProgram();   
	const int fsId = oglCreateShader( GL_FRAGMENT_SHADER );
   oglShaderSource( fsId, 1, &fs5, 0 );
    oglCompileShader( fsId ); 
	oglAttachShader( pid[0], fsId );
	oglLinkProgram( pid[0] );
}

static int   pid;

int intro_init( void )
{
    if( !EXT_Init() )
        return( 0 );
	initShader( &pid,fsh_rayt5); 
return 1;
}

void intro_do( long time )
{
    const float t  = 0.001f*(float)time;
    oglUseProgram( pid );
	oglUniform2f( oglGetUniformLocation( pid, "resolution" ), (float)XRES, (float)YRES ); 
    oglUniform1f( oglGetUniformLocation( pid, "time" ), t );
	glRects( -1, -1, 1, 1 );
    glEnable(GL_BLEND);
    glEnable(GL_LINE_SMOOTH);
    glLineWidth(2.0);
	    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}