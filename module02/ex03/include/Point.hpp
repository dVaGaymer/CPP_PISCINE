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
		Point & operator=(Point /*const??*/ &o);

		static bool	bsp( Point const a, Point const b, Point const c, Point const point);
};
#endif
