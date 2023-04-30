
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
*Board and Cell clas definition
*/
class Board{	
	private:
		const static int ccountw = 10, ccounth =20;
		int posx, posy;

	public:
		void setpos(int x, int y);
		Board(int x, int y);
		void buildBody(int posx, int posy, int ccountw,int ccounth, int cw, int ch, Color c);
		void DrawOutline();
		void DrawBody();
	
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
			bool cexists;
		public:
			Cell();
			void setbody(float x, float y, float width, float height);
			void setcolor(Color c);
			bool isreal();
			Rectangle getbody();
			Color getcolor();
			//void drawCurrentTetromino(int x, int y);
	}cells[ccountw*ccounth];

}mainBoard{60,60};	
