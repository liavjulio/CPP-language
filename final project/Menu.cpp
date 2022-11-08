#include "Menu.h"

Menu::Menu()
{
	food_name = NULL;
	food_price = 0;
}

Menu::Menu(int food_price, char* food_name)
{
	if (!food_name)
	{
		this->food_name = NULL;
		food_price = 0;
	}
	else
	{
		this->food_price = food_price;
		this->food_name = new char[strlen(food_name) + 1];
		strcpy(this->food_name, food_name);
	}
}

Menu::Menu(const Menu& m)
{
	food_price = m.food_price;
	food_name = new char[strlen(m.food_name) + 1];
	strcpy(food_name,m.food_name);
}

Menu::~Menu()
{
	delete[]food_name;
}

int Menu::get_food_price()
{
	return food_price;
}

char* Menu::get_food_name()
{
	return food_name;
}

void Menu::set_food_price(int food_price)
{
	this->food_price = food_price;
}
void Menu::set_food_name(char* food_name)
{
	this->food_name = new char[strlen(food_name) + 1];
	strcpy(this->food_name, food_name);
}

void Menu::print() const
{
	cout << "Food name: " << food_name << " Price: " << food_price << endl;
}
