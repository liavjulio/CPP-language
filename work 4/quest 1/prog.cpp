using namespace std;
#include <iostream>
#include "MyDate.h"
#include "MyArr.h"
int MyArr<MyDate>::count_type = 0 , MyArr<float>::count_type = 0;
int MyArr<MyDate>::sum_arrlen = 0, MyArr<float>::sum_arrlen = 0;
int main()
{
	try
	{
		float* F1 = NULL;
		int s1 = 0;
		cout << "enter size" << endl;
		cin >> s1;
		F1 = new float[s1];
		if (!F1)
		{
			cout << "error";
			F1 = NULL;
		}
		for (int i = 0; i < s1; i++)
		{
			cout << "enter number";
			cin >> F1[i];
		}
		MyArr<float>float_arr1(F1, s1);
		// options for obj 1
		float add1;
		cout << "enter number to add" << endl;
		cin >> add1;
		float_arr1.operator+=(add1);
		float min1 = *float_arr1.findmin();
		cout << " min num " << min1 << endl;
		float max1 = *float_arr1.findmax();
		cout << " max num " << max1 << endl;
		cout << float_arr1.is_sorted() << endl;
		// obj 2
		float* F2 = NULL;
		int s2 = 0;
		cout << "enter size" << endl;
		cin >> s2;
		F2 = new float[s2];
		if (!F1)
		{
			cout << "error";
			F1 = NULL;
		}
		for (int i = 0; i < s2; i++)
		{
			cout << "enter number";
			cin >> F2[i];
		}
		MyArr<float>float_arr2(F2, s2);
		float add2;
		cout << "enter number to add" << endl;
		cin >> add2;
		float_arr2.operator+=(add2);
		float min2 = *float_arr2.findmin();
		cout << " min num " << min2 << endl;
		float max2 = *float_arr2.findmax();
		cout << " max num " << max2 << endl;
		cout << float_arr2.is_sorted() << endl;
		// obj 3
		int d, m, y;
		int Dsize1, Dsize2;
		MyDate* D1;
		cout << "enter dates size" << endl;
		cin >> Dsize1;
		D1 = new MyDate[Dsize1];
		if (!D1)
		{
			cout << "error" << endl;
			return 0;
		}
		for (int i = 0; i < Dsize1; i++)
		{
			cout << "enter day" << endl;
			cin >> d;
			cout << "enter month" << endl;
			cin >> m;
			cout << "enter year" << endl;
			cin >> y;
			D1[i].set_date(d, m, y);
		}
		MyArr<MyDate>Darr1;
		for (int i = 0; i < Dsize1; i++)
		{
			Darr1 += D1[i];
		}
		MyDate add3;
		cout << "enter date to add" << endl;
		cout << "enter day" << endl;
		cin >> d;
		cout << "enter month" << endl;
		cin >> m;
		cout << "enter year" << endl;
		cin >> y;
		add3.set_date(d, m, y);
		Darr1 += add3;
		MyDate min3 = *Darr1.findmin();
		cout << " min num " << min3 << endl;
		MyDate max3 = *Darr1.findmax();
		cout << " max num " << max3 << endl;
		cout << Darr1.is_sorted() << endl;
		MyDate* D2;
		cout << "enter dates size" << endl;
		cin >> Dsize2;
		D2 = new MyDate[Dsize2];
		if (!D2)
		{
			cout << "error" << endl;
			return 0;
		}
		for (int i = 0; i < Dsize2; i++)
		{
			cout << "enter day" << endl;
			cin >> d;
			cout << "enter month" << endl;
			cin >> m;
			cout << "enter year" << endl;
			cin >> y;
			D2[i].set_date(d, m, y);
		}
		MyArr<MyDate>Darr2;
		for (int i = 0; i < Dsize2; i++)
		{
			Darr2 += D2[i];
		}
		MyDate add4;
		cout << "enter date to add" << endl;
		cout << "enter day" << endl;
		cin >> d;
		cout << "enter month" << endl;
		cin >> m;
		cout << "enter year" << endl;
		cin >> y;
		add4.set_date(d, m, y);
		Darr2 += add4;
		MyDate min4 = *Darr2.findmin();
		cout << " min num " << min4 << endl;
		MyDate max4 = *Darr2.findmax();
		cout << " max num " << max4 << endl;
		cout << Darr2.is_sorted() << endl;
		cout << float_arr1.count_static();
		cout << float_arr1.sum_static();
		cout << Darr1.count_static();
		cout << Darr1.sum_static();
		delete[]D1;
		delete[]D2;
		delete[]F1;
		delete[]F2;
	}
	catch (int i)
	{
		cout << "invalid index" << i << endl;
	}
	catch (const char* std)
	{
		cout << std << endl;
	}
	cout << "goodbye" << endl;
	return 0;
}