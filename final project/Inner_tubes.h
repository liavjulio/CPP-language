#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "Facilities.h"
class Inner_tubes :public Facilities
{
private:
	float depth;
	int max_innertubes;
public:
	Inner_tubes();
	Inner_tubes(float depth, int max_innertubes, char* name_fac, int time, float age, int height);
	Inner_tubes(const Inner_tubes& i);
	~Inner_tubes();
	char* get_name();
	void print()const;
	void change(float depth, int max_innertubes, char* name_fac, int time, float age, int height);
};