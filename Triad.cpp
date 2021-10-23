#include "Triad.h"

/// <summary>
/// ����������� �� ���������
/// </summary>
Triad::Triad() : x(0), y(0), z(0) {};

/// <summary>
/// ����������� � �����������
/// </summary>
/// <param name="x">������ �����</param>
/// <param name="y">������ �����</param>
/// <param name="z">������ �����</param>
Triad::Triad(int x, int y, int z) : x(x), y(y), z(z) {};

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
/// <param name="x"></param>
void Triad::setX(const int x) { this->x = x; };

/// <summary>
/// �������� �������� ������� �����
/// </summary>
/// <returns></returns>
double Triad::getX() { return x; }

/// <summary>
/// �������� �������� ������� �����
/// </summary>
/// <param name="y"></param>
void Triad::setY(const int y) { this->y = y; };

/// <summary>
/// �������� �������� ������� �����
/// </summary>
/// <returns></returns>
double Triad::getY() { return y; }

/// <summary>
/// �������� �������� �������� �����
/// </summary>
/// <param name="z"></param>
void Triad::setZ(const int z) { this->z = z; };

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