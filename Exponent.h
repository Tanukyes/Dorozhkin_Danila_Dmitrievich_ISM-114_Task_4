
#ifndef TASK4_EXPONENT_H
#define TASK4_EXPONENT_H

#endif //TASK4_EXPONENT_H
#pragma once
#include "Func.h"


class Exponent : public Func
{
private:
    int a;
public:
    Exponent();

    Exponent(double a, double x);

    ~Exponent();

    double getY();
};
