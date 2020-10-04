program: matrisgen.c
	gcc -o matrisgen matrisgen.c
	@echo "\n\"./matrisgen mxn a-b (i/f/d) [-t]\"\n\nm: row\nn: column\na: limit\nb: limit\n(i/f/d)(i:integer / f: float / d: double)\n[-t]: transpoze\n"