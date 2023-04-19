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
