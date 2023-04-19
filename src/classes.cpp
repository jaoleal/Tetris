#pragma once
#include "raylib.h"
#include "classes.h"

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
Game::~Game(){
	CloseWindow();
}
void Game::Step(){
		BeginDrawing();
		lgc();
		gfx();
		EndDrawing();
}
void Game::gfx(){
}
void Game::lgc(){

}