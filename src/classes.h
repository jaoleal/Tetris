#pragma once
#include "raylib.h"


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

class Board{	
	private:
		const static int ccountw = 10, ccounth =20;
		int posx, posy;
		Rectangle outline;
	public:
		void setpos(int x, int y);
		Board(int x, int y);
		void buildBody(int posx, int posy, int ccountw,int ccounth, int cw, int ch, Color c);
		void DrawOutline(Rectangle body, float linesize, Color c);
		void DrawBody();
		void setOutline(float posx,float posy,float ccountw,float ccounth) ;

		

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
			Rectangle getbody();
			Color getcolor();
			void drawCurrentTetromino(int x, int y);
	}cells[ccountw*ccounth];

}mainBoard{30,10};	
