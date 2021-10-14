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
	Triad();

	/// <summary>
	/// ����������� � �����������
	/// </summary>
	/// <param name="xx">������ �����</param>
	/// <param name="yy">������ �����</param>
	/// <param name="zz">������ �����</param>
	Triad(int xx, int yy, int zz);

	/// <summary>
	/// ����� ���������� �� 1
	/// </summary>
	virtual void add();

	/// <summary>
	/// ����� ���������� �� 1
	/// </summary>
	virtual void sub();

	// ������ �������������� � ��������� �����:
	
	/// <summary>
	/// �������� �������� ������� �����
	/// </summary>
	/// <param name="xx"></param>
	void setX(const int xx);

	/// <summary>
	/// �������� �������� ������� �����
	/// </summary>
	/// <returns></returns>
	double getX();

	/// <summary>
	/// �������� �������� ������� �����
	/// </summary>
	/// <param name="yy"></param>
	void setY(const int yy);

	/// <summary>
	/// �������� �������� ������� �����
	/// </summary>
	/// <returns></returns>
	double getY();

	/// <summary>
	/// �������� �������� �������� �����
	/// </summary>
	/// <param name="zz"></param>
	void setZ(const int zz);

	/// <summary>
	/// �������� �������� �������� �����
	/// </summary>
	/// <returns></returns>
	double getZ();
	
	/// <summary>
	/// ����� ������
	/// </summary>
	/// <param name="out"></param>
	/// <returns></returns>
	virtual ostream& output(ostream& out);

	/// <summary>
	/// ����� �����
	/// </summary>
	/// <param name="in"></param>
	/// <returns></returns>
	virtual istream& input(istream& in);
};