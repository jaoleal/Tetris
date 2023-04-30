/*
* @file Board.cpp
*
* @brief holds Board class and functions
*
*@author João Leal
*Contact: devjoaoleal1006@gmail.com
*
*/

#include "classes.h"
/*
*Board constructor that build itself
*/
Board::Board(int x,int y)
:
posx(x),
posy(y)
{
setpos(x,y);
buildBody(posx + 2,posy + 2,ccountw,ccounth, 25, 25, GREEN);
//outline.setOutline(WHITE, 250,500);
}



//setter to position of the board
void Board::setpos(int x, int y){
	Board::posx = x;
	Board::posy = y; 
}

/*
*Function that defines all the cells
*/

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
//Function that draws the body 
void Board::DrawBody(){
	int counter = 0;
	for(int i = 0; i<= mainBoard.ccountw; i++){
		for(int j=0; j <= mainBoard.ccounth; j++){
			DrawRectangleRec(mainBoard.cells[counter].getbody(),mainBoard.cells[counter].getcolor());
			counter++;
		}
	}
}