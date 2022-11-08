#pragma once
#include <iostream>
#include "Team.h"

class League
{
private:
	int size;
	Team* arr;
public:
	League(int size, char** names);
	~League();
	bool game(int points1, char* group1, int points2, char* group2);
	void print();
};