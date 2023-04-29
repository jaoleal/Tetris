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
	mainBoard.DrawBody();
}
void Game::lgc(){
}
Board::Board(int x,int y)
:
posx(x),
posy(y)
{
setpos(x,y);

buildBody(posx + 2,posy + 2,ccountw,ccounth, 25, 25, GREEN);
setOutline((float)posx+90,(float)posy+90,(float)ccountw,(float)ccounth);
DrawRectangleLinesEx(Board::outline, 5, WHITE);
//DrawOutline(outline, 25, GREEN);
}

void Board::setOutline(float posx,float posy,float ccountw,float ccounth){
	outline = {2,2,2,2};
}

void Board::setpos(int x, int y){
	Board::posx = x;
	Board::posy = y;
}


void Board::buildBody(
			int posx, 
			int posy, 
			int ccountw,
			int ccounth,
			int cw,
			int ch, 
			Color c)
{
	int counter = 0;
	for(int i = 0; i< ccountw; i++){
		for(int j=0; j < ccounth; j++){
			mainBoard.cells[counter].setbody((float)posx+2+i*cw,(float)posy+2+j*ch,(float)cw-2,(float)ch-2);
			mainBoard.cells[counter].setcolor(c);
			counter++;
		}
	}
}

void Board::DrawBody(){
	int counter = 0;
	for(int i = 0; i<= mainBoard.ccountw; i++){
		for(int j=0; j <= mainBoard.ccounth; j++){
			DrawRectangleRec(mainBoard.cells[counter].getbody(),mainBoard.cells[counter].getcolor());
			counter++;
		}
	}
}
void Board::DrawOutline(Rectangle body, float linesize, Color c)
{
	DrawRectangleLinesEx(body, 5, GREEN);

}

Board::Cell::Cell(){
	body = {10,10,10,10};
	color = RED;
}

void Board::Cell::setbody(float x, float y, float width, float height){
	body = {x,y, width, height};
}
void Board::Cell::setcolor(Color c){
	color = c;
}
Rectangle Board::Cell::getbody(){
	return body;
}
Color Board::Cell::getcolor(){
	return color;
}
/**void Board::Cell:drawT(int x, int y )
:
cellposx(x),
cellposy(y)
{

}**/