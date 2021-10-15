#pragma once
#include <cmath>
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
using namespace std;

/// <summary>
/// базовый класс функции
/// </summary>
class Func
{
protected:
	double x; // аргумент
public:
	// конструктор класса по умолчанию
	Func();

	// конструктор класса с параметрами
	Func(double xx);

	// чистый виртуальный метод вычисления значения функции
	virtual double getY() = 0;
};