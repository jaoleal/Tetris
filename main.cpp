#include <iostream>
#include "src/raylib.h"
#include "src/classes.h"
#include "src/classes.cpp"

int main()
{
	Game mainGame{600,600,60,"Tetris",DARKGRAY};
	while(!WindowShouldClose()){
		mainGame.Step();
	}
	return 0;
}