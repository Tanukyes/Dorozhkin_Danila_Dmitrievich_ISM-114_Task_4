

#ifndef TASK4_POWER_H
#define TASK4_POWER_H

#endif //TASK4_POWER_H
#pragma once
#include "Func.h"


class Power : public Func
{
private:
    double a;
public:
    Power();

    Power(double x, double a);

    ~Power();

    double getY();
};
