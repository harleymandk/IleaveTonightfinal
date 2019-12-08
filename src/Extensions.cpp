#include "Extensions.h"

void *Extensions::Procs[EXTENSIONS_COUNT];

void Extensions::Init()
{
	for (int i = 0; i < EXTENSIONS_COUNT; i++)
	{
		Procs[i] = wglGetProcAddress(ExtensionProcNames[i]);
		if (!Procs[i]) throw EXCEPTION((string("Could not load extension procedure: ") + ExtensionProcNames[i]).c_str());
	}
}
