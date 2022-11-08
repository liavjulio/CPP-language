#pragma warning(disable : 4996)
#include <iostream>
#include "league.h"
using namespace std;

League::League(int size, char** names)
{
	this->size = size;
	arr = new Team[size];
	if (!arr)
	{
		cout << "error" << endl;
		arr = NULL;
	}
	for (int i = 0; i < size; i++)
	{
		arr[i].set_name(names[i]);
	}
}

League::~League()
{
	/*for (int i = 0; i < size; i++)
	{
		arr[i].~Team();
	}*/
	delete [] arr;
}

bool League::game(int points1, char* group1, int points2, char* group2)
{
	int check = 0;
	int indexgroup1 = 0;
	int indexgroup2 = 0;
	for (int i = 0; i < size; i++)
	{
		if (!strcmp(arr[i].get_name(), group1))
		{
			check++;
			indexgroup1 = i;
		}
		else if (!strcmp(arr[i].get_name(), group2))
		{
			check++;
			indexgroup2 = i;
		}
	}
	if (check == 2)
	{
		arr[indexgroup1].game(points1, points2);
		arr[indexgroup2].game(points2, points1);
		return true;
	}
	else
	{
		cout << "teams doesnt exists" << endl;
		return false;
	}
}

void League::print()
{
	for (int i = 0; i < size; i++)
	{
		arr[i].print();
	}
}