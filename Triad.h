#pragma once
#include <sstream>
#include <iostream>
using namespace std;

/// <summary>
/// ����� ������ �����
/// </summary>
class Triad 
{
protected:
	/// <summary>
	/// ������ �����
	/// </summary>
	int x;
	/// <summary>
	/// ������ �����
	/// </summary>
	int y;
	/// <summary>
	/// ������ �����
	/// </summary>
	int z;
public:
	/// <summary>
	/// ����������� �� ���������
	/// </summary>
	Triad() : x(0), y(0), z(0) {};

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="xx">������ �����</param>
	/// <param name="yy">������ �����</param>
	/// <param name="zz">������ �����</param>
	Triad(int xx, int yy, int zz): x(xx), y(yy), z(zz) {};

	/// <summary>
	/// ����� ���������� �� 1
	/// </summary>
	virtual void add()
	{
		x++;
		y++;
		z++;
	};

	/// <summary>
	/// ����� ���������� �� 1
	/// </summary>
	virtual void sub()
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
	void setX(const int xx) { x = xx; };

	/// <summary>
	/// �������� �������� ������� �����
	/// </summary>
	/// <returns></returns>
	double getX() { return x; }

	/// <summary>
	/// �������� �������� ������� �����
	/// </summary>
	/// <param name="yy"></param>
	void setY(const int yy) { y = yy; };

	/// <summary>
	/// �������� �������� ������� �����
	/// </summary>
	/// <returns></returns>
	double getY() { return y; }

	/// <summary>
	/// �������� �������� �������� �����
	/// </summary>
	/// <param name="zz"></param>
	void setZ(const int zz) { z = zz; };

	/// <summary>
	/// �������� �������� �������� �����
	/// </summary>
	/// <returns></returns>
	double getZ() { return z; }
	
	/// <summary>
	/// ����� ������
	/// </summary>
	/// <param name="out"></param>
	/// <returns></returns>
	virtual ostream& output(ostream& out)
	{
		out << x << ", " << y << ", " << z << endl;
		return out;
	}

	/// <summary>
	/// ����� �����
	/// </summary>
	/// <param name="in"></param>
	/// <returns></returns>
	virtual istream& input(istream& in)
	{
		cout << "������� x: ";
		in >> x;
		cout << "������� y: ";
		in >> y;
		cout << "������� z: ";
		in >> z;
		return in;
	}
};