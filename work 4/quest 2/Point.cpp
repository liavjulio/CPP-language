using namespace std;
#include "Point.h"
Point::Point()
{
	x = 0;
	y = 0;
}
Point::Point(float x1, float y1)
{
	x = x1;
	y = y1;
}

Point::~Point()
{
}
Point& Point::operator+(const Point& p2)
{
	Point temp;
	temp.x += this->x+p2.x;
	temp.y = this->y+p2.y;
	return temp;
}
Point& Point::operator=(const Point& p2)
{
	this->x = p2.x;
	this->y = p2.y;
	return *this;
}
ostream& operator<<(ostream& os, const Point& x)
{
		os << "(" << x.x << "," << x.y << ")" << endl;
		return os;
		
}
