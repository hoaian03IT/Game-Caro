#include "Khung.h"

Khung::Khung()
{
	y = 10;
	x = 40;
	w = 12; l = 6;
}

void Khung::khung_game()
{
	Header::SetColor(1);
	for (int i = x; i < x + w; i++)
	{
		Header::gotoXY(i, y); putchar(196);
		Header::gotoXY(i, y + l); putchar(196);
	}

	for (int i = y; i < y + l; i++)
	{
		Header::gotoXY(x, i); putchar(179);
		Header::gotoXY(x + w, i); putchar(179);
	}
	Header::gotoXY(x, y); putchar(218);
	Header::gotoXY(x + w, y); putchar(191);
	Header::gotoXY(x, y + l); putchar(192);
	Header::gotoXY(x + w, y + l); putchar(217);
	int cnt = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = y + 1; j < y + l; j++)
		{
			Header::gotoXY(cnt * 4 + x, j); putchar(179);
		}
		cnt++;
	}
	cnt = 0;
	int tmp;
	for (int i = 0; i < 3; i++)
	{
		tmp = 1;
		for (int j = x + 1; j < x + w; j++)
		{
			if (j == tmp * 4 + x)
			{
				Header::gotoXY(j, cnt * 2 + y); putchar(197);
				tmp++;
			}
			else
			{
				Header::gotoXY(j, cnt * 2 + y); putchar(196);
			}
		}
		cnt++;
	}
	cnt = 1;
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
		{
			Header::gotoXY(cnt * 4 + x, y); putchar(194); cnt++;
			if (cnt >= 3) cnt = 1;
		}
		else
		{
			Header::gotoXY(cnt * 4 + x, y + l); putchar(193); cnt++;
		}
	}

	cnt = 1;
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
		{
			Header::gotoXY(x, cnt * 2 + y); putchar(195); cnt++;
			if (cnt >= 3) cnt = 1;
		}
		else
		{
			Header::gotoXY(x + w, cnt * 2 + y); putchar(180); cnt++;
		}
	}
}

void Khung::giao_dien_begin()
{
	Header::ShowCur(0);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(22, 6); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(22, 7); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(22, 8); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(22, 9); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(24, 5); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(24, 10); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(26, 5); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(26, 10); putchar(2);
	//in ra chu A
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(28, 10); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(29, 9); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(30, 8); putchar(2); putchar(2); putchar(2); putchar(2); putchar(2); putchar(2); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(31, 7); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(32, 6); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(33, 5); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(34, 5); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(35, 6); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(36, 7); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(37, 8); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(38, 9); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(39, 10); putchar(2);
	//in ra chu R
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(41, 5); putchar(2); putchar(2); putchar(2); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(41, 6); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(41, 7); putchar(2); putchar(2); putchar(2); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(41, 8); putchar(2); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(41, 9); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(41, 10); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(45, 6); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(45, 7); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(44, 9); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(45, 10); putchar(2);
	//in ra chu O
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(47, 6); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(47, 7); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(47, 8); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(47, 9); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(48, 5); putchar(2); putchar(2); putchar(2); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(48, 10); putchar(2); putchar(2); putchar(2); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(52, 6); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(52, 7); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(52, 8); putchar(2);
	Header::textcolor(rand() % 7 + 8); Header::gotoXY(52, 9); putchar(2);
	Header::gotoXY(30, 15); cout << "Enter  :  New game";
	Header::gotoXY(30, 17); cout << "ESC    :  Exit game";
	Header::ShowCur(1);
}

void Khung::giao_dien_end()
{
	Header::gotoXY(30, 15); cout << "Enter  :  New game";
	Header::gotoXY(30, 17); cout << "ESC    :  Exit game";
}