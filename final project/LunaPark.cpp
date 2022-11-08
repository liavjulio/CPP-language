#include "LunaPark.h"
LunaPark::LunaPark()
{
	fac_arr = NULL;
	rest_arr = NULL;
}

void LunaPark::instert(Facilities* d)
{
	if (fac_size == 0)
	{
		fac_size++;
		fac_arr = new Facilities * [fac_size];
		fac_arr[0] = d;
	}
	else
	{
		int i;
		Facilities** temp = new Facilities * [fac_size++];
		for (i = 0; i < fac_size; i++)
			temp[i] = fac_arr[i];//מקבל אותו מקום בזיכרון ואין צורך לאתחל
		temp[i] = d;
		delete []fac_arr;
		fac_size++;
		fac_arr = temp;
	}
}

void LunaPark::instert_rest(Restaurant* r)
{
	if (rest_size == 0)
	{
		rest_arr = new Restaurant * [1];
		rest_arr[0] = r;
		rest_size++;
	}
	else
	{
		int i;
		Restaurant** temp = new Restaurant * [rest_size + 1];
		for (i = 0; i < rest_size; i++)
		{
			temp[i] = rest_arr[i];//מקבל אותו מקום בזיכרון ואין צורך לאתחל
		}
		temp[i] = r;
		this->rest_size++;
		delete[]rest_arr;
		rest_arr = temp;
	}
}

void LunaPark::delete_rest(char* name)
{
	int i, index;
	bool flag = false;
	if (!rest_arr)
		return;
	Restaurant** temp = NULL;
	for (int i = 0; i < rest_size; i++)
	{
		if (strcmp(rest_arr[i]->get_name(), name) == 0)
		{
			index = i;
			flag = true;
		}
	}
	if (flag)
	{
		temp = new Restaurant * [rest_size - 1];
		for (i = 0; i < index; i++)
			temp[i] = rest_arr[i];
		for (i = index; i < rest_size; i++)
			temp[i] = rest_arr[i + 1];
		delete[]rest_arr;
		rest_arr = temp;
		rest_size--;
	}
	else
		cout << "This resturant doesnt exits" << endl;
}
void LunaPark::delete_fac(char* name)
{
	int i, index;
	bool flag = false;
	if (!fac_arr)
		return;
	Facilities** temp = NULL;
	for (int i = 0; i < fac_size; i++)
	{
		if (strcmp(fac_arr[i]->get_name(), name) == 0)
		{
			index = i;
			flag = true;
		}
	}
	if (flag)
	{
		temp = new Facilities * [rest_size - 1];
		for (i = 0; i < index; i++)
			temp[i] = fac_arr[i];
		for (i = index; i < fac_size; i++)
			temp[i] = fac_arr[i + 1];
		delete[]fac_arr;
		fac_arr = temp;
		fac_size--;
	}
	else
		cout << "This facility doesnt exits" << endl;
}
LunaPark::~LunaPark()
{
	int i;
	for (i = 0; i < fac_size; i++)
		delete fac_arr[i];
	delete[]fac_arr;
	for (i = 0; i < rest_size; i++)
		delete rest_arr[i];
	delete[]rest_arr;
}

void LunaPark::print() const
{
	for (int i = 0; i < rest_size; i++)
	{
		rest_arr[i]->print();
		rest_arr[i]->print_menu();
	}
	for (int i = 0; i < fac_size; i++)
	{
		fac_arr[i]->print();
	}
}
void LunaPark::print_fac() const
{
	for (int i = 0; i < fac_size; i++)
	{
		fac_arr[i]->print();
	}
}

void LunaPark::print_rest() const
{
	for (int i = 0; i < rest_size; i++)
	{
		rest_arr[i]->print();
		rest_arr[i]->print_menu();
	}
}