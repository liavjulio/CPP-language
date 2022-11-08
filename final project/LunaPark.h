#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include<string.h>
#include "Facilities.h"
#include "Restaurant.h"

using namespace std;
class LunaPark
{
protected:
	int rest_size = 0;
	int fac_size = 0;
	Facilities** fac_arr;
	Restaurant** rest_arr;
public:
	LunaPark();
	void instert(Facilities* d);
	void instert_rest(Restaurant* r);
	void delete_rest(char* name);
	void delete_fac(char* name);
	~LunaPark();
	void print()const;
	void print_fac()const;
	void print_rest()const;
};