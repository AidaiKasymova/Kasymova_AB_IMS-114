#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"
#include "Time.h"

int main()
{
	system("chcp 1251");
	system("cls");

	cout << "������ �����." << endl;
	Triad tr = Triad(3, 5, -4);
	tr.output(cout);

	cout << endl << "����� x = 1, y = 2, z = -3." << endl;
	tr.setX(1); tr.setY(2); tr.setZ(-3);
	cout << tr.getX() << ", " << tr.getY() << ", " << tr.getZ() << endl;

	cout << endl << "������� x, y, z." << endl;
	tr.input(cin);

	cout << endl << "�������� �� 1." << endl;
	tr.add(); tr.output(cout);

	cout << endl << "�������� �� 1." << endl;
	tr.sub(); tr.output(cout);

	cout << endl << "\n����." << endl;
	Date dt = Date(30, 9, 2021);
	dt.output(cout);

	cout << endl; dt.input(cin);
	dt.output(cout);

	cout << endl << "�������� ���� �� n ����." << endl;
	dt.add(); dt.output(cout);

	cout << endl << "�������� ���� �� n ����." << endl;
	dt.sub(); dt.output(cout);

	tr = dt;
	cout << endl << "������� �����������: ������ ����� := ����. ������ �����: " << endl;
	tr.output(cout);

	system("pause");

	return 0;
}