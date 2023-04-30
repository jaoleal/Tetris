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
buildBody(posx,posy,ccountw,ccounth, 25, 25, WHITE);
outline.setOutline(WHITE, ((ccountw+1)*25),((ccounth+1)*25));
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
			mainBoard.cells[counter].setbody((float)posx+i*cw,(float)posy+j*ch,(float)cw-2,(float)ch-2);
			if(mainBoard.cells[counter].isreal() == false){
				mainBoard.cells[counter].setcolor(BLANK);
			}else{mainBoard.cells[counter].setcolor(c);}
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