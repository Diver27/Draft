#include "rectangle.h"

rectangle::rectangle(point left_top, point right_bottom):polygon()
{
	point right_top, left_bottom;
	right_top.set_x(right_bottom.get_x());
	right_top.set_y(left_top.get_y());
	left_bottom.set_x(left_top.get_x());
	left_bottom.set_y(right_bottom.get_y());

	points.push_back(left_top);
	points.push_back(right_top);
	points.push_back(right_bottom);
	points.push_back(left_bottom);
}

float rectangle::getArea()
{
	return (points[1].get_x() - points[0].get_x())*(points[2].get_y() - points[1].get_y());
}