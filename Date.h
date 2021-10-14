#pragma once
#include "Triad.h"

/// <summary>
/// ����������� ����� ����
/// </summary>
class Date : public Triad
{
private:
	/// <summary>
	/// ��������� ���� �� ������������
	/// </summary>
	/// <returns></returns>
	bool dateIsValid();

	/// <summary>
	/// ���������, �������� �� ��� ����������
	/// </summary>
	bool isLeapYear(const int z);

	/// <summary>
	/// ����� ���� � ������ �� �������
	/// </summary>
	const int monthDays[12]
		= { 31, 28, 31, 30, 31, 30,
		   31, 31, 30, 31, 30, 31 };
public:
	Date();

	Date(const int d, const int m, const int y);

	/// <summary>
	/// ����� ���������� ����
	/// �� �������� ����� ����
	/// </summary>
	void add(int days);

	/// <summary>
	/// ����� ���������� ����
	/// �� �������� ����� ����
	/// </summary>
	void sub(int days);

	/// <summary>
	/// ���������������� ����� ������
	/// </summary>
	/// <param name="out"></param>
	/// <returns></returns>
	ostream& output(ostream& out) override;

	/// <summary>
	/// ���������������� ����� �����
	/// </summary>
	/// <param name="out"></param>
	/// <returns></returns>
	istream& input(istream& in) override;
};