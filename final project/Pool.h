#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include"Facilities.h"
class Pool :virtual public Facilities
{
protected:
	float deepmax;
public:
	Pool();
	Pool(float deepmax,char*name_fac,float age,int time,int height);
	Pool(const Pool& d);
	~Pool();
	void change(float deepmax, char* name_fac, float age, int time, int height);
	void print()const;
};