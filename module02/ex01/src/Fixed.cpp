#include "Fixed.hpp"

Fixed::Fixed():
	_value(0)
{
	std::cout << "Default constructor called\n"; 
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called\n"; 
	this->_value = value << Fixed::_FBITS;
}

Fixed::Fixed(float const value)
{
	float	aux;
	std::cout << "Int constructor called\n"; 

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
	std::cout << "Copy constructor called\n"; 
	this->_value = o.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n"; 
}

Fixed & Fixed::operator=(const Fixed &o)
{
	std::cout << "Assignation operator called\n"; 
	this->_value = o.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n"; 
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	std::cout << "setRawBits member function called\n"; 
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

std::ostream & operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}
