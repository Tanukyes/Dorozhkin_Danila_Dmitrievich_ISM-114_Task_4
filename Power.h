#pragma once
#include "Func.h"

/// <summary>
/// ��������� �������
/// </summary>
class Power : public Func
{
private:
	double a; // ���������� �������
public:
	// ����������� �� ���������
	Power();

	// ����������� � �����������
	Power(double xx, double aa);

	// ���������������� ����� ���������� �������� �������
	double getY();
};
