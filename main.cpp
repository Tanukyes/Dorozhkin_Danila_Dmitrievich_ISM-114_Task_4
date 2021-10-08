#include "Classes.h"

int main()
{
	system("chcp 1251");
	system("cls");

	Power p = Power(16, 0.5);
	cout << "16^(1/2) = " << p.getY() << endl;

	Exponent exp = Exponent(4, 3);
	cout << "3^4 = " << exp.getY() << endl;

	system("pause");

	return 0;
}