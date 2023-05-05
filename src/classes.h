
/*
* @file classes.h
*
* @brief classes.h holds all class declarations
*
*@author João Leal
*Contact: devjoaoleal1006@gmail.com
*
*/

#pragma once
#include "raylib.h"

/*
*Game class definition
*/
class Game{
private:
	void gfx();
	void lgc(); 

public:
	Game(
		int scrwdt,
		int scrhgt,
		int fps, 
		const char* tittle,
		Color color);
	~Game();

	void Step();
};

/*
*Board and Cell/outline clas definition
*/
class Board{	
	private:
		const static int ccountx = 10, ccounty =20;
		int posx, posy;

	public:	
		void setpos(int x, int y);
		Board(int x, int y);
		void buildBody(int posx, int posy, int ccountx,int ccounty, int cw, int ch, Color c);
		void DrawOutline();
		void DrawBody();
		void NewTetrominoe(int id, int x);
		void Boardupdate();
		void ClearBoard();

	class Tetrominoes{
	private:
		int id[9][16];
	public:
		//a constructor that defines all tetrominoes id.
		Tetrominoes();
		int getid(int T, int n);

	}Tetrominoe;
	
	class Outline{
		private:
			Rectangle body;
			Color c;
			float posx, posy;
		public:
		Outline(float x, float y);
		void setOutline(Color c,float ccountw,float ccounth);
		void DrawOutline(float linesize);
	}outline{((float)(posx))-(13) ,((float)(posy))-(13) };
		

	class Cell{
		private:
			Rectangle body;
			Color color;
			int cellposx, cellposy;
		public:
			int cexists;
			Cell();
			void setbody(float x, float y, float width, float height);
			void setcolor(Color c);
			int isreal();
			void setreal(int newexistence);
			Rectangle getbody();
			Color getcolor();
	}cells[ccountx][ccounty];

}mainBoard{60,60};	
