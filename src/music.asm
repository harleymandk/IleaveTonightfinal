; Clinkster music converted from music.xrns 2015-10-17 14:39:59

%define USES_SINE 1
%define USES_SAWTOOTH 1
%define USES_SQUARE 1
%define USES_PARABOLA 1
%define USES_TRIANGLE 0
%define USES_NOISE 1
%define USES_VELOCITY 0
%define USES_LONG_NOTES 0
%define USES_DELAY 1
%define USES_PANNING 1
%define USES_INDEXDECAY 1
%define USES_GAIN 1

%define SUBSAMPLES_PER_TICK 19600
%define MAX_INSTRUMENT_SUBSAMPLES 786432
%define MAX_TOTAL_INSTRUMENT_SAMPLES 524288
%define MAX_RELEASE_SUBSAMPLES 65536
%define TOTAL_SAMPLES 3801088
%define MAX_TRACK_INSTRUMENT_RENDERS 21

%define MAX_DELAY_LENGTH 14685
%define LEFT_DELAY_LENGTH 9790
%define RIGHT_DELAY_LENGTH 14685
%define DELAY_STRENGTH 0.65000087

%define NUMTRACKS 12
%define LOGNUMTICKS 10
%define MUSIC_LENGTH 768
%define TICKS_PER_SECOND 9.00000000


	section instdata data align=1

_InstrumentData:
	; 00:  Lead / 00|Clinkster (Basic)
	db	0,0,0,7,73,23,2,20,-3,68,68,12,12,12,-128,-53,-46,-98,2,-37
	db	60,2,0,1,2,1,0,0,2,1,0,13,2,1,0,1,4,2,0,1,4,2,1,0,0,2,0,1,4,2,0,1,4,2,1,0,0,2,1,0,-1
	; 01:  Lead / 00|Clinkster (Basic)
	db	0,0,0,7,73,23,2,20,-3,68,68,12,12,12,-128,-53,-46,-98,2,-37
	db	55,2,1,0,1,2,1,0,0,2,1,0,1,1,0,1,2,0,2,2,1,0,1,4,2,0,1,4,2,0,0,2,0,1,4,2,0,1,4,2,0,0,4,2,0,-1
	; 02:  Lead / 00|Clinkster (Basic)
	db	0,0,0,7,73,23,2,20,-3,68,68,12,12,12,-128,-53,-46,-98,2,-37
	db	53,2,1,0,1,4,2,0,1,4,2,0,0,2,0,1,4,2,0,1,4,2,0,0,4,2,0,10,2,0,0,2,0,10,2,0,0,2,0,-1
	; 03:  Snare Echo / 04|snare1
	db	0,4,26,10,4,10,20,4,6,124,124,-2,0,-80,0,0,-5,-71,-11,-12
	db	79,4,0,23,1,0,-1
	; 04:  Bassdrum Echo / 03|bassdrum
	db	0,3,0,0,0,64,1,116,1,42,42,26,0,-62,46,-128,-19,-120,7,-105
	db	36,2,0,-1
	db	-1
	; 05:  Bassdrum / 03|bassdrum
	db	0,3,0,0,0,64,1,116,1,37,37,26,0,-62,46,-128,-19,-120,7,-105
	db	36,2,0,-1
	; 06:  hihat / 02|hihat
	db	0,4,0,0,100,100,11,0,21,42,42,84,39,71,-12,72,7,-120,-61,-11
	db	70,1,0,-1
	; 07:  Bass String / 01|Clinkster (Basic)
	db	1,2,0,0,48,51,22,0,5,42,42,0,12,-12,-102,-16,28,-95,-120,-14
	db	26,16,0,9,8,7,0,1,32,8,0,0,16,0,-1
	; 08:  Strings / 01|Clinkster (Basic)
	db	1,2,0,0,48,51,22,0,5,42,42,0,12,-12,-102,-16,28,-95,-120,-14
	db	48,8,0,1,32,8,0,0,16,0,-1
	; 09:  Strings / 01|Clinkster (Basic)
	db	1,2,0,0,48,51,22,0,5,42,42,0,12,-12,-102,-16,28,-95,-120,-14
	db	55,32,16,8,0,-1
	; 10:  Strings / 01|Clinkster (Basic)
	db	1,2,0,0,48,51,22,0,5,42,42,0,12,-12,-102,-16,28,-95,-120,-14
	db	50,8,0,6,16,8,0,0,16,0,-1
	; 11:  Snare / 04|snare1
	db	0,4,26,10,4,10,20,4,6,84,170,-2,0,-80,0,0,-5,-71,-11,-12
	db	55,2,1,0,23,4,1,0,-1
	db	-1,-1

	section notepos data align=1

