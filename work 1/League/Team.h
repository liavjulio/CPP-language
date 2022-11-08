#pragma once
#include <iostream>

class Team
{
private:
	char* name;
	int goodpoints, badpoints, win, draw, loose;

public:
	Team();
	~Team();
	void set_name(char* str);
	char* get_name();
	void game(int good, int bad);
	int points();
	void print();
};
