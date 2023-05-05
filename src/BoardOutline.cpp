#include "classes.h"

Board::Outline::Outline(float x, float y){
	posx = x;
	posy = y;
	body = {10,10,10,10};
	c = GREEN;
}
//setter to the outline
void Board::Outline::setOutline(Color color,float ccountw,float ccounth){
	body = {posx,posy,ccountw,ccounth};
	c = color;
}
//Draw function to outline
void Board::Outline::DrawOutline(float linesize){
	DrawRectangleLinesEx(body, linesize,c);
}