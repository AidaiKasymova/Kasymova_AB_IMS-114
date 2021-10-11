#pragma once
#include <sstream>
#include <iostream>
using namespace std;

/// <summary>
/// Класс тройки чисел
/// </summary>
class Triad 
{
protected:
	/// <summary>
	/// Первое число
	/// </summary>
	int x;
	/// <summary>
	/// Второе число
	/// </summary>
	int y;
	/// <summary>
	/// Третье число
	/// </summary>
	int z;
public:
	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Triad() : x(0), y(0), z(0) {};

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="xx">первое число</param>
	/// <param name="yy">второе число</param>
	/// <param name="zz">третье число</param>
	Triad(int xx, int yy, int zz): x(xx), y(yy), z(zz) {};

	/// <summary>
	/// Метод увеличения на 1
	/// </summary>
	virtual void add()
	{
		x++;
		y++;
		z++;
	};

	/// <summary>
	/// Метод уменьшения на 1
	/// </summary>
	virtual void sub()
	{
		x--;
		y--;
		z--;
	}

	// Методы переназначения и изменения полей:
	
	/// <summary>
	/// Изменить значение первого числа
	/// </summary>
	/// <param name="xx"></param>
	void setX(const int xx) { x = xx; };

	/// <summary>
	/// Получить значение первого числа
	/// </summary>
	/// <returns></returns>
	double getX() { return x; }

	/// <summary>
	/// Изменить значение второго числа
	/// </summary>
	/// <param name="yy"></param>
	void setY(const int yy) { y = yy; };

	/// <summary>
	/// Получить значение второго числа
	/// </summary>
	/// <returns></returns>
	double getY() { return y; }

	/// <summary>
	/// Изменить значение третьего числа
	/// </summary>
	/// <param name="zz"></param>
	void setZ(const int zz) { z = zz; };

	/// <summary>
	/// Получить значение третьего числа
	/// </summary>
	/// <returns></returns>
	double getZ() { return z; }
	
	/// <summary>
	/// Метод вывода
	/// </summary>
	/// <param name="out"></param>
	/// <returns></returns>
	virtual ostream& output(ostream& out)
	{
		out << x << ", " << y << ", " << z << endl;
		return out;
	}

	/// <summary>
	/// Метод ввода
	/// </summary>
	/// <param name="in"></param>
	/// <returns></returns>
	virtual istream& input(istream& in)
	{
		cout << "Введите x: ";
		in >> x;
		cout << "Введите y: ";
		in >> y;
		cout << "Введите z: ";
		in >> z;
		return in;
	}
};
