/*
* @file tetrominoes.cpp
*
* @brief holds game class and functions
*
*@author João Leal
*Contact: devjoaoleal1006@gmail.com
*
*/

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
		/*

	tetrominoe:  *
				**
				 * 

	*		 0,1,0,0
			 1,1,0,0
			 0,1,0,0
			 0,0,0,0
	*/
	id[1][0] = 0;
	id[1][1] = 1;
	id[1][2] = 0;
	id[1][3] = 0;
	id[1][4] = 1;
	id[1][5] = 1;
	id[1][6] = 0;
	id[1][7] = 0;
	id[1][8] = 0;
	id[1][9] = 1;
	id[1][10] = 0;
	id[1][11] = 0;
	id[1][12] = 0;
	id[1][13] = 0;
	id[1][14] = 0;
	id[1][15] = 0;
	/*

	tetrominoe:  *
				*** 

	*		 0,1,0,0
			 1,1,1,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[2][0] = 0;
	id[2][1] = 1;
	id[2][2] = 0;
	id[2][3] = 0;
	id[2][4] = 1;
	id[2][5] = 1;
	id[2][6] = 1;
	id[2][7] = 0;
	id[2][8] = 0;
	id[2][9] = 0;
	id[2][10] = 0;
	id[2][11] = 0;
	id[2][12] = 0;
	id[2][13] = 0;
	id[2][14] = 0;
	id[2][15] = 0;
		/*

	tetrominoe:  *
				*** 

	*		 1,0,0,0
			 1,1,0,0
			 1,0,0,0
			 0,0,0,0
	*/
	id[3][0] = 1;
	id[3][1] = 0;
	id[3][2] = 0;
	id[3][3] = 0;
	id[3][4] = 1;
	id[3][5] = 1;
	id[3][6] = 0;
	id[3][7] = 0;
	id[3][8] = 1;
	id[3][9] = 0;
	id[3][10] = 0;
	id[3][11] = 0;
	id[3][12] = 0;
	id[3][13] = 0;
	id[3][14] = 0;
	id[3][15] = 0;
	/*

	tetrominoe: *
				***

	*		 1,0,0,0
			 1,1,1,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[4][0] = 1;
	id[4][1] = 0;
	id[4][2] = 0;
	id[4][3] = 0;
	id[4][4] = 1;
	id[4][5] = 1;
	id[4][6] = 1;
	id[4][7] = 0;
	id[4][8] = 0;
	id[4][9] = 0;
	id[4][10] = 0;
	id[4][11] = 0;
	id[4][12] = 0;
	id[4][13] = 0;
	id[4][14] = 0;
	id[4][15] = 0;

	/*

	tetrominoe:  *
				*** 

	*		 1,1,0,0
			 1,0,0,0
			 1,0,0,0
			 0,0,0,0
	*/
	id[5][0] = 1;
	id[5][1] = 1;
	id[5][2] = 0;
	id[5][3] = 0;
	id[5][4] = 1;
	id[5][5] = 0;
	id[5][6] = 0;
	id[5][7] = 0;
	id[5][8] = 1;
	id[5][9] = 0;
	id[5][10] = 0;
	id[5][11] = 0;
	id[5][12] = 0;
	id[5][13] = 0;
	id[5][14] = 0;
	id[5][15] = 0;
	/*

	tetrominoe:  *
				*** 

	*		 1,1,1,0
			 0,0,1,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[6][0] = 1;
	id[6][1] = 1;
	id[6][2] = 1;
	id[6][3] = 0;
	id[6][4] = 0;
	id[6][5] = 0;
	id[6][6] = 1;
	id[6][7] = 0;
	id[6][8] = 0;
	id[6][9] = 0;
	id[6][10] = 0;
	id[6][11] = 0;
	id[6][12] = 0;
	id[6][13] = 0;
	id[6][14] = 0;
	id[6][15] = 0;
	/*

	tetrominoe:  *
				*** 

	*		 0,1,0,0
			 0,1,0,0
			 1,1,0,0
			 0,0,0,0
	*/
	id[7][0] = 0;
	id[7][1] = 1;
	id[7][2] = 0;
	id[7][3] = 0;
	id[7][4] = 0;
	id[7][5] = 1;
	id[7][6] = 0;
	id[7][7] = 0;
	id[7][8] = 1;
	id[7][9] = 1;
	id[7][10] = 0;
	id[7][11] = 0;
	id[7][12] = 0;
	id[7][13] = 0;
	id[7][14] = 0;
	id[7][15] = 0;

	/*

	tetrominoe:  *
				*** 

	*		 1,0,0,0
			 1,0,0,0
			 1,0,0,0
			 1,0,0,0
	*/
	id[8][0] = 1;
	id[8][1] = 0;
	id[8][2] = 0;
	id[8][3] = 0;
	id[8][4] = 1;
	id[8][5] = 0;
	id[8][6] = 0;
	id[8][7] = 0;
	id[8][8] = 1;
	id[8][9] = 0;
	id[8][10] = 0;
	id[8][11] = 0;
	id[8][12] = 1;
	id[8][13] = 0;
	id[8][14] = 0;
	id[8][15] = 0;
	/*

	tetrominoe:  *
				*** 

	*		 1,1,1,1
			 0,0,0,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[9][0] = 1;
	id[9][1] = 1;
	id[9][2] = 1;
	id[9][3] = 1;
	id[9][4] = 0;
	id[9][5] = 0;
	id[9][6] = 0;
	id[9][7] = 0;
	id[9][8] = 1;
	id[9][9] = 0;
	id[9][10] = 0;
	id[9][11] = 0;
	id[9][12] = 0;
	id[9][13] = 0;
	id[9][14] = 0;
	id[9][15] = 0;
/*
	tetrominoe:  *
				*** 

	*		 1,0,0,0
			 1,0,0,0
			 1,0,0,0
			 1,0,0,0
	*/
	id[10][0] = 1;
	id[10][1] = 0;
	id[10][2] = 0;
	id[10][3] = 0;
	id[10][4] = 1;
	id[10][5] = 0;
	id[10][6] = 0;
	id[10][7] = 0;
	id[10][8] = 1;
	id[10][9] = 0;
	id[10][10] = 0;
	id[10][11] = 0;
	id[10][12] = 1;
	id[10][13] = 0;
	id[10][14] = 0;
	id[10][15] = 0;
