#ifndef _POINT_H_
#define _POINT_H_

class point {
	float x, y;
public:
	point();
	point(float, float);
	void set_x(float);
	void set_y(float);
	float get_x();
	float get_y();
};

#endif