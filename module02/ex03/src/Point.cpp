#include "Point.hpp"

Point::Point()
	:_x(0), _y(0){}

Point::Point(float const x, float const y)
	:_x(x), _y(y){}

Point::Point(const Point &o)
	:_x(o._x), _y(o._y){}

Point::~Point(){}

Point & Point::operator=(Point &o) /*const??*/ { return (o); }

bool	Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
	(void)a; (void)b; (void)c; (void)point;
	return (true);
}
