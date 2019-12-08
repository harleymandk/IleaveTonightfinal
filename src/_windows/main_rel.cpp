//--------------------------------------------------------------------------//
// Code+Music done by Harleyman/Mirror...  
/// Mail :  harleymandk@gmail.com
// This is the code for "I leave tonight" a 4K-PC demo Released at TrSac 2015
/*--------------------------------

------------------------------------------*/
#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_LEAN
#include <windows.h>
#include <mmsystem.h>
#include "../clinkster.h"
#include "../intro.h"
#include "../config.h"
#include <stdio.h>
static const  PIXELFORMATDESCRIPTOR pfd = {
    sizeof(PIXELFORMATDESCRIPTOR),  // size of structure
    1,                              // default version
    PFD_DRAW_TO_BITMAP |            // window drawing support
    PFD_SUPPORT_OPENGL |            // OpenGL support
    PFD_DOUBLEBUFFER,               // double buffering support
    PFD_TYPE_RGBA,                  // RGBA color mode
    32,                           // 32 bit color mode
    0, 0, 0, 0, 0, 0,               // ignore color bits, non-palettized mode
    8,                              // no alpha buffer
    0,                              // ignore shift bit
    8,                              // no accumulation buffer
    0, 0, 0, 0,                     // ignore accumulation bits
    16,                             // 16 bit z-buffer size
    8,                              // no stencil buffer
    8,                              // no auxiliary buffer
    PFD_MAIN_PLANE,                 // main drawing plane
    0,                              // reserved
    0, 0, 0 };                      // layer masks ignored


static DEVMODE screenSettings = { {0},
    0,0,156,0,0x001c0000,{0},0,0,0,0,0,{0},0,32,XRES,YRES,{0}, 0,           // Visuatl Studio 2005
    #if(WINVER >= 0x0400)
    0,0,0,0,0,0,
    #if (WINVER >= 0x0500) || (_WIN32_WINNT >= 0x0400)
    0,0
    #endif
    #endif
    };

#ifdef __cplusplus
extern "C" 
{
#endif
int  _fltused = 0;
#ifdef __cplusplus
}
#endif



//----------------------------------------------------------------------------


void entrypoint( void )
{
	
	// full screen
    if( ChangeDisplaySettings(&screenSettings,CDS_FULLSCREEN)!=DISP_CHANGE_SUCCESSFUL) return;
    ShowCursor( 0 );
    // create window
    HWND hWnd = CreateWindow( "static",0,WS_POPUP|WS_VISIBLE,0,0,XRES,YRES,0,0,0,0);
    if( !hWnd ) return;
    HDC hDC = GetDC(hWnd);
    // initalize opengl
    if( !SetPixelFormat(hDC,ChoosePixelFormat(hDC,&pfd),&pfd) ) return;
    wglMakeCurrent(hDC,wglCreateContext(hDC));
	Clinkster_GenerateMusic();
    // init intro
    if( !intro_init() ) return;
    // play intro
    long t = 0;
    long to = timeGetTime();
	Clinkster_StartMusic();
    do 
    {
		
        t = timeGetTime() - to;
        intro_do( t );
        wglSwapLayerBuffers( hDC, WGL_SWAP_MAIN_PLANE ); 
	}
	while ( !GetAsyncKeyState(VK_ESCAPE)  );
    #ifdef CLEANDESTROY
#endif
    ExitProcess(0);
}
