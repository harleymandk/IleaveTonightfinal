
%include "src/clinkster.inc"

global _main

extern __imp__GetAsyncKeyState@4
extern __imp__ExitProcess@4
extern __imp__Sleep@4

	section main text align=1

_main:
	add		esp, byte 2*4

	call	Clinkster_GenerateMusic
	call	Clinkster_StartMusic

.playloop:
	mov		ebx, 60
	push	eax
	fistp	dword [esp]
	xor		edx, edx
	div		ebx
	push	edx
	push	eax
	push	eax
	fistp	dword [esp]
	xor		edx, edx
	div		ebx
	push	edx
	push	eax

	add		esp, byte 5*4

	push	byte 100
	call	[__imp__Sleep@4]

	push	byte 27
	call	[__imp__GetAsyncKeyState@4]
	test	ax, ax
	je		.playloop

	push	byte 0
	call	[__imp__ExitProcess@4]
