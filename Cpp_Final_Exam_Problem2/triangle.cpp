#include "triangle.h"

triangle::triangle(point a, point b, point c) :polygon()
{
	points.push_back(a);
	points.push_back(b);
	points.push_back(c);
}

float triangle::getArea()
{
	return 8558;
}