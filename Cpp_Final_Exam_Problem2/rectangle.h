#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
#include "polygon.h"

class rectangle :public polygon {
public:
	rectangle(point, point);
	float getArea();
};

#endif
