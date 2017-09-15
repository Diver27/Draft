#include "polygon.h"

polygon::polygon(std::vector<point> _points) :points(_points) {};

polygon::polygon() {};

int polygon::getSides()
{
	return points.size();
}