#include "FerrisWheel.h"

FerrisWheel::FerrisWheel() :Facilities()
{
	height_wheel = 0;
	num_cranes = 0;
}

FerrisWheel::FerrisWheel(char* name_fac, int time_fac, float age, int height, int height_whell, int num_cranes) :Facilities(name_fac, time_fac, age, height)
{
	this->height_wheel = height_whell;
	this->num_cranes = num_cranes;
}

FerrisWheel::FerrisWheel(const FerrisWheel& d) :Facilities(d)
{
	this->height_wheel = d.height_wheel;
	this->num_cranes = d.num_cranes;
}

FerrisWheel::~FerrisWheel()
{
}

void FerrisWheel::print() const
{
	Facilities::print();
	std::cout << "wheel height" << height_wheel << "num of cranes" << num_cranes << std::endl;
}

void FerrisWheel::change(char* name_fac, int time_fac, float age, int height, int height_whell, int num_cranes)
{
	this->name_fac = new char[strlen(name_fac) + 1];
	strcpy(this->name_fac, name_fac);
	this->time_fac = time_fac;
	this->min_age = age;
	this->min_height = height;
	this->height_wheel = height_whell;
	this->num_cranes = num_cranes;
}
