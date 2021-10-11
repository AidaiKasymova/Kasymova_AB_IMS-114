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
	bool dateIsValid()
	{
		bool result = true;
		// месяц должен лежать в диапазоне [1, 12]
		result &= (y >= 1 && y <= 12);
		// год - в диапазоне [1920, 2025]
		result &= (z >= 1920 && z <= 2025);
		// проверка диапазона для некоторых месяцев:
		if (y == 1 || y == 3 || y == 5 || y == 7
			|| y == 8 || y == 10 || y == 12)
			// день - в диапазоне [1, 31]
			result &= (x >= 1 && x <= 30);
		// для других:
		else if (y == 4 || y == 6 || y == 9 || y == 11)
			// день - в диапазоне [1, 30]
			result &= (x >= 1 && x <= 30);
		else // для февраля високосного года
			if (z % 4 == 0)
				// день - в диапазоне [1, 29]
				result &= (x >= 1 && x <= 29);
		// для февраля невисокосного
			else
				// день - в диапазоне [1, 28]
				result &= (x >= 1 && x <= 28);
		if (!result)
			cerr << "Дата задана неверно!" << endl;
		return result;
	}

	/// <summary>
	/// Проверяет, является ли год високосным
	/// </summary>
	bool isLeapYear(const int z)
	{
		return (((z % 4 == 0) && (z % 100 != 0)) ||
			(z % 400 == 0));
	}

	/// <summary>
	/// Число дней в каждом из месяцев
	/// </summary>
	const int monthDays[12]
		= { 31, 28, 31, 30, 31, 30,
		   31, 31, 30, 31, 30, 31 };
public:
	Date() : Triad() {};

	Date(const int d, const int m, const int y): Triad(d, m, y)
	{
		if (!dateIsValid())
		{
			throw "Ошибка! Дата задана неверно!";
			system("pause");
			exit(1);
		}
	}

	/// <summary>
	/// Переопределенный метод увеличения даты
	/// на заданное число дней
	/// </summary>
	void add() override
	{
		cout << "Введите число дней (до 365): ";
		int days;
		cin >> days;
		int newd = x + days;
		if (y == 12)
		{
			if (newd > 31)
			{
				y = 0;
				while (newd > 31)
				{
					newd = newd - 31;
					y++;
				}
				x = newd;
				z++;
			}
			else
				x = newd;
		}
		else if (y == 1 || y == 3 || y == 5 ||
			y == 7 || y == 8 || y == 10)
		{
			if (newd > 31)
			{
				while (newd > 31)
				{
					newd = newd - 31;
					y++;
				}
				x = newd;
			}
			else
				x = newd;
		}
		else if (y == 4 || y == 6 || y == 9 || y == 11)
		{
			if (newd > 30)
			{
				while (newd > 30)
				{
					newd = newd - 30;
					y++;
				}
				x = newd;
			}
			else
				x = newd;
		}
		else if (isLeapYear(z))
			if (newd > 29)
			{
				while (newd > 29)
				{
					newd = newd - 29;
					y++;
				}
				x = newd;
			}
			else
				x = newd;
		else
			if (newd > 28)
			{
				while (newd > 28)
				{
					newd = newd - 28;
					y++;
				}
				x = newd;
			}
			else
				x = newd;
	}

	/// <summary>
	/// Переопределенный метод уменьшения даты
	/// на заданное число дней
	/// </summary>
	void sub() override
	{
		cout << "Введите число дней (до 365): ";
		int days;
		cin >> days;
		int newd = x - days;
		if (y == 1)
		{
			if (newd < 1)
			{
				y = 13;
				while (newd < 1)
				{
					newd = newd + 31;
					y--;
				}
				x = newd;
				z--;
			}
			else
				x = newd;
		}
		else if (y == 2 || y == 4 || y == 6 ||
			y == 8 || y == 9 || y == 11)
		{
			if (newd < 1)
			{
				while (newd < 1)
				{
					newd = newd + 31;
					y--;
				}
				x = newd;
			}
			else
				x = newd;
		}
		else if (y == 5 || y == 7 || y == 10 || y == 12)
		{
			if (newd < 1)
			{
				while (newd < 1)
				{
					newd = newd + 30;
					y--;
				}
				x = newd;
			}
			else
				x = newd;
		}
		else if (isLeapYear(z))
			if (newd < 1)
			{
				while (newd < 1)
				{
					newd = newd + 29;
					y--;
				}
				x = newd;
			}
			else
				x = newd;
		else
			if (newd < 1)
			{
				while (newd < 1)
				{
					newd = newd + 28;
					y--;
				}
				x = newd;
			}
			else
				x = newd;
	}

	/// <summary>
	/// Переопределенный метод вывода
	/// </summary>
	/// <param name="out"></param>
	/// <returns></returns>
	ostream& output(ostream& out) override
	{
		out << (x < 10 ? "0" : "") << x << "." <<
			(y < 10 ? "0" : "") << y << "." << 
			(z < 10 ? "0" : "") << z << endl;
		return out;
	}

	/// <summary>
	/// Переопределенный метод ввода
	/// </summary>
	/// <param name="out"></param>
	/// <returns></returns>
	istream& input(istream& in) override
	{
		cout << "Введите день (от 1 до 28, 29, 30 или 31): "; cin >> x;
		cout << "Введите месяц (от 1 до 12): "; cin >> y;
		cout << "Введите год (от 1920 до 2025): "; cin >> z;
		if (!dateIsValid())
		{
			throw "Ошибка! Дата задана неверно!";
			system("pause");
			exit(1);
		}
		return in;
	}
};