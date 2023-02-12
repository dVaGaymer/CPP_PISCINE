#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	Point const	a(-1.0f, 0.0f);
	Point const	b(1.0f, 0.0f);
	Point const	c(2.0f, 2.0f);

	Point const	p(1.1f, 0.0f);

	if (Point::is_inside(a, b, c, p))
		std::cout << "IS INSIDE" << std::endl;
	else
		std::cout << "IS NOT" << std::endl;
	return 0;
}
