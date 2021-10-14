#include "Triad.h"

/// <summary>
/// Конструктор по умолчанию
/// </summary>
Triad::Triad() : x(0), y(0), z(0) {};

/// <summary>
/// Конструктор с параметрами
/// </summary>
/// <param name="xx">первое число</param>
/// <param name="yy">второе число</param>
/// <param name="zz">третье число</param>
Triad::Triad(int xx, int yy, int zz) : x(xx), y(yy), z(zz) {};

/// <summary>
/// Метод увеличения на 1
/// </summary>
void Triad::add()
{
	x++;
	y++;
	z++;
};

/// <summary>
/// Метод уменьшения на 1
/// </summary>
void Triad::sub()
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
void Triad::setX(const int xx) { x = xx; };

/// <summary>
/// Получить значение первого числа
/// </summary>
/// <returns></returns>
double Triad::getX() { return x; }

/// <summary>
/// Изменить значение второго числа
/// </summary>
/// <param name="yy"></param>
void Triad::setY(const int yy) { y = yy; };

/// <summary>
/// Получить значение второго числа
/// </summary>
/// <returns></returns>
double Triad::getY() { return y; }

/// <summary>
/// Изменить значение третьего числа
/// </summary>
/// <param name="zz"></param>
void Triad::setZ(const int zz) { z = zz; };

/// <summary>
/// Получить значение третьего числа
/// </summary>
/// <returns></returns>
double Triad::getZ() { return z; }

/// <summary>
/// Метод вывода
/// </summary>
/// <param name="out"></param>
/// <returns></returns>
ostream& Triad::output(ostream& out)
{
	out << x << ", " << y << ", " << z << endl;
	return out;
}

/// <summary>
/// Метод ввода
/// </summary>
/// <param name="in"></param>
/// <returns></returns>
istream& Triad::input(istream& in)
{
	cout << "Введите x: ";
	in >> x;
	cout << "Введите y: ";
	in >> y;
	cout << "Введите z: ";
	in >> z;
	return in;
}