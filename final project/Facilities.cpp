#include "Facilities.h"
Facilities::Facilities()
{
	this->name_fac = NULL;
	time_fac = 0;
	min_age = 0;
	min_height = 0;
}

Facilities::Facilities(char* name_fac, int time, float age, int height)
{
	if (!name_fac)
	{
		this->name_fac = NULL;
	}
	this->name_fac = new char[strlen(name_fac) + 1];
	strcpy(this->name_fac, name_fac);
	this->time_fac = time;
	this->min_age = age;
	this->min_height = height;
}

Facilities::Facilities(const Facilities& d)
{
	if (!d.name_fac)
	{
		this->name_fac = NULL;
	}
	this->name_fac = new char[strlen(d.name_fac) + 1];
	strcpy(this->name_fac, d.name_fac);
	this->min_age = d.min_age;
	this->min_height = d.min_height;
	this->time_fac = d.time_fac;
}

char* Facilities::get_name()
{
	return this->name_fac;
}

Facilities::~Facilities()
{
	delete[]name_fac;
}

void Facilities::print() const
{
	std::cout << "facility name " << name_fac << "time : " << time_fac << "min age " << min_age << "min height " << min_height << std::endl;
}
