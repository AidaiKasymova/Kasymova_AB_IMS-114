#include "Triad.h"

/// <summary>
/// Конструктор по умолчанию
/// </summary>
Triad::Triad() : x(0), y(0), z(0) {};

/// <summary>
/// Конструктор с параметрами
/// </summary>
/// <param name="x">первое число</param>
/// <param name="y">второе число</param>
/// <param name="z">третье число</param>
Triad::Triad(int x, int y, int z) : x(x), y(y), z(z) {};

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
/// <param name="x"></param>
void Triad::setX(const int x) { this->x = x; };

/// <summary>
/// Получить значение первого числа
/// </summary>
/// <returns></returns>
double Triad::getX() { return x; }

/// <summary>
/// Изменить значение второго числа
/// </summary>
/// <param name="y"></param>
void Triad::setY(const int y) { this->y = y; };

/// <summary>
/// Получить значение второго числа
/// </summary>
/// <returns></returns>
double Triad::getY() { return y; }

/// <summary>
/// Изменить значение третьего числа
/// </summary>
/// <param name="z"></param>
void Triad::setZ(const int z) { this->z = z; };

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
