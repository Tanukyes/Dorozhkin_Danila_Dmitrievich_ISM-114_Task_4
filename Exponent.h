#pragma once
#include "Func.h"

/// <summary>
/// ��������� �������
/// </summary>
class Exponent : public Func
{
private:
	int a; // ��������� (x - ����������)
public:
	// ����������� �� ���������
	Exponent();

	// ����������� � �����������
	Exponent(double aa, double xx);

	// ���������������� ����� ���������� �������� �������
	double getY();
};