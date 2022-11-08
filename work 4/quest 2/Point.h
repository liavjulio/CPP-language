#pragma once
#include <iostream>
class Point
{
private:
	float x;
	float y;
public:
	Point();
	Point(float x1, float y1);
	~Point();
	friend ostream &operator<<(ostream& os, const Point& x);
	Point& operator+(const Point& p2);
	Point& operator=(const Point& p2);
};
