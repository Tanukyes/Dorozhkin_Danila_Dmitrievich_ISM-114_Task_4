#pragma once
#include <cmath>
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
	Func();

	// ����������� ������ � �����������
	Func(double xx);

	// ������ ����������� ����� ���������� �������� �������
	virtual double getY() = 0;
};