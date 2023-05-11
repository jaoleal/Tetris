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
#include <random>
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

//function that controls the tetromino until it stops
//all the controls are received via true or false
//except y position of the tetrominoe, that is controlled
//by the lgc function.
int px = 4, py = 0;
int rotationid = 0;
float downtick = 0;
bool cangoleft =  true, cangoright = true, cangodown = true, canrotate = true;

bool Board::ActualTetrominoe(int id,bool torotate, bool movexminus, bool movexplus, bool godown){
	int counter = 0;
	bool stoped = false;
	int boost = 0;

	//movimentation limiter for every second
	downtick += GetFrameTime();
	if (downtick > 1){
		py++;
	}
	//x movimentation code check
	if(movexminus && cangoleft){px--;}
	if(movexplus && cangoright){px++;}

	//check if the x laterals is the wall.
	//checker right
	if(px+(Tetrominoe.getidlenght(id+rotationid))>=10){cangoright = false;}else{cangoright = true;}
	//check if the x laterals is the wall.
	//checker left
	if(px-1 < 0){cangoleft = false;}else{cangoleft =  true;}
	//rotation checker
	if(!CheckRotation(px, py,id, rotationid, canrotate)){
		canrotate = false; 
	}else{canrotate = true;}
	//rotation control code check
	if(torotate&&canrotate){
		rotationid++;
		if(rotationid >= 4){
			rotationid = 0;
		}
	}

	//calculate the shortest distance until the end of the board or until the next real cell
	if(godown){
		for(int y = 0; y<4; y++){
			for(int x = 0; x<4; x++){
				if(mainBoard.Tetrominoe.getid(id + rotationid, counter) == 1){
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
			if (mainBoard.Tetrominoe.getid(id + rotationid,counter) == 1){
				CheckCSides(px+x,py+y, cangoright, cangoleft, cangodown);
				mainBoard.cells[px+x][py+y+boost].setreal(1);
				if((!cangodown|| py+y+boost+1 >= 20)&& downtick >= 1)
				{stoped = true;}else{stoped = false;}
			}
			counter++;
		}

	}
	//downtick resets
	if(downtick >= 1){
		downtick = 0;
	}

	if(stoped||godown){
		//if stoped or godown, reset values and stack the board
		StackBoard();
		px = 4;
		py = 0; 
		rotationid = 0;
		cangodown = true; 
		return false;
	}
	
	return true;
}

//clear the board, set all cells to blank and delete the false cells
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

//resets StackBoard
void Board::ResetStackBoard(){
	for(int ny = 0; ny < ccounty; ny++){
		for(int nx = 0; nx <ccountx; nx++){
			mainBoard.stacked[nx][ny] = 0; 
		}
	}
}

//simple function that returns the certain tetrominoe`s id 
int Board::GenNewTetrominoe(){
	std::random_device random;
	std::mt19937 mt(random());
	int rn = 0;
	int tc = 7;
	std::uniform_real_distribution<float> dist(0, tc);
	//tc is "tetrominoes counter"
	rn = (int)dist(mt) * 4;
	//multiplied by four to only receives multiples of four

	return rn;
}

//Function that receives a cell position and check his sides, returning 
//true if it has, false if it doesn`t, on respective checkers

void Board::CheckCSides(const int x,const int y, bool& cangoright,bool& cangoleft,bool& cangodown){
	//right checker
	if(stacked[x+1][y] == 1){cangoright = false;}

	//leftchecker
	if(stacked[x-1][y] == 1){cangoleft = false;}

	//downchecker
	if(stacked[x][y+1] == 1){cangodown = false;}
}

//Function that check, in the actual position, if the next rotation can be done

bool Board::CheckRotation(const int x, const int y, const int id,int rotationid,const bool canrotate){
	int counter = 0;
	//rotation control code check
	
	rotationid++;
	if(rotationid >= 4){
		rotationid = 0;
	}

	for(int i=y; i <y+4; i++){
		for(int j=x; j<x+4;j++){
			if(Tetrominoe.getid(id+rotationid, counter) == 1 && stacked[j][i] == 1){
				return false;
			}
			counter ++;
		}
	}
	return true;
}