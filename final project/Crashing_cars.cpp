#include "Crashing_cars.h"


Crashing_cars::Crashing_cars()
{
	this->area = 0;
	this->num_cars = 0;
}
Crashing_cars::Crashing_cars(float area, int num_cars, char* name_fac, int time, float age, int height) :Facilities(name_fac, time, age, height)
{
	this->area = area;
	this->num_cars = num_cars;
}

Crashing_cars::Crashing_cars(const Crashing_cars& c) :Facilities(c)
{
	this->area = c.area;
	this->num_cars = c.num_cars;
}
Crashing_cars::~Crashing_cars()
{
}

char* Crashing_cars::get_name()
{
	return this->name_fac;
}

void Crashing_cars::print() const
{
	Facilities::print();
	std::cout << "area :" << area << "cars number" << num_cars << std::endl;
}

void Crashing_cars::change(float area, int num_cars, char* name_fac, int time, float age, int height)
{
	this->name_fac = new char[strlen(name_fac) + 1];
	strcpy(this->name_fac, name_fac);
	this->time_fac = time_fac;
	this->min_age = age;
	this->min_height = height;
	this->num_cars = num_cars;
	this->area = area;
}
