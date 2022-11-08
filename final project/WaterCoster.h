#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include"Roller_coaster.h"
#include"Pool.h"
#include"Facilities.h"

class WaterCoster:public Roller_coaster,public Pool
{
private:
	bool is_water_conster;
public:
	WaterCoster();
	WaterCoster(char* name_fac, int time, float age, int height, int length, int num_cranes, float deepmax,bool is_water_conster);
	WaterCoster(const WaterCoster& w);
	~WaterCoster();
	void print()const;
	void change(char* name_fac, int time, float age, int height, int length, int num_cranes, float deepmax, bool is_water_conster);
};

