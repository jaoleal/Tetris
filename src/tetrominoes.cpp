#include "classes.h"

Board::Tetrominoes::Tetrominoes(){

	/*

	tetrominoe: ***
				 * 

	*		 1,1,1,0
			 0,1,0,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[0][0] = 1;
	id[0][1] = 1;
	id[0][2] = 1;
	id[0][3] = 0;
	id[0][4] = 0;
	id[0][5] = 1;
	id[0][6] = 0;
	id[0][7] = 0;
	id[0][8] = 0;
	id[0][9] = 0;
	id[0][10] = 0;
	id[0][11] = 0;
	id[0][12] = 0;
	id[0][13] = 0;
	id[0][14] = 0;
	id[0][15] = 0;
}
int Board::Tetrominoes::getid(int T, int n){
	return id[T][n];
}