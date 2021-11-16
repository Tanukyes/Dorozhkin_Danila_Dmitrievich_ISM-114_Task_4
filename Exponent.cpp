#include "Exponent.h"

Exponent::Exponent()
{
    x = 0;
    a = 0;
}

Exponent::Exponent(const double a, const double x)
{
    this->x = x;
    this->a = a;
}
Exponent::~Exponent()
{
    this->x = NULL;
    this->a = NULL;
}

double Exponent::getY()
{
    return pow(a, x);
}
