#include "point.h"

point::point() :x(0), y(0) {};

point::point(float _x, float _y) :x(_x), y(_y) {};

void point::set_x(float _x)
{
	x = _x;
}

void point::set_y(float _y)
{
	y = _y;
}

float point::get_x()
{
	return x;
}

float point::get_y()
{
	return y;
}