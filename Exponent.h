#pragma once
#include "Func.h"

/// <summary>
/// степенная функция
/// </summary>
class Exponent : public Func
{
private:
	int a; // основание (x - показатель)
public:
	// конструктор по умолчанию
	Exponent();

	// конструктор с параметрами
	Exponent(double aa, double xx);

	// переопределенный метод вычисления значения функции
	double getY();
};