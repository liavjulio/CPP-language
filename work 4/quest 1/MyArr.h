#pragma once
using namespace std;
#include <iostream>
#include <typeinfo>
template <class T>
class MyArr
{
private:
	T* arr;
	int size;
	static int count_type;
	static int sum_arrlen;
public:
	MyArr()
	{
		arr = NULL;
		size = 0;
		count_type ++;
	}
	MyArr(T* a, int s)
	{
		if (s>0)
		{
			arr = new T[size];
			if (!arr)
			{
				cout << "error" << endl;
				arr = NULL;
			}
			size = get_size();
			arr = a;
			count_type ++;
			sum_arrlen += s;
		}
		else
		{
			arr = NULL;
			size = 0;
			count_type ++;
		}
	}
	~MyArr()
	{
		delete[]arr;
	}
	int get_size()const
	{
		return this->size;
	}
	void print_type()const
	{
		cout << typeid(T).name() << endl;
	}
	int find(T a) 
	{
		if (size == 0)
		{
			return -1;
		}
		for (int i = 0; i < size; i++)
		{
			if (arr[i]==a)
			{
				return i;
			}
		}
		return -1;
	}
	T operator[](int i)const
	{
		if (i<size && i>=0)
		{
			return arr[i];
		}
		throw i;
	}
	T* findmin()const
	{
		if (size == 0)
		{
			return NULL;
		}
		T min = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (min > arr[i])
			{
				min = arr[i];
			}
		}
		return &min;
	}
	T* findmax()const
	{
		if (size == 0)
		{
			return NULL;
		}
		T max = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
		return &max;
	}
	void operator+=(T a)
	{
		T* temp;
		size++;
		temp = new T[size];
		if (!temp)
		{
			cout << "error";
			temp = NULL;
		}
		for (int i = 0; i < size-1; i++)
		{
			temp[i] = arr[i];
		}
		temp[size-1] = a;
		delete[]arr;
		arr = new T[size];
		if (!arr)
		{
			cout << "error";
			arr = NULL;
		}
		for (int i = 0; i < size; i++)
		{
			arr[i] = temp[i];
		}
		sum_arrlen++;
	}
	friend ostream &operator<<(ostream &os , const MyArr &a)
	{
		int s = a.get_size();
		for (int i = 0; i < s; i++)
		{
			os << a.operator[](i) << endl;
		}
		return os;
	}
	bool is_sorted()
	{
		if (size == 0 || size == 1 )
		{
			return true;
		}
		else
		{
			for (int i = 1; i < size; i++)
			{
				if (arr[i] > arr[i-1])
				{
					continue;
				}
				else
				{
					return false;
				}
			}
			return true;
		}
	}
	int sum_static()
	{
		return sum_arrlen;
	}
	int count_static()
	{
		return count_type;
	}
};