#pragma once
#include "Khung.h"
class Game
{
private:
	int _x, _y;
	int** a;
public:
	void play();
	void xuli_game(bool swap_player, int vitri, int _x, int _y);
	bool luu_tru(int vitri);
	bool win_game(bool swap_player);
	bool hoa_game();
	Game();
	~Game();
};

