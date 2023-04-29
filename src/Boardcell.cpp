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
	body = {10,10,10,10};
	color = RED;
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

/*
*getters function that returns body and color
*/

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