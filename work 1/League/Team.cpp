#pragma warning(disable : 4996)
#include <iostream>
#include "Team.h"
using namespace std;

Team::Team()
{
	name = NULL;
	goodpoints = 0;
	badpoints = 0;
	win = 0;
	draw = 0;
	loose = 0;
}

Team::~Team()
{
	delete name;
}

void Team::set_name(char* str)
{
	if (!str)
	{
		cout << "error" << endl;
		name = NULL;
	}
	else
	{
		name = new char[strlen(str) + 1];
		if (name)
		{
			strcpy(name, str);
		}
	}
}

char* Team::get_name()
{
	return name;
}

void Team::game(int good, int bad)
{
	goodpoints += good;
	badpoints += bad;
	if (good > bad)
	{
		win++;
	}
	if (good == bad)
	{
		draw++;
	}
	if (good < bad)
	{
		loose++;
	}
}

int Team::points()
{
	return ((3 * win) + draw);
}

void Team::print()
{
	cout << "club name: " << name << ' ' << "goals for: " << goodpoints << ' ' << "goals against: " << badpoints << ' ' << "wins: " << win << ' ' << "draws: " << draw << ' ' << "loses: " << loose << ' ' << "num of matches: " << (win + draw + loose) << ' ' << "points to team: " << points() << endl;
}