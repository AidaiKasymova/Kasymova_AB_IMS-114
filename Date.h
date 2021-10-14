#pragma once
#include "Triad.h"

/// <summary>
/// Производный класс даты
/// </summary>
class Date : public Triad
{
private:
	/// <summary>
	/// Проверяет дату на корректность
	/// </summary>
	/// <returns></returns>
	bool dateIsValid();

	/// <summary>
	/// Проверяет, является ли год високосным
	/// </summary>
	bool isLeapYear(const int z);

	/// <summary>
	/// Число дней в каждом из месяцев
	/// </summary>
	const int monthDays[12]
		= { 31, 28, 31, 30, 31, 30,
		   31, 31, 30, 31, 30, 31 };
public:
	Date();

	Date(const int d, const int m, const int y);

	/// <summary>
	/// Метод увеличения даты
	/// на заданное число дней
	/// </summary>
	void add(int days);

	/// <summary>
	/// Метод уменьшения даты
	/// на заданное число дней
	/// </summary>
	void sub(int days);

	/// <summary>
	/// Переопределенный метод вывода
	/// </summary>
	/// <param name="out"></param>
	/// <returns></returns>
	ostream& output(ostream& out) override;

	/// <summary>
	/// Переопределенный метод ввода
	/// </summary>
	/// <param name="out"></param>
	/// <returns></returns>
	istream& input(istream& in) override;
};