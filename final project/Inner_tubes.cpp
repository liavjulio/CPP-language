#include "Inner_tubes.h"

Inner_tubes::Inner_tubes()
{
	this->depth = 0;
	this->max_innertubes = 0;
}

Inner_tubes::Inner_tubes(float depth, int max_innertubes, char* name_fac, int time, float age, int height) :Facilities(name_fac, time, age, height)
{
	this->depth = depth;
	this->max_innertubes = max_innertubes;
}
Inner_tubes::Inner_tubes(const Inner_tubes& i) : Facilities(i)
{
	this->depth = i.depth;
	this->max_innertubes = i.max_innertubes;
}

Inner_tubes::~Inner_tubes()
{
}

char* Inner_tubes::get_name()
{
	return this->name_fac;
}

void Inner_tubes::print() const
{
}

void Inner_tubes::change(float depth, int max_innertubes, char* name_fac, int time, float age, int height)
{
	this->name_fac = new char[strlen(name_fac) + 1];
	strcpy(this->name_fac, name_fac);
	this->time_fac = time_fac;
	this->min_age = age;
	this->min_height = height;
	this->depth = depth;
	this->max_innertubes = max_innertubes;
}
