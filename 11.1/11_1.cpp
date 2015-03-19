#include <iostream>
#include <cmath>
#include "11_1.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;
using std::endl;

namespace VECTOR
{
	const double Rad_to_deg = 45 / atan(1.0);

	void Vector::set_mag()
	{
			mag = sqrt(x*x + y*y);
	}

	void Vector::set_ang()
	{
		if (x == 0 && y == 0)
		{
			ang = 0.0;
		}
		else
		{
			ang = atan2(y, x);
		}
	}

	void Vector::set_x()
	{
		x = mag*cos(ang);
	}

	void Vector::set_y()
	{
		y = mag*sin(ang);
	}


	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form = RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form = POL)
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrent 3rd argument to Vector()" << endl;
			cout << "set to 0!" << endl;
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form = RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form = POL)
		{
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrent 3rd argument to Vector()" << endl;
			cout << "set to 0!" << endl;
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()
	{

	}

	void Vector::polar_mode()
	{
		mode = POL;
	}

	void Vector::rect_mode()
	{
		mode = RECT;
	}

	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector & b)const
	{
		return Vector(x - b.x, y - b.y);
	}

	Vector Vector::operator-()const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n)const
	{
		return Vector(n*x, x*y);
	}

	Vector operator*(double n, const Vector & b)
	{
		return b*n;
	}

	std::ostream &operator<<(std::ostream & os, const Vector & a)
	{
		if (a.mode == Vector::RECT)
		{
			os << "(x,y)=(" << a.x << "," << a.y << ")";
		}
		else if (a.mode == Vector::POL)
		{
			os << "(m,a)=(" << a.mag << "," << a.ang*Rad_to_deg << ")";
		}

		return os;
	}
}