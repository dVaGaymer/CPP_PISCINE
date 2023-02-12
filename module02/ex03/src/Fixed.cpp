#include "Fixed.hpp"

Fixed::Fixed():
	_value(0)
{
}

Fixed::Fixed(int const value)
{
	this->_value = value << Fixed::_FBITS;
}

Fixed::Fixed(float const value)
{
	float	aux;

	this->_value = (int)value << Fixed::_FBITS;
	aux = value - (int)value;
	this->_value >>= (Fixed::_FBITS - 1);
	for (int i = 0; i < Fixed::_FBITS; i++)
	{
		aux *= 2;
		this->_value |= (int)aux;
		if (i < Fixed::_FBITS - 1)
			this->_value <<= 1;
		aux -= (int)aux;
	}
}

Fixed::Fixed(const Fixed &o)
{
	this->_value = o.getRawBits();
}

Fixed::~Fixed()
{
}

int		Fixed::getRawBits() const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat() const
{
	float	float_num;
	int		aux = 2;

	float_num = 0;
	for (int i = Fixed::_FBITS; i > 0; i--)
	{
		if ((this->_value & (1 << (i - 1))))
			float_num +=  1 / (float)aux;
		aux *= 2;
	}
	return ((float)this->toInt() + float_num);
}

int		Fixed::toInt() const
{
	return (this->_value >> Fixed::_FBITS);
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}
