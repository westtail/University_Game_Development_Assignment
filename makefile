main: main.c window.c A.c co.c
	gcc -o game main.c window.c A.c co.c  -lSDL -lSDL_image -lSDL_gfx -lSDL_ttf