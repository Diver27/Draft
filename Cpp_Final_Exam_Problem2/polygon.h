#ifndef _POLYGON_H_
#define _POLYGON_H_
#include "vector"
#include "point.h"

class polygon {
protected:
	std::vector<point> points;
public:
	polygon(std::vector<point>);
	polygon();
	int getSides();
	virtual float getArea() = 0;
};

#endif