#include "Power.h"

Power::Power()
{
    x = 0;
    a = 0;
}

Power::Power(const double x, const double a)
{
    this->x = x;
    this->a = a;
}

Power::~Power()
{
    this->x = NULL;
    this->a = NULL;
}

double Power::getY()
{
    return pow(x, a);
}
