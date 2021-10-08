#pragma once
#include <math.h>
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
	Func()
	{
		x = 0;
	}

	// конструктор класса с параметрами
	Func(double xx)
	{
		x = xx;
	}

	// чистый виртуальный метод вычисления значения функции
	virtual double getY() = 0;
};

/// <summary>
/// степенная функция
/// </summary>
class Power: public Func
{
private:
	double a; // показатель степени
public:
	// конструктор по умолчанию
	Power()
	{
		x = 0;
		a = 0;
	}

	// конструктор с параметрами
	Power(double xx, double aa)
	{
		x = xx;
		a = aa;
	}

	// переопределенный метод вычисления значения функции
	double getY()
	{
		return pow(x, a);
	}
};

/// <summary>
/// степенная функция
/// </summary>
class Exponent : public Func
{
private:
	int a; // основание (x - показатель)
public:
	// конструктор по умолчанию
	Exponent()
	{
		x = 0;
		a = 0;
	}

	// конструктор с параметрами
	Exponent(double aa, double xx)
	{
		x = xx;
		a = aa;
	}

	// переопределенный метод вычисления значения функции
	double getY()
	{
		return pow(a, x);
	}
};