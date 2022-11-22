#include "Game.h"

Game::Game()
{
}

Game::~Game()
{
}

void Game::play()
{
	Khung z;
	z.giao_dien_begin();
	char c = _getch();
	while (true)
	{
		a = new int* [9];
		for (int i = 0; i < 9; i++)
		{
			a[i] = new int[3];
		}
		if (c == 13)
		{
			Khung b;
			system("cls");
			b.khung_game();
			srand(time(NULL));
			bool swap_player = rand() % 2; // random người đi cờ trước
			int _x, _y;
			_x = b.get_xw() - b.get_w() / 2;
			_y = b.get_yl() - b.get_l() / 2;
			Header::gotoXY(_x, _y);
			int vitri = 4; // đưa con trỏ ra giữa bàn cờ
			Header::SetColor(12	);
			while (true)
			{
				Header::ShowCur(0);
				Header::SetColor(9);
				Header::gotoXY(30, 5); cout << "LUOT : ";
				Header::gotoXY(38, 5); if (swap_player == 1) putchar(88); else putchar(79);
				Header::gotoXY(_x, _y);
				Header::ShowCur(1);
				c = _getch();
				if (c == 77 && _x < b.get_xw() - 4) // phải
				{
					_x += 4;
					vitri += 1;
					Header::gotoXY(_x, _y);
				}
				else if (c == 75 && _x > b.get_xw() - b.get_w() + 4) // trái
				{
					_x -= 4;
					vitri -= 1;
					Header::gotoXY(_x, _y);
				}
				else if (c == 72 && _y > b.get_yl() - b.get_l() + 2) // lên
				{
					_y -= 2;
					vitri -= 3;
					Header::gotoXY(_x, _y);
				}
				else if (c == 80 && _y < b.get_yl() - 2) // xuống
				{
					_y += 2;
					vitri += 3;
					Header::gotoXY(_x, _y);
				}
				else if (c == 32 && !luu_tru(vitri)) // enter đánh X || O
				{
					if (swap_player)
					{
						Header::gotoXY(_x, _y); putchar(88);
						a[vitri][0] = _x;
						a[vitri][1] = _y;
						a[vitri][2] = 88;
						// xét win game
						if (win_game(swap_player))
						{
							system("cls");
							Header::gotoXY(30, 10); cout << "PLAYER X WIN!";
							Khung::giao_dien_end();
							break;
						}
						swap_player = false;
					}
					else
					{
						Header::gotoXY(_x, _y); putchar(79);
						a[vitri][0] = _x;
						a[vitri][1] = _y;
						a[vitri][2] = 79;
						// xét win game
						if (win_game(swap_player))
						{
							system("cls");
							Header::gotoXY(30, 10); cout << "PLAYER O WIN!";
							Khung::giao_dien_end();
							break;
						}
						swap_player = true;
					}
				}
				// xét hòa game
				if (hoa_game())
				{
					system("cls");
					Header::gotoXY(40, 10); cout << "HOA";
					Khung::giao_dien_end();
					break;
				}
			}
		}
		else if (c == 27)
		{
			break;
		}
		else
		{
			c = _getch();
		}
		delete[] a;
	}
}

bool Game::luu_tru(int vitri)
{
	if (a[vitri][2] == 88 || a[vitri][2] == 79)
		return 1;
	return 0;
}

bool Game::win_game(bool swap_player)
{
	if (swap_player)
	{
		if (a[0][2] == 88 && a[1][2] == 88 && a[2][2] == 88 || a[0][2] == 88 && a[3][2] == 88 && a[6][2] == 88)
			return 1;
		if (a[3][2] == 88 && a[4][2] == 88 && a[5][2] == 88 || a[1][2] == 88 && a[4][2] == 88 && a[7][2] == 88)
			return 1;
		if (a[6][2] == 88 && a[7][2] == 88 && a[8][2] == 88 || a[2][2] == 88 && a[5][2] == 88 && a[8][2] == 88)
			return 1;
		if (a[0][2] == 88 && a[4][2] == 88 && a[8][2] == 88 || a[2][2] == 88 && a[4][2] == 88 && a[6][2] == 88)
			return 1;
		return 0;
	}
	else
	{
		if (a[0][2] == 79 && a[1][2] == 79 && a[2][2] == 79 || a[0][2] == 79 && a[3][2] == 79 && a[6][2] == 79)
			return 1;
		if (a[3][2] == 79 && a[4][2] == 79 && a[5][2] == 79 || a[1][2] == 79 && a[4][2] == 79 && a[7][2] == 79)
			return 1;
		if (a[6][2] == 79 && a[7][2] == 79 && a[8][2] == 79 || a[2][2] == 79 && a[5][2] == 79 && a[8][2] == 79)
			return 1;
		if (a[0][2] == 79 && a[4][2] == 79 && a[8][2] == 79 || a[2][2] == 79 && a[4][2] == 79 && a[6][2] == 79)
			return 1;
		return 0;
	}
}

bool Game::hoa_game()
{
	int count = 0;
	for (int i = 0; i < 9; i++)
	{
		if (a[i][2] == 88 || a[i][2] == 79)
			count++;
	}
	if (count == 9)
		return true;
	else
		return false;
}