#include "Account.h"

int main()
{
	system("chcp 1251");
	system("cls");

	Account acc = Account("�������", 6.1, 150000);
	acc.toString();

	cout << endl << "������ ��������� ����� �� \"�������\"." << endl;
	acc.changeOwner("�������");

	cout << endl << "�������� ��������." << endl;
	acc.chargeInterest();

	cout << endl << "������ 15000 ������ �� �����." << endl;
	acc.withDraw(15000);

	cout << endl << "������� 12354 �� ����." << endl;
	acc.makeDeposit(12354);

	cout << endl;
	acc.toString();
	cout << endl;

	system("pause");

	return 0;
}