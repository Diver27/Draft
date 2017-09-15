#include "rectangle.h"
#include "triangle.h"
#include "iostream"

int main(void)
{
	point m(1, 3);
	point n(2, 4);
	point o(7, 6);
	rectangle A(m, n);
	triangle B(m, n, o);
	std::cout <<"rectangle    " << "Sides:" << A.getSides() << '\n'
		<< "Area:" << A.getArea() << '\n';
	std::cout << "triangle    " << "Sides:" << B.getSides() << '\n'
		<< "Area:" << B.getArea() << '\n';
	std::cin.get();
	return 0;
}