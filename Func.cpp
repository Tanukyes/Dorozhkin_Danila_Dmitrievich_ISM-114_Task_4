#include "Func.h"

Func::Func()
{
    x = 0;
}

Func::Func(const double x)
{
    this->x = x;
}

Func::~Func()
{
    this->x = NULL;
}
