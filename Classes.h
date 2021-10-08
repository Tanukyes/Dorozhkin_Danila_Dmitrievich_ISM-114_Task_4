#pragma once
#include <math.h>
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
using namespace std;

/// <summary>
/// ������� ����� �������
/// </summary>
class Func
{
protected:
	double x; // ��������
public:
	// ����������� ������ �� ���������
	Func()
	{
		x = 0;
	}

	// ����������� ������ � �����������
	Func(double xx)
	{
		x = xx;
	}

	// ������ ����������� ����� ���������� �������� �������
	virtual double getY() = 0;
};

/// <summary>
/// ��������� �������
/// </summary>
class Power: public Func
{
private:
	double a; // ���������� �������
public:
	// ����������� �� ���������
	Power()
	{
		x = 0;
		a = 0;
	}

	// ����������� � �����������
	Power(double xx, double aa)
	{
		x = xx;
		a = aa;
	}

	// ���������������� ����� ���������� �������� �������
	double getY()
	{
		return pow(x, a);
	}
};

/// <summary>
/// ��������� �������
/// </summary>
class Exponent : public Func
{
private:
	int a; // ��������� (x - ����������)
public:
	// ����������� �� ���������
	Exponent()
	{
		x = 0;
		a = 0;
	}

	// ����������� � �����������
	Exponent(double aa, double xx)
	{
		x = xx;
		a = aa;
	}

	// ���������������� ����� ���������� �������� �������
	double getY()
	{
		return pow(a, x);
	}
};