_NotePositions:
	; 00:  Lead / 00|Clinkster (Basic)
	; position 1 - pattern 1
	db	68,6,6,6,6,6,6,6,6,6
	; position 2 - pattern 2
	db	10,6,6,6,6,6,6,6,6,6
	; position 3 - pattern 3
	db	10,6,6,6,6,6,6,6
	; position 4 - pattern 4
	db	22,6,6,6,6,6,6,6,6,6
	; position 5 - pattern 4
	db	10,6,6,6,6,6,6,6,6,6
	; position 6 - pattern 5
	db	6,4,2,2,2,2,2,2,4,2,4,2,2,2,1,1,1,1,2,4,2,2,2,4,2,1,1,1,1,2,2
	; position 7 - pattern 6
	db	2,4,2,2,2,2,2,2,4,2,4,2,2,2,1,1,1,1,2,4,2,2,2,4,2,1,1,1,1,2,2
	; position 8 - pattern 7
	db	2,4,2,2,2,2,2,2,4,2,4,2,2,2,1,1,1,1,2,4,2,2,2,4,2,1,1,1,1,2,2
	; position 9 - pattern 7
	db	2,4,2,2,2,2,2,2,4,2,4,2,2,2,1,1,1,1,2,4,2,2,2,4,2,1,1,1,1,2,2
	; position 10 - pattern 5
	db	2,4,2,2,2,2,2,2,4,2,4,2,2,2,1,1,1,1,2,4,2,2,2,4,2,1,1,1,1,2,2
	; position 11 - pattern 6
	db	2,4,2,2,2,2,2,2,4,2,4,2,2,2,1,1,1,1,2,4,2,2,2,4,2,1,1,1,1,2,2

	; 01:  Lead / 00|Clinkster (Basic)
	; position 1 - pattern 1
	db	66,6,6,6,6,6,6,6,6,6,6
	; position 2 - pattern 2
	db	4,6,6,6,6,6,6,6,6,6,6
	; position 3 - pattern 3
	db	4,6,6,6,6,6,6,6
	; position 4 - pattern 4
	db	22,6,6,6,6,6,6,6,6,6,6
	; position 5 - pattern 4
	db	4,6,6,6,6,6,6,6,6,6,6
	; position 6 - pattern 5
	db	2,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2
	; position 7 - pattern 6
	db	2,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2
	; position 8 - pattern 7
	db	2,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2
	; position 9 - pattern 7
	db	2,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2
	; position 10 - pattern 5
	db	2,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2
	; position 11 - pattern 6
	db	2,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2

	; 02:  Lead / 00|Clinkster (Basic)
	; position 3 - pattern 3
	db	-1,192,6,4,6,6,6,6,6,6
	; position 4 - pattern 4
	db	18,6,4,6,6,6,6,6,6,4,6
	; position 5 - pattern 4
	db	8,6,4,6,6,6,6,6,6,4,6
	; position 6 - pattern 5
	db	8,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2
	; position 7 - pattern 6
	db	2,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2
	; position 8 - pattern 7
	db	2,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2
	; position 9 - pattern 7
	db	2,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2
	; position 10 - pattern 5
	db	2,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2
	; position 11 - pattern 6
	db	2,4,2,2,4,2,2,4,2,4,2,2,2,4,2,4,2,2,2,4,2,4,2,2

	; 03:  Snare Echo / 04|snare1
	; position 3 - pattern 3
	db	-1,240
	; position 4 - pattern 4
	db	18,6,10,10,6,12,4,10
	; position 5 - pattern 4
	db	6,6,10,10,6,12,4,10
	; position 6 - pattern 5
	db	6,6,10,10,6,12,4,10
	; position 7 - pattern 6
	db	6,6,10,10,6,12,2
	; position 10 - pattern 5
	db	-1,146,6,10,10,6,12,4,10
	; position 11 - pattern 6
	db	6,6,10,10,6,12,2

	; 04:  Bassdrum Echo / 03|bassdrum
	; position 3 - pattern 3
	db	-1,240
	; position 7 - pattern 6
	db	-2,0
	; position 11 - pattern 6
	db	-2,0

	; 05:  Bassdrum / 03|bassdrum
	; position 4 - pattern 4
	db	-2,0,6,2,6,2,6,10,6,8,2,6,6,2
	; position 5 - pattern 4
	db	2,6,2,6,2,6,10,6,8,2,6,6,2
	; position 6 - pattern 5
	db	2,6,2,6,2,6,10,6,8,2,6,6,2
	; position 7 - pattern 6
	db	2,6,2,6,2,6,10,6,8
	; position 10 - pattern 5
	db	-1,146,6,2,6,2,6,10,6,8,2,6,6,2
	; position 11 - pattern 6
	db	2,6,2,6,2,6,10,6,8

	; 06:  hihat / 02|hihat
	; position 4 - pattern 4
	db	-2,2,4,3,1,4,4,4,3,1,4,4,4,3,1,4,3,1,4,4,1,3
	; position 5 - pattern 4
	db	4,4,3,1,4,4,4,3,1,4,4,4,3,1,4,3,1,4,4,1,3
	; position 6 - pattern 5
	db	4,4,3,1,4,4,4,3,1,4,4,4,3,1,4,3,1,4,4,1,3
	; position 7 - pattern 6
	db	4,4,3,1,4,4,4,3,1,4,4,4,3,1,4
	; position 10 - pattern 5
	db	-1,148,4,3,1,4,4,4,3,1,4,4,4,3,1,4,3,1,4,4,1,3
	; position 11 - pattern 6
	db	4,4,3,1,4,4,4,3,1,4,4,4,3,1,4

	; 07:  Bass String / 01|Clinkster (Basic)
	; position 0 - pattern 0
	db	0,32,16,8
	; position 1 - pattern 1
	db	8,32,16,8
	; position 2 - pattern 2
	db	8,32,16,8
	; position 3 - pattern 3
	db	8,32,16
	; position 4 - pattern 4
	db	16,32,16,8
	; position 5 - pattern 4
	db	8,32,16,8
	; position 6 - pattern 5
	db	8,32,16,8
	; position 7 - pattern 6
	db	8,32,24
	; position 8 - pattern 7
	db	8,32,16,8
	; position 9 - pattern 7
	db	8,32,16,8
	; position 10 - pattern 5
	db	8,32,16,8
	; position 11 - pattern 6
	db	8,32,24

	; 08:  Strings / 01|Clinkster (Basic)
	; position 2 - pattern 2
	db	-1,128,32,16,8
	; position 3 - pattern 3
	db	8,32,16
	; position 4 - pattern 4
	db	16,32,16,8
	; position 5 - pattern 4
	db	8,32,16,8
	; position 6 - pattern 5
	db	8,32,16,8
	; position 7 - pattern 6
	db	8,32
	; position 8 - pattern 7
	db	32,32,16,8
	; position 9 - pattern 7
	db	8,32,16,8
	; position 10 - pattern 5
	db	8,32,16,8
	; position 11 - pattern 6
	db	8,32

	; 09:  Strings / 01|Clinkster (Basic)
	; position 2 - pattern 2
	db	-1,128,32,16,8
	; position 3 - pattern 3
	db	8,32,16
	; position 4 - pattern 4
	db	16,32,16,8
	; position 5 - pattern 4
	db	8,32,16,8
	; position 6 - pattern 5
	db	8,32,16,8
	; position 7 - pattern 6
	db	8,32
	; position 8 - pattern 7
	db	32,32,16,8
	; position 9 - pattern 7
	db	8,32,16,8
	; position 10 - pattern 5
	db	8,32,16,8
	; position 11 - pattern 6
	db	8,32

	; 10:  Strings / 01|Clinkster (Basic)
	; position 2 - pattern 2
	db	-1,128,16,16,16,8
	; position 3 - pattern 3
	db	8,16,16,16
	; position 4 - pattern 4
	db	16,16,16,16,8
	; position 5 - pattern 4
	db	8,16,16,16,8
	; position 6 - pattern 5
	db	8,16,16,16,8
	; position 7 - pattern 6
	db	8,16,16
	; position 8 - pattern 7
	db	32,16,16,16,8
	; position 9 - pattern 7
	db	8,16,16,16,8
	; position 10 - pattern 5
	db	8,16,16,16,8
	; position 11 - pattern 6
	db	8,16,16

	; 11:  Snare / 04|snare1
	; position 3 - pattern 3
	db	-1,248,4,1,1
	; position 4 - pattern 4
	db	6,8,8,4,2,2,8,4,4,8,4,2,2
	; position 5 - pattern 4
	db	8,8,8,4,2,2,8,4,4,8,4,2,2
	; position 6 - pattern 5
	db	8,8,8,4,2,2,8,4,4,8,4,2,2
	; position 7 - pattern 6
	db	8,8,8,4,2,2,8,4,4
	; position 10 - pattern 5
	db	-1,152,8,8,4,2,2,8,4,4,8,4,2,2
	; position 11 - pattern 6
	db	8,8,8,4,2,2,8,4,4


	section notesamp data align=1

