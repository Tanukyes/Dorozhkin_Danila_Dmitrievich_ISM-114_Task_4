#pragma once
#include "Func.h"

/// <summary>
/// степенная функция
/// </summary>
class Power : public Func
{
private:
	double a; // показатель степени
public:
	// конструктор по умолчанию
	Power();

	// конструктор с параметрами
	Power(double xx, double aa);

	// переопределенный метод вычисления значения функции
	double getY();
};
