#pragma once
#include "Header.h"
#include <iostream>
using namespace std;
class Khung
{
	int x, y, w, l;
public:
	int get_xw() {
		return x + w;
	}
	int get_yl() {
		return y + l;
	}
	int get_w()
	{
		return w;
	}
	int get_l()
	{
		return l;
	}
	void khung_game();
	void giao_dien_begin();
	static void giao_dien_end();
	Khung();
};

