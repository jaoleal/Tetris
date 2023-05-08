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

	for(int ny = 0; ny < ccounty; ny++){
		for(int nx = 0; nx <ccountx; nx++){
			mainBoard.stacked[nx][ny] = 0;
		}
	}

	setpos(x,y);
	buildBody(posx,posy,ccountx,ccounty, 25, 25, WHITE);
	outline.setOutline(WHITE, ((ccountx+1)*25),((ccounty+1)*25));
	background.setBackground(outline.getbody());
	background.setColor(BLACK);
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
				mainBoard.cells[x][y].setcolor(WHITE);
			}
			DrawRectangleRec(mainBoard.cells[x][y].getbody(),mainBoard.cells[x][y].getcolor());
			DrawRectangleLinesEx(mainBoard.cells[x][y].getbody(),1,mainBoard.cells[x][y].getoutcolor());
		}
	}
}
//function that create a new tetromino
bool Board::NewTetrominoe(int id, int px, int py, bool godown){
	int counter = 0;
	bool stoped = false;
	int boost = 0;
	//calculate the shortest distance until the end of the board or until the next real cell
	if(godown){
		for(int y = 0; y<4; y++){
			for(int x = 0; x<4; x++){
				if(mainBoard.Tetrominoe.getid(id, counter) == 1){
					for(int sdc = y + py; sdc < 20; sdc++){
						if(mainBoard.cells[px+x][sdc+1].isreal() == 1 || sdc+1 >= 20 ){
							if(boost > sdc-y-py|| boost == 0){
								boost = sdc-y-py;
							}
						}
					}
				}
				counter++;
			}
		}
		counter = 0;
	}
	for(int y = 0; y<4; y++){
		for(int x = 0; x<4; x++){
			if (mainBoard.Tetrominoe.getid(id,counter) == 1){
				mainBoard.cells[px+x][py+y+boost].setreal(1);
				if(mainBoard.cells[px+x][py+y+boost+1].isreal() == 1 || py+y+boost+1 >= 20){
					stoped = true;
				}
			}
			counter++;
		}
	}
	if(stoped){
		StackBoard();
		return false;
	}
	
	return true;
}

//clear the board, set all cells to blank and the delete the false cells
void Board::ClearBoard(){
	for(int y = 0; y < ccounty;y++){
		for(int x = 0; x < ccountx; x++){
			if(mainBoard.stacked[x][y] == 0){
				mainBoard.cells[x][y].setcolor(BLANK);
				mainBoard.cells[x][y].setreal(0);
			}
		}
	}
}

//add the actual board state to a protected list against ClearBoard()
void Board::StackBoard(){
	for(int ny = 0; ny < ccounty; ny++){
		for(int nx = 0; nx <ccountx; nx++){
			if(mainBoard.cells[nx][ny].isreal() == 1){
				mainBoard.stacked[nx][ny] = 1 ;
			}else{
				mainBoard.stacked[nx][ny] = 0 ;
			}
		}
	}

}