_NoteSamples:
	; 00:  Lead / 00|Clinkster (Basic)
	; position 1 - pattern 1
	db	2,2,2,2,2,4,4,2,2,2
	; position 2 - pattern 2
	db	2,2,2,2,2,4,4,2,2,2
	; position 3 - pattern 3
	db	1,1,1,1,1,3,3,1
	; position 4 - pattern 4
	db	1,1,1,1,1,3,3,1,1,0
	; position 5 - pattern 4
	db	1,1,1,1,1,3,3,1,1,0
	; position 6 - pattern 5
	db	7,16,8,16,8,8,16,9,16,9,16,10,16,19,11,19,11,10,13,14,16,18,15,18,17,19,17,19,12,10,5
	; position 7 - pattern 6
	db	7,16,8,16,8,8,16,9,16,9,16,10,16,19,11,19,11,10,13,14,16,18,15,18,17,19,17,19,12,10,6
	; position 8 - pattern 7
	db	7,16,8,16,8,8,16,9,16,9,16,10,16,19,11,19,11,10,13,14,16,18,15,18,17,19,17,19,12,10,5
	; position 9 - pattern 7
	db	7,16,8,16,8,8,16,9,16,9,16,10,16,19,11,19,11,10,13,14,16,18,15,18,17,19,17,19,12,10,5
	; position 10 - pattern 5
	db	7,16,8,16,8,8,16,9,16,9,16,10,16,19,11,19,11,10,13,14,16,18,15,18,17,19,17,19,12,10,5
	; position 11 - pattern 6
	db	7,16,8,16,8,8,16,9,16,9,16,10,16,19,11,19,11,10,13,14,16,18,15,18,17,19,17,19,12,10,6
	db	-1

	; 01:  Lead / 00|Clinkster (Basic)
	; position 1 - pattern 1
	db	5,5,3,3,3,1,1,1,3,3,6
	; position 2 - pattern 2
	db	5,5,3,3,3,1,1,1,3,3,6
	; position 3 - pattern 3
	db	4,4,2,2,2,0,0,0
	; position 4 - pattern 4
	db	4,4,2,2,2,0,0,0,0,7,7
	; position 5 - pattern 4
	db	4,4,2,2,2,0,0,0,0,7,7
	; position 6 - pattern 5
	db	10,18,11,17,11,18,12,18,12,18,13,18,19,13,15,16,18,20,17,20,17,14,13,8
	; position 7 - pattern 6
	db	10,18,11,17,11,18,12,18,12,18,13,18,19,13,15,16,18,20,17,20,17,14,13,9
	; position 8 - pattern 7
	db	10,18,11,17,11,18,12,18,12,18,13,18,19,13,15,16,18,20,17,20,17,14,13,8
	; position 9 - pattern 7
	db	10,18,11,17,11,18,12,18,12,18,13,18,19,13,15,16,18,20,17,20,17,14,13,8
	; position 10 - pattern 5
	db	10,18,11,17,11,18,12,18,12,18,13,18,19,13,15,16,18,20,17,20,17,14,13,8
	; position 11 - pattern 6
	db	10,18,11,17,11,18,12,18,12,18,13,18,19,13,15,16,18,20,17,20,17,14,13,9
	db	-1

	; 02:  Lead / 00|Clinkster (Basic)
	; position 3 - pattern 3
	db	13,15,13,13,15,13,14,16,14
	; position 4 - pattern 4
	db	13,15,13,13,15,13,14,16,14,13,15
	; position 5 - pattern 4
	db	13,15,13,13,15,13,14,16,14,13,15
	; position 6 - pattern 5
	db	2,10,3,9,3,10,4,10,4,10,5,10,11,5,7,8,10,12,9,12,9,6,5,0
	; position 7 - pattern 6
	db	2,10,3,9,3,10,4,10,4,10,5,10,11,5,7,8,10,12,9,12,9,6,5,1
	; position 8 - pattern 7
	db	2,10,3,9,3,10,4,10,4,10,5,10,11,5,7,8,10,12,9,12,9,6,5,0
	; position 9 - pattern 7
	db	2,10,3,9,3,10,4,10,4,10,5,10,11,5,7,8,10,12,9,12,9,6,5,0
	; position 10 - pattern 5
	db	2,10,3,9,3,10,4,10,4,10,5,10,11,5,7,8,10,12,9,12,9,6,5,0
	; position 11 - pattern 6
	db	2,10,3,9,3,10,4,10,4,10,5,10,11,5,7,8,10,12,9,12,9,6,5,1
	db	-1

	; 03:  Snare Echo / 04|snare1
	; position 3 - pattern 3
	db	0
	; position 4 - pattern 4
	db	1,1,1,1,1,1,1,1
	; position 5 - pattern 4
	db	1,1,1,1,1,1,1,1
	; position 6 - pattern 5
	db	1,1,1,1,1,1,1,1
	; position 7 - pattern 6
	db	1,1,1,1,1,1,0
	; position 10 - pattern 5
	db	1,1,1,1,1,1,1,1
	; position 11 - pattern 6
	db	1,1,1,1,1,1,0
	db	-1

	; 04:  Bassdrum Echo / 03|bassdrum
	; position 3 - pattern 3
	db	0
	; position 7 - pattern 6
	db	0
	; position 11 - pattern 6
	db	0
	db	-1

	; 05:  Bassdrum / 03|bassdrum
	; position 4 - pattern 4
	db	0,0,0,0,0,0,0,0,0,0,0,0,0
	; position 5 - pattern 4
	db	0,0,0,0,0,0,0,0,0,0,0,0,0
	; position 6 - pattern 5
	db	0,0,0,0,0,0,0,0,0,0,0,0,0
	; position 7 - pattern 6
	db	0,0,0,0,0,0,0,0,0
	; position 10 - pattern 5
	db	0,0,0,0,0,0,0,0,0,0,0,0,0
	; position 11 - pattern 6
	db	0,0,0,0,0,0,0,0,0
	db	-1

	; 06:  hihat / 02|hihat
	; position 4 - pattern 4
	db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	; position 5 - pattern 4
	db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	; position 6 - pattern 5
	db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	; position 7 - pattern 6
	db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	; position 10 - pattern 5
	db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	; position 11 - pattern 6
	db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	db	-1

	; 07:  Bass String / 01|Clinkster (Basic)
	; position 0 - pattern 0
	db	3,5,4,1
	; position 1 - pattern 1
	db	3,5,4,1
	; position 2 - pattern 2
	db	3,5,4,1
	; position 3 - pattern 3
	db	3,5,0
	; position 4 - pattern 4
	db	3,5,4,1
	; position 5 - pattern 4
	db	3,5,4,1
	; position 6 - pattern 5
	db	3,5,4,1
	; position 7 - pattern 6
	db	3,5,2
	; position 8 - pattern 7
	db	3,5,4,1
	; position 9 - pattern 7
	db	3,5,4,1
	; position 10 - pattern 5
	db	3,5,4,1
	; position 11 - pattern 6
	db	3,5,2
	db	-1

	; 08:  Strings / 01|Clinkster (Basic)
	; position 2 - pattern 2
	db	1,3,2,0
	; position 3 - pattern 3
	db	1,3,2
	; position 4 - pattern 4
	db	1,3,2,0
	; position 5 - pattern 4
	db	1,3,2,0
	; position 6 - pattern 5
	db	1,3,2,0
	; position 7 - pattern 6
	db	1,3
	; position 8 - pattern 7
	db	1,3,2,0
	; position 9 - pattern 7
	db	1,3,2,0
	; position 10 - pattern 5
	db	1,3,2,0
	; position 11 - pattern 6
	db	1,3
	db	-1

	; 09:  Strings / 01|Clinkster (Basic)
	; position 2 - pattern 2
	db	0,1,2,2
	; position 3 - pattern 3
	db	0,1,2
	; position 4 - pattern 4
	db	0,1,2,2
	; position 5 - pattern 4
	db	0,1,2,2
	; position 6 - pattern 5
	db	0,1,2,2
	; position 7 - pattern 6
	db	0,1
	; position 8 - pattern 7
	db	0,1,2,2
	; position 9 - pattern 7
	db	0,1,2,2
	; position 10 - pattern 5
	db	0,1,2,2
	; position 11 - pattern 6
	db	0,1
	db	-1

	; 10:  Strings / 01|Clinkster (Basic)
	; position 2 - pattern 2
	db	3,1,3,2,0
	; position 3 - pattern 3
	db	3,1,3,2
	; position 4 - pattern 4
	db	3,1,3,2,0
	; position 5 - pattern 4
	db	3,1,3,2,0
	; position 6 - pattern 5
	db	3,1,3,2,0
	; position 7 - pattern 6
	db	3,1,3
	; position 8 - pattern 7
	db	3,1,3,2,0
	; position 9 - pattern 7
	db	3,1,3,2,0
	; position 10 - pattern 5
	db	3,1,3,2,0
	; position 11 - pattern 6
	db	3,1,3
	db	-1

	; 11:  Snare / 04|snare1
	; position 3 - pattern 3
	db	1,1,1,1
	; position 4 - pattern 4
	db	2,1,2,0,3,1,2,1,1,2,0,3,1
	; position 5 - pattern 4
	db	2,1,2,0,3,1,2,1,1,2,0,3,1
	; position 6 - pattern 5
	db	2,1,2,0,3,1,2,1,1,2,0,3,1
	; position 7 - pattern 6
	db	2,1,2,0,3,1,2,1,1
	; position 10 - pattern 5
	db	2,1,2,0,3,1,2,1,1,2,0,3,1
	; position 11 - pattern 6
	db	2,1,2,0,3,1,2,1,1
	db	-1

