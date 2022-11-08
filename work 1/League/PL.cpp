#pragma warning(disable : 4996)
#include <iostream>
#include "league.h"
#include "Team.h"
using namespace std;

int main()
{
	char** names;
	int size, i = 0, choose = 1;
	char str[20];
	char* team1 = NULL, * team2 = NULL;
	int points1, points2;
	cout << "Enter size of teams:" << endl;
	cin >> size;
	names = new char* [size];
	if (!names)
	{
		cout << "failed" << endl;
		return 0;
	}
	for (i = 0; i < size; i++)
	{
		cout << "Enter team name:" << endl;
		cin >> str;
		names[i] = new char[strlen(str) + 1];
		if (!names[i])
		{
			cout << "failed" << endl;
			return 0;
		}
		strcpy(names[i], str);
	}
	League PL(size, names);
	while (choose != 0)
	{
		cout << "Enter team name 1:" << endl;
		cin >> str;
		team1 = new char[strlen(str) + 1];
		if (!team1)
		{
			cout << "Error" << endl;
			return 0;
		}
		strcpy(team1, str);
		cout << "Enter team name 2:" << endl;
		cin >> str;
		team2 = new char[strlen(str) + 1];
		if (!team2)
		{
			cout << "Error" << endl;
			return 0;
		}
		strcpy(team2, str);
		cout << "Enter team 1 goals:" << endl;
		cin >> points1;
		cout << "Enter team 2 goals:" << endl;
		cin >> points2;
		PL.game(points1, team1, points2, team2);
		PL.print();
		cout << endl;
		cout << "to exit enter 0 if you want to keep going enter any else numbet you want: " << endl;
		cin >> choose;
	}
	delete [] team1;
	delete [] team2;
	return 0;
}