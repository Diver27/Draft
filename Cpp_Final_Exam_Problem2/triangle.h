#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_
#include "polygon.h"

class triangle :public polygon {
public:
	triangle(point, point, point);
	float getArea();
};

#endif