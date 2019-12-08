#ifndef _CLINKSTER_H_
#define _CLINKSTER_H_
struct sample {	short left,right;};
extern "C" {
	void __stdcall Clinkster_GenerateMusic();
	void __stdcall Clinkster_StartMusic();
	extern struct sample Clinkster_MusicBuffer[];
};
#endif