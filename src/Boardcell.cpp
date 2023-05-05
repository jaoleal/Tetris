/*
* @file Boardcell.cpp
*
* @brief hold cell class, inside board class, definitions
*
*@author João Leal
*Contact: devjoaoleal1006@gmail.com
*
*/

#include "classes.h"


/*
*Constructor that holds the pattern of a undefined cell
*/
Board::Cell::Cell(){
	body = {25,25,10,10};
	color = GREEN;
	cexists = 0;
}

/*
*setbody function that define body values
*/

void Board::Cell::setbody(float x, float y, float width, float height){
	body = {x,y, width, height};
}

/*
*setcolor function that define color values
*/

void Board::Cell::setcolor(Color c){
	color = c;
}

void Board::Cell::setreal(int newexistence){
	cexists = newexistence;
}

/*
*getters function that returns body, color and if the cell exists
*/

Rectangle Board::Cell::getbody(){
	return body;
}
Color Board::Cell::getcolor(){
	return color;
}
int Board::Cell::isreal(){
	return Cell::cexists;
}