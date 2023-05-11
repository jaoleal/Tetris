
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
		int stacked[ccountx][ccounty];

	public:	
		void setpos(int x, int y);
		Board(int x, int y);
		void buildBody(int posx, int posy, int ccountx,int ccounty, int cw, int ch, Color c);
		void DrawOutline();
		void DrawBody();
		void Boardupdate();
		void ClearBoard();
		void StackBoard();
		void ResetStackBoard();
		void CheckCSides(const int x,const int y,bool& cangoright,bool& cangoleft, bool& cangodown);
		bool CheckRotation(const int x, const int y, const int id, int rotationid,const bool canrotate);

		bool ActualTetrominoe(int id,bool torotate, bool movexminus, bool movexplus, bool godown);
		int GenNewTetrominoe();

	class Tetrominoes{
	private:
		int id[28][16];
	public:
		//a constructor that defines all tetrominoes id.
		Tetrominoes();
		int getid(int T, int n);
		int getidlenght(int t);

	}Tetrominoe;
	

	class Cell{
		private:
			Rectangle body;
			Color color, outlinecolor, *cptr;
			int cexists, *eptr;
		public:
			Cell();
			void setbody(float x, float y, float width, float height);
			void setcolor(Color c);
			int isreal();
			void setreal(int newexistence);
			Rectangle getbody();
			Color getcolor();
			Color getoutcolor();

	}cells[ccountx][ccounty];

	class Outline{
		private:
			Rectangle body;
			Color c;
			float posx, posy;
		public:
		Outline(float x, float y);
		void setOutline(Color c,float ccountw,float ccounth);
		void DrawOutline(float linesize);
		Rectangle getbody();
	}outline{((float)(posx))-(13) ,((float)(posy))-(13) };


	class Background{
		private:
			Rectangle body;
			Color color;
		public:
			Background();
			void setBackground(Rectangle newbody);
			void DrawBackground();
			void setColor(Color c);
	}background;
}mainBoard{60,60};	
