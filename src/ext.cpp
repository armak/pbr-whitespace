//--------------------------------------------------------------------------//
// iq / rgba  .  tiny codes  .  2008                                        //
//--------------------------------------------------------------------------//

#ifdef WINDOWS
#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_LEAN
#include <windows.h>
#endif
#include <GL/gl.h>
#include "glext.h"
#ifdef LINUX
#include <GL/glx.h>
#endif

//--- d a t a ---------------------------------------------------------------

#include "ext.h"
void* myglfunc[9];
void EXT_Init( void )
{
	myglfunc[0] = wglGetProcAddress("glCreateProgram");
	myglfunc[1] = wglGetProcAddress("glCreateShader");
	myglfunc[2] = wglGetProcAddress("glShaderSource");
	myglfunc[3] = wglGetProcAddress("glCompileShader");
	myglfunc[4] = wglGetProcAddress("glAttachShader");
	myglfunc[5] = wglGetProcAddress("glLinkProgram");
	myglfunc[6] = wglGetProcAddress("glUseProgram");
	myglfunc[7] = wglGetProcAddress("glUniform1i");
	myglfunc[8] = wglGetProcAddress("glGetUniformLocation");
}


