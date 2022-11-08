#include "Roller_coaster.h"

Roller_coaster::Roller_coaster()
{
	length = 0;
	num_cranes = 0;
}

Roller_coaster::Roller_coaster(int length, int num_cranes, char* name_fac, int time, float age, int height) :Facilities(name_fac, time, age, height)
{
	this->length = length;
	this->num_cranes = num_cranes;
}

Roller_coaster::Roller_coaster(const Roller_coaster& r) :Facilities(r)
{
	this->length = r.length;
	this->num_cranes = r.num_cranes;
}

char* Roller_coaster::get_name() const
{
	return this->name_fac;
}

Roller_coaster::~Roller_coaster()
{
}

void Roller_coaster::print() const
{
	Facilities::print();
	std::cout << "length" << length << "num of cranes" << num_cranes << std::endl;
}

void Roller_coaster::change(int length, int num_cranes, char* name_fac, int time, float age, int height)
{
	this->name_fac = new char[strlen(name_fac) + 1];
	strcpy(this->name_fac, name_fac);
	this->time_fac = time_fac;
	this->min_age = age;
	this->min_height = height;
	this->length = length;
	this->num_cranes = num_cranes;
}

