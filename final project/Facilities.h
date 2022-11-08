#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>
#include<string.h>
class Facilities

{
protected:
	char* name_fac;
	int time_fac;
	float min_age;
	int min_height;

public:
	Facilities();
	Facilities(char* name_fac, int time, float age, int height);
	Facilities(const Facilities& d);
	virtual char* get_name();
	virtual ~Facilities();
	virtual void print()const = 0;
};