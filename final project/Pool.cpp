#include "Pool.h"

Pool::Pool()
{
	deepmax = 0;
}

Pool::Pool(const Pool& d) :Facilities(d)
{
	this->deepmax = d.deepmax;
}

Pool::Pool(float deepmax, char* name_fac, float age, int time, int height):Facilities(name_fac, age,time,height)
{
	this->deepmax = deepmax;
}

Pool::~Pool()
{
}

void Pool::change(float deepmax, char* name_fac, float age, int time, int height)
{
	this->name_fac = new char[strlen(name_fac) + 1];
	strcpy(this->name_fac, name_fac);
	this->time_fac = time_fac;
	this->min_age = age;
	this->min_height = height;
	this->deepmax = deepmax;
	
}

void Pool::print() const
{
	Facilities::print();
	std::cout << "deepmax"<< deepmax  << std::endl;
}
