#include "classes.h"


Board::Background::Background(){
	body = {10,10,10,10};
	color = GREEN;
}

void Board::Background::setBackground(Rectangle newbody){
	body = newbody;
}
void Board::Background::DrawBackground(){
	DrawRectangleRec(body, color);
}
void Board::Background::setColor(Color c){
	color = c;
}