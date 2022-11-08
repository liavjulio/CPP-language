#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include"Facilities.h"
class FerrisWheel :public Facilities
{
protected:
	int height_wheel;
	int num_cranes;
public:
	FerrisWheel();
	FerrisWheel(char* name_fac, int time_fac, float age, int height, int height_whell, int num_cranes);
	FerrisWheel(const FerrisWheel& d);
	~FerrisWheel();
	void print()const;
	void change(char* name_fac, int time_fac, float age, int height, int height_whell, int num_cranes);
};