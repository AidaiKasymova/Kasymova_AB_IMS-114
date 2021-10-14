#include "Triad.h"

/// <summary>
/// ����������� �� ���������
/// </summary>
Triad::Triad() : x(0), y(0), z(0) {};

/// <summary>
/// ����������� � �����������
/// </summary>
/// <param name="xx">������ �����</param>
/// <param name="yy">������ �����</param>
/// <param name="zz">������ �����</param>
Triad::Triad(int xx, int yy, int zz) : x(xx), y(yy), z(zz) {};

/// <summary>
/// ����� ���������� �� 1
/// </summary>
void Triad::add()
{
	x++;
	y++;
	z++;
};

/// <summary>
/// ����� ���������� �� 1
/// </summary>
void Triad::sub()
{
	x--;
	y--;
	z--;
}

// ������ �������������� � ��������� �����:

/// <summary>
/// �������� �������� ������� �����
/// </summary>
/// <param name="xx"></param>
void Triad::setX(const int xx) { x = xx; };

/// <summary>
/// �������� �������� ������� �����
/// </summary>
/// <returns></returns>
double Triad::getX() { return x; }

/// <summary>
/// �������� �������� ������� �����
/// </summary>
/// <param name="yy"></param>
void Triad::setY(const int yy) { y = yy; };

/// <summary>
/// �������� �������� ������� �����
/// </summary>
/// <returns></returns>
double Triad::getY() { return y; }

/// <summary>
/// �������� �������� �������� �����
/// </summary>
/// <param name="zz"></param>
void Triad::setZ(const int zz) { z = zz; };

/// <summary>
/// �������� �������� �������� �����
/// </summary>
/// <returns></returns>
double Triad::getZ() { return z; }

/// <summary>
/// ����� ������
/// </summary>
/// <param name="out"></param>
/// <returns></returns>
ostream& Triad::output(ostream& out)
{
	out << x << ", " << y << ", " << z << endl;
	return out;
}

/// <summary>
/// ����� �����
/// </summary>
/// <param name="in"></param>
/// <returns></returns>
istream& Triad::input(istream& in)
{
	cout << "������� x: ";
	in >> x;
	cout << "������� y: ";
	in >> y;
	cout << "������� z: ";
	in >> z;
	return in;
}