/*

	tetrominoe:  *
				*** 

	*		 1,1,1,1
			 0,0,0,0
			 0,0,0,0
			 0,0,0,0
*/
	id[11][0] = 1;
	id[11][1] = 1;
	id[11][2] = 1;
	id[11][3] = 1;
	id[11][4] = 0;
	id[11][5] = 0;
	id[11][6] = 0;
	id[11][7] = 0;
	id[11][8] = 1;
	id[11][9] = 0;
	id[11][10] = 0;
	id[11][11] = 0;
	id[11][12] = 0;
	id[11][13] = 0;
	id[11][14] = 0;
	id[11][15] = 0;

	/*

	tetrominoe:  *
				*** 

	*		 1,1,0,0
			 1,1,0,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[12][0] = 1;
	id[12][1] = 1;
	id[12][2] = 0;
	id[12][3] = 0;
	id[12][4] = 1;
	id[12][5] = 1;
	id[12][6] = 0;
	id[12][7] = 0;
	id[12][8] = 0;
	id[12][9] = 0;
	id[12][10] = 0;
	id[12][11] = 0;
	id[12][12] = 0;
	id[12][13] = 0;
	id[12][14] = 0;
	id[12][15] = 0;
	/*

	tetrominoe:  *
				*** 

			 1,1,0,0
			 1,1,0,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[13][0] = 1;
	id[13][1] = 1;
	id[13][2] = 0;
	id[13][3] = 0;
	id[13][4] = 1;
	id[13][5] = 1;
	id[13][6] = 0;
	id[13][7] = 0;
	id[13][8] = 0;
	id[13][9] = 0;
	id[13][10] = 0;
	id[13][11] = 0;
	id[13][12] = 0;
	id[13][13] = 0;
	id[13][14] = 0;
	id[13][15] = 0;

	/*

	tetrominoe:  *
				*** 

	*		 1,1,0,0
			 1,1,0,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[14][0] = 1;
	id[14][1] = 1;
	id[14][2] = 0;
	id[14][3] = 0;
	id[14][4] = 1;
	id[14][5] = 1;
	id[14][6] = 0;
	id[14][7] = 0;
	id[14][8] = 0;
	id[14][9] = 0;
	id[14][10] = 0;
	id[14][11] = 0;
	id[14][12] = 0;
	id[14][13] = 0;
	id[14][14] = 0;
	id[14][15] = 0;
	/*

	tetrominoe:  *
				*** 

	*		 1,1,0,0
			 1,1,0,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[15][0] = 1;
	id[15][1] = 1;
	id[15][2] = 0;
	id[15][3] = 0;
	id[15][4] = 1;
	id[15][5] = 1;
	id[15][6] = 0;
	id[15][7] = 0;
	id[15][8] = 0;
	id[15][9] = 0;
	id[15][10] = 0;
	id[15][11] = 0;
	id[15][12] = 0;
	id[15][13] = 0;
	id[15][14] = 0;
	id[15][15] = 0;

	/*

	tetrominoe:  *
				*** 

	*		 1,1,0,0
			 0,1,1,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[16][0] = 1;
	id[16][1] = 1;
	id[16][2] = 0;
	id[16][3] = 0;
	id[16][4] = 0;
	id[16][5] = 1;
	id[16][6] = 1;
	id[16][7] = 0;
	id[16][8] = 0;
	id[16][9] = 0;
	id[16][10] = 0;
	id[16][11] = 0;
	id[16][12] = 0;
	id[16][13] = 0;
	id[16][14] = 0;
	id[16][15] = 0;

	/*

	tetrominoe:  *
				*** 

	*		 0,1,0,0
			 1,1,0,0
			 1,0,0,0
			 0,0,0,0
	*/
	id[17][0] = 0;
	id[17][1] = 1;
	id[17][2] = 0;
	id[17][3] = 0;
	id[17][4] = 1;
	id[17][5] = 1;
	id[17][6] = 0;
	id[17][7] = 0;
	id[17][8] = 1;
	id[17][9] = 0;
	id[17][10] = 0;
	id[17][11] = 0;
	id[17][12] = 0;
	id[17][13] = 0;
	id[17][14] = 0;
	id[17][15] = 0;
	/*

	tetrominoe:  *
				*** 

	*		 1,1,0,0
			 0,1,1,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[18][0] = 1;
	id[18][1] = 1;
	id[18][2] = 0;
	id[18][3] = 0;
	id[18][4] = 0;
	id[18][5] = 1;
	id[18][6] = 1;
	id[18][7] = 0;
	id[18][8] = 0;
	id[18][9] = 0;
	id[18][10] = 0;
	id[18][11] = 0;
	id[18][12] = 0;
	id[18][13] = 0;
	id[18][14] = 0;
	id[18][15] = 0;
	/*

	tetrominoe:  *
				*** 

	*		 0,1,0,0
			 1,1,0,0
			 1,0,0,0
			 0,0,0,0
	*/
	id[19][0] = 0;
	id[19][1] = 1;
	id[19][2] = 0;
	id[19][3] = 0;
	id[19][4] = 1;
	id[19][5] = 1;
	id[19][6] = 0;
	id[19][7] = 0;
	id[19][8] = 1;
	id[19][9] = 0;
	id[19][10] = 0;
	id[19][11] = 0;
	id[19][12] = 0;
	id[19][13] = 0;
	id[19][14] = 0;
	id[19][15] = 0;
		/*

	tetrominoe:  *
				*** 

	*		 0,1,1,0
			 1,1,0,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[20][0] = 0;
	id[20][1] = 1;
	id[20][2] = 1;
	id[20][3] = 0;
	id[20][4] = 1;
	id[20][5] = 1;
	id[20][6] = 0;
	id[20][7] = 0;
	id[20][8] = 0;
	id[20][9] = 0;
	id[20][10] = 0;
	id[20][11] = 0;
	id[20][12] = 0;
	id[20][13] = 0;
	id[20][14] = 0;
	id[20][15] = 0;
	/*

	tetrominoe:  *
				*** 

	*		 1,0,0,0
			 1,1,0,0
			 0,1,0,0
			 0,0,0,0
	*/
	id[21][0] = 1;
	id[21][1] = 0;
	id[21][2] = 0;
	id[21][3] = 0;
	id[21][4] = 1;
	id[21][5] = 1;
	id[21][6] = 0;
	id[21][7] = 0;
	id[21][8] = 0;
	id[21][9] = 1;
	id[21][10] = 0;
	id[21][11] = 0;
	id[21][12] = 0;
	id[21][13] = 0;
	id[21][14] = 0;
	id[21][15] = 0;
	/*

	tetrominoe:  *
				*** 

	*		 0,1,1,0
			 1,1,0,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[22][0] = 0;
	id[22][1] = 1;
	id[22][2] = 1;
	id[22][3] = 0;
	id[22][4] = 1;
	id[22][5] = 1;
	id[22][6] = 0;
	id[22][7] = 0;
	id[22][8] = 0;
	id[22][9] = 0;
	id[22][10] = 0;
	id[22][11] = 0;
	id[22][12] = 0;
	id[22][13] = 0;
	id[22][14] = 0;
	id[22][15] = 0;

	/*

	tetrominoe:  *
				*** 

	*		 1,0,0,0
			 1,1,0,0
			 0,1,0,0
			 0,0,0,0
	*/
	id[23][0] = 1;
	id[23][1] = 0;
	id[23][2] = 0;
	id[23][3] = 0;
	id[23][4] = 1;
	id[23][5] = 1;
	id[23][6] = 0;
	id[23][7] = 0;
	id[23][8] = 0;
	id[23][9] = 1;
	id[23][10] = 0;
	id[23][11] = 0;
	id[23][12] = 0;
	id[23][13] = 0;
	id[23][14] = 0;
	id[23][15] = 0;


	/*

	tetrominoe:  *
				*** 

	*		 1,0,0,0
			 1,0,0,0
			 1,1,0,0
			 0,0,0,0
	*/
	id[24][0] = 1;
	id[24][1] = 0;
	id[24][2] = 0;
	id[24][3] = 0;
	id[24][4] = 1;
	id[24][5] = 0;
	id[24][6] = 0;
	id[24][7] = 0;
	id[24][8] = 1;
	id[24][9] = 1;
	id[24][10] = 0;
	id[24][11] = 0;
	id[24][12] = 0;
	id[24][13] = 0;
	id[24][14] = 0;
	id[24][15] = 0;

	/*

	tetrominoe:  *
				*** 

	*		 1,1,1,0
			 1,0,0,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[25][0] = 1;
	id[25][1] = 1;
	id[25][2] = 1;
	id[25][3] = 0;
	id[25][4] = 1;
	id[25][5] = 0;
	id[25][6] = 0;
	id[25][7] = 0;
	id[25][8] = 0;
	id[25][9] = 0;
	id[25][10] = 0;
	id[25][11] = 0;
	id[25][12] = 0;
	id[25][13] = 0;
	id[25][14] = 0;
	id[25][15] = 0;
	/*

	tetrominoe:  *
				*** 

	*		 1,1,0,0
			 0,1,0,0
			 0,1,0,0
			 0,0,0,0
	*/
	id[26][0] = 1;
	id[26][1] = 1;
	id[26][2] = 0;
	id[26][3] = 0;
	id[26][4] = 0;
	id[26][5] = 1;
	id[26][6] = 0;
	id[26][7] = 0;
	id[26][8] = 0;
	id[26][9] = 1;
	id[26][10] = 0;
	id[26][11] = 0;
	id[26][12] = 0;
	id[26][13] = 0;
	id[26][14] = 0;
	id[26][15] = 0;
	/*

	tetrominoe:  *
				*** 

	*		 0,0,1,0
			 1,1,1,0
			 0,0,0,0
			 0,0,0,0
	*/
	id[27][0] = 0;
	id[27][1] = 0;
	id[27][2] = 1;
	id[27][3] = 0;
	id[27][4] = 1;
	id[27][5] = 1;
	id[27][6] = 1;
	id[27][7] = 0;
	id[27][8] = 0;
	id[27][9] = 0;
	id[27][10] = 0;
	id[27][11] = 0;
	id[27][12] = 0;
	id[27][13] = 0;
	id[27][14] = 0;
	id[27][15] = 0;
}
//return the id 0 or 1 in the n position, T is for tetrominoe, the first key of the array
//defines which tetrominoe is being returned. All the tetrominoes have a 4 by 4 space to be set
int Board::Tetrominoes::getid(int T, int n){
	return id[T][n];
}
int Board::Tetrominoes::getidlenght(int t){
	int lenght = 0, bufferlenght = 0;
	int counter = 0;
	for(int y = 0; y<4;y++){
		for(int x = 0; x<4;x++){
			if(mainBoard.Tetrominoe.getid(t,counter) == 1){
				bufferlenght++;
			}
			counter++;
		}
		if(lenght < bufferlenght || lenght == 0 ){
			lenght =  bufferlenght;
			bufferlenght = 0; 

		}
	}
	return lenght;
}