#pragma once
#ifndef __POINT_HPP__
#define __POINT_HPP__

# include "Fixed.hpp"
# include <cmath>

class Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
	public:
		Point();
		Point(float const x, float const y);
		Point(const Point &o);
		~Point();

		Fixed const getY() const;
		Fixed const getX() const;

		Point & operator=(Point /*const??*/ &o);

		/*Triangle area = 1/2*|x1(y2-y3)+x2(y3-y1)+x3(y1-y2)|*/
		static Fixed	area(Point const a, Point const b, Point const c);
		static bool	is_inside(Point const a, Point const b, Point const c, Point const point);
};
#endif
