#define _CRT_SECURE_NO_WARNINGS
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class Menu
{
private:
	int food_price;
	char* food_name;
public:
	Menu();
	Menu(int food_price, char* food_name);
	Menu(const Menu& m);
	~Menu();
	int get_food_price();
	char* get_food_name();
	void set_food_price(int food_price);
	void set_food_name(char* food_name);
	void print()const;
};

