#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include"Menu.h"

class Restaurant
{
protected:
	char* rest_name;
	Menu* menu;
	int menu_size;
public:
	Restaurant();
	Restaurant(char* rest_name,Menu*menu,int menu_size);
	Restaurant(const Restaurant& r);
	~Restaurant();
	void print_menu()const;
	void add_to_menu(char* name, int price);
	void remove_from_menu(char* name, int price);
	void print()const;
	char* get_name();
};

