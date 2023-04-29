/*
* @file main.cpp
*
* @brief main function of the game
*
*@author João Leal
*Contact: devjoaoleal1006@gmail.com
*
*/

#include <iostream>
#include "raylib.h"
#include "classes.h"
#include "game.cpp"
#include "Boardcell.cpp"
#include "Board.cpp"


int main()
{
	//window initializer definition and class game definition
	Game mainGame{600,600,60,"Tetris",DARKGRAY};
	//Main game loop
	while(!WindowShouldClose()){
		mainGame.Step();
	}
	return 0;
}