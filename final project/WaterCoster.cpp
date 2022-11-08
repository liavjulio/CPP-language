#include "WaterCoster.h"

WaterCoster::WaterCoster():Facilities(),Roller_coaster(),Pool()
{
	is_water_conster = false;
}

WaterCoster::WaterCoster(char* name_fac, int time, float age, int height, int length, int num_cranes, float deepmax,bool is_water_conster) : Facilities(name_fac, time, age, height), Roller_coaster(length, num_cranes, name_fac, time, age, height), Pool(deepmax, name_fac, age, time, height)
{
	this->is_water_conster = is_water_conster;
}

WaterCoster::WaterCoster(const WaterCoster& w):Facilities(w),Roller_coaster(w),Pool(w)
{
	is_water_conster = w.is_water_conster;
}

WaterCoster::~WaterCoster()
{
}

void WaterCoster::print() const
{
	Facilities::print();
	std::cout << "is_water_conster " << is_water_conster  << std::endl;
}

void WaterCoster::change(char* name_fac, int time, float age, int height, int length, int num_cranes, float deepmax, bool is_water_conster)
{
	this->name_fac = new char[strlen(name_fac) + 1];
	strcpy(this->name_fac, name_fac);
	this->time_fac = time_fac;
	this->min_age = age;
	this->min_height = height;
	this->num_cranes = num_cranes;
	this->deepmax = deepmax;
	this->is_water_conster = is_water_conster;
}
