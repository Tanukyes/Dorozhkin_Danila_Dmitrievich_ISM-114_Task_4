
#ifndef TASK4_FUNC_H
#define TASK4_FUNC_H

#endif //TASK4_FUNC_H
#pragma once
#include <cmath>
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
using namespace std;


class Func
{
protected:
    double x;
public:
    Func();

    Func(double x);

    ~Func();

    virtual double getY() = 0;
};
