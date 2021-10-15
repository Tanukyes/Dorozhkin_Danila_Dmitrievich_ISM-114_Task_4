#include "Exponent.h"

Exponent::Exponent()
{
	x = 0;
	a = 0;
}

Exponent::Exponent(double aa, double xx)
{
	x = xx;
	a = aa;
}

double Exponent::getY()
{
	return pow(a, x);
}