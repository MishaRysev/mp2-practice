#include "arexp.h"



int main() {
	system("chcp 1251");
	cout << "������� �������������� ���������: ";
	ArithmeticExpression ae;
	cout << ae.InfixForm() << "  --->   " << ae.PostfixForm() << endl;
	cout << "���������� ���������: " << ae.Calculate();
	return 0;
}