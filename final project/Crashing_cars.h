#pragma once
#include "Facilities.h"
class Crashing_cars :public Facilities
{
private:
	float area;
	int num_cars;
public:
	Crashing_cars();
	Crashing_cars(float area, int num_cars, char* name_fac, int time, float age, int height);
	Crashing_cars(const Crashing_cars& c);
	~Crashing_cars();
	char* get_name();
	void print() const;
	void change(float area, int num_cars, char* name_fac, int time, float age, int height);
};

