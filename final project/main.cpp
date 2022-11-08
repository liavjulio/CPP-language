#define _CRT_SECURE_NO_WARNINGS
/***************************************************
 * Hackathon - Summer 2022                         *
 *                                                 *
 * This program implements luna park program       *
 *                                                 *
 * Authot:                                         *
 * Dima Shmuel 310782164                           *
 * Liav Huli 314917808                             *
 * Yankel Jaoui 324523075                          *
 ***************************************************/
#include<iostream>
#include<string.h>
using namespace std;
#include"LunaPark.h"
#include"Roller_coaster.h"
#include "Pool.h"
#include "Inner_tubes.h"
#include "Crashing_cars.h"
#include "FerrisWheel.h"
#include "Menu.h"
#define STRSIZE 30
int main()
{
	int i, menu1,menu, sizefac, time_fac, min_height, food_price, menu_size, length, num_cars, height_wheel, num_cranes, max_innertubes, fac_size, rest_size;
	char name_fac[STRSIZE], rest_name[STRSIZE], food_name[STRSIZE];
	float min_age, area, depth, deep_max;
	bool is_water_conster;
	LunaPark p1;
	Facilities* a = NULL;
	Facilities* b = NULL;
	Facilities* c = NULL;
	Facilities* d = NULL;
	Facilities* e = NULL;
	Restaurant* f = NULL;
	Menu* m;
	cout << "enter your choise , 1-add facilities , 2-add restaurant , 3- print all , 4-print restaurant , 5 print facilities, 6-exit" << endl;
	cin >> menu1;
	while (menu1 != 6)
	{
		switch (menu1)
		{
		case 1:
			cout << "Choose facilitie kind" << endl << "1-roller  2-pool 3-inner tubes 4-crashing car 5-ferris wheel , 6 for exit  " << endl;
			cin >> menu;
			cout << "Enter facilitie name" << endl;
			cin >> name_fac;
			cout << "Enter facilitie raond time " << endl;
			cin >> time_fac;
			cout << "Enter facilitie min age " << endl;
			cin >> min_age;
			cout << "Enter facilitie height " << endl;
			cin >> min_height;
			while (menu != 6)
			{

				switch (menu)
				{
				case 1:
					cout << "Enter num cranes " << endl;
					cin >> length;
					cout << "Enter length " << endl;
					cin >> num_cranes;
					if (!a)
					{
						a = new Roller_coaster(length, num_cranes, name_fac, time_fac, min_age, min_height);
						p1.instert(a);
					}
					else
					{
						dynamic_cast <Roller_coaster*> (a)->change(length, num_cranes, name_fac, time_fac, min_age, min_height);
						p1.instert(a);
					}
					break;
				case 2:
					cout << "Enter deepmax " << endl;
					cin >> deep_max;
					if (!b)
					{
						b = new Pool(deep_max, name_fac, time_fac, min_age, min_height);
						p1.instert(b);
					}
					else
					{
						dynamic_cast <Pool*> (b)->change(deep_max, name_fac, time_fac, min_age, min_height);
						p1.instert(b);
					}
					break;
				case 3:
					cout << "Enter depth " << endl;
					cin >> depth;
					cout << "Enter max innertubes " << endl;
					cin >> max_innertubes;
					if (!c)
					{
						c = new Inner_tubes(depth, max_innertubes, name_fac, time_fac, min_age, min_height);
						p1.instert(c);
					}
					else
					{
						dynamic_cast <Inner_tubes*> (c)->change(depth, max_innertubes, name_fac, time_fac, min_age, min_height);
						p1.instert(c);
					}
					break;
				case 4:
					cout << "Enter area " << endl;
					cin >> area;
					cout << "Enter num_cars " << endl;
					cin >> num_cars;
					if (!d)
					{
						d = new Crashing_cars(area, num_cars, name_fac, time_fac, min_age, min_height);
						p1.instert(d);
					}
					else
					{
						dynamic_cast <Crashing_cars*> (d)->change(area, num_cars, name_fac, time_fac, min_age, min_height);
						p1.instert(d);
					}
					break;
				case 5:
				{
					cout << "Enter height_wheel " << endl;
					cin >> height_wheel;
					cout << "Enter cranes num " << endl;
					cin >> num_cranes;
					if (!e)
					{
						e = new FerrisWheel(name_fac, time_fac, min_age, min_height, height_wheel, num_cranes);
						p1.instert(e);
					}
					else
					{
						dynamic_cast <FerrisWheel*> (e)->change(name_fac, time_fac, min_age, min_height, height_wheel, num_cranes);
						p1.instert(e);
					}
					break;
				}
				case 6:
				{
					break;
				}

				}
				cout << "Choose facilitie kind" << endl << "1-roller  2-pool 3-inner tubes 4-crashing car 5-ferris wheel , 6 for exit  " << endl;
				cin >> menu;
				break;
		case 2:
			cout << "enter menu size";
			cin >> menu_size;
			m = new Menu[menu_size];
			for (int i = 0; i < menu_size; i++)
			{
				cout << "enter food price";
				cin >> food_price;
				m[i].set_food_price(food_price);
				cout << "enter food name";
				cin >> food_name;
				m[i].set_food_name(food_name);
			}
			cout << "enter rest name" << endl;
			cin >> rest_name;
			f = new Restaurant(rest_name, m, menu_size);
			p1.instert_rest(f);
		case 3:
			p1.print();
		case 4:
			p1.print_rest();
		case 5:
			p1.print_fac();
		case 6:
			break;
			}
		}
		cout << "enter your choise , 1-add facilities , 2-add restaurant , 3- print all , 4-print restaurant , 5 print facilities, 6-exit" << endl;
		cin >> menu1;
	}
	return 0;
}

