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
	buildBody(posx,posy,ccountx,ccounty, 25, 25, WHITE);
	outline.setOutline(WHITE, ((ccountx+1)*25),((ccounty+1)*25));
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
			int ccountx,
			int ccounty,
			int cw,
			int ch, 
			Color c)
{
	for(int y = 0; y< ccounty; y++){
		for(int x = 0; x < ccountx; x++){
			mainBoard.cells[x][y].setbody((float)posx+(x*cw),(float)posy+(y*ch),(float)cw-2,(float)ch-2);		
			mainBoard.cells[x][y].setcolor(c);
		}
	}
}
//Function that draws the body 
void Board::DrawBody(){
	for(int y = 0; y< ccounty; y++){
		for(int x = 0; x < ccountx; x++){
			if(mainBoard.cells[x][y].isreal() == 1){
				DrawRectangleRec(mainBoard.cells[x][y].getbody(),mainBoard.cells[x][y].getcolor());
			}
			DrawRectangleLinesEx(mainBoard.cells[x][y].getbody(),1,mainBoard.cells[x][y].getcolor());
		}
	}
}
//function that create a new tetromino
void Board::NewTetrominoe(int id, int px){
	int counter = 0;
	for(int y = 0; y<4; y++){
		for(int x = 0; x<4; x++){
			if (mainBoard.Tetrominoe.getid(id,counter) == 1){
				mainBoard.cells[px+x][y].setcolor(WHITE);
				mainBoard.cells[px+x][y].setreal(1);

			}
			counter++;
		}
	}
}

//clear the board, set all cells to blank and the delete the false cells
void Board::ClearBoard(){
	for(int y = 0; y < ccounty;y++){
		for(int x = 0; x < ccountx; x++){
			mainBoard.cells[x][y].setcolor(BLANK);
			mainBoard.cells[x][y].setreal(1);
		}
	}
}