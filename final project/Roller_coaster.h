#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "Facilities.h"
class Roller_coaster :virtual public Facilities
{
protected:
	int length;
	int num_cranes;
public:
	Roller_coaster();
	Roller_coaster(int length, int num_cranes, char* name_fac, int time, float age, int height);
	Roller_coaster(const Roller_coaster& r);
	char* get_name() const;
	virtual ~Roller_coaster();
	virtual void print() const ;
	void change(int length, int num_cranes, char* name_fac, int time, float age, int height);

};