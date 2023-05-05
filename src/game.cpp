/*
* @file game.cpp
*
* @brief holds game class and functions
*
*@author João Leal
*Contact: devjoaoleal1006@gmail.com
*
*/
#pragma once
#include "raylib.h"
#include "classes.h"


/*
*Main class Game, a class made for organization of 
*the functions, that means, separate functions for 
*init of the main window, logic and graphics
*/


/*
*Constructor of Game, holds screen size, fps, background color 
*and the tittle of the window
*/ 
Game::Game(
			int scrwdt,
			int scrhgt,
			int fps, 
			const char* tittle,
			Color color)
{
	InitWindow(scrwdt, scrhgt, tittle);
	SetTargetFPS(fps);
	ClearBackground(color);
}
/*
*Destructor that only holds close window raylib function
*/

Game::~Game(){
	CloseWindow();
}
/*
*Step function that gets all together to run everyframe
*/
void Game::Step(){
		
		BeginDrawing();
		lgc();
		gfx();
		EndDrawing();
}
/*
*gfx function to all the draw only funtions
*/
void Game::gfx(){
	mainBoard.outline.DrawOutline(10); 
	mainBoard.DrawBody();
}
/*
*lgc function to all the logic funtions, not-graphical functions 
*/
int tposx = 4;
void Game::lgc(){
	if(IsKeyPressed(KEY_RIGHT)){tposx =tposx+1;};
	if(IsKeyPressed(KEY_LEFT)){tposx =tposx-1;};
	mainBoard.ClearBoard();
	mainBoard.NewTetrominoe(0,tposx);
}