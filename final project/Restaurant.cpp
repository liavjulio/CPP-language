#include "Restaurant.h"

Restaurant::Restaurant()
{
	rest_name = NULL;
	menu = NULL;
	menu_size = 0;
}

Restaurant::Restaurant(char* rest_name, Menu* menu, int menu_size)
{
	if (!rest_name)
	{
		this->menu_size = 0;
		this->menu = NULL;
	}
	else
	{
		this->rest_name = new char[strlen(rest_name) + 1];
		strcpy(this->rest_name,rest_name);
		this->menu_size = menu_size;
		this->menu = new Menu[menu_size];
		for (int i = 0; i < menu_size; i++)
			this->menu[i] = menu[i];
	}
}

Restaurant::Restaurant(const Restaurant& r)
{
	menu_size = r.menu_size;
	rest_name = new char[strlen(r.rest_name) + 1];
	strcpy(rest_name, r.rest_name);
	menu = new Menu[r.menu_size];
	for (int i = 0; i < r.menu_size; i++)
		menu[i] = r.menu[i];
}

Restaurant::~Restaurant()
{
	delete[]menu;
	delete[]rest_name;
}

void Restaurant::print_menu() const
{
	for (int i = 0; i < menu_size; i++)
		menu[i].print();
}

void Restaurant::add_to_menu(char* name,int price)
{
	int i;
	Menu* temp = NULL;
	if (!menu)
	{
		menu_size = 1;
		menu = new Menu[menu_size];
		menu[0] = Menu(price, name);
	}
	else
	{
		temp = new Menu[menu_size + 1];
		for (i = 0; i < menu_size; i++)
			temp[i] = menu[i];
		temp[menu_size] = Menu(price, name);
		delete[]menu;
		menu = temp;
		menu_size++;
	}

}

void Restaurant::remove_from_menu(char* name, int price)
{
	int i,index;
	bool flag = false;
	Menu* temp = NULL;
	if (!menu)
		return;
	for ( i = 0; i < menu_size; i++)
	{
		if (strcmp(menu[i].get_food_name(),name)==0)
		{
			index = i;
			flag = true;
		}
	}
	if (flag)
	{
		temp = new Menu[menu_size - 1];
		for ( i = 0; i < index; i++)
			temp[i] = menu[i];
		for (i = index; i < menu_size; i++)
			temp[i] = menu[i + 1];
		delete[]menu;
		menu = temp;
		menu_size--;
	}
	else
		cout << "This food isn't on the menu" << endl;
}

void Restaurant::print() const
{
	cout << rest_name << endl;
}

char* Restaurant::get_name()
{
	return rest_name;
}

