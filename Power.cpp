#include "Power.h"

Power::Power()
{
	x = 0;
	a = 0;
}

Power::Power(double xx, double aa)
{
	x = xx;
	a = aa;
}

double Power::getY()
{
	return pow(x, a);
}