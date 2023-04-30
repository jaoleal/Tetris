#include "classes.h"

Board::Outline::Outline(int x, int y){
	posx = x;
	posy = y;
	body = {10,10,10,10};
	c = GREEN;
}
//setter to the outline
void Board::Outline::setOutline(Color color,float ccountw,float ccounth){
	body = {(float)posx,(float)posy,ccountw,ccounth};
	c = color;
}
void Board::Outline::DrawOutline(float linesize){
	DrawRectangleLinesEx(body, linesize,c);
}