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
	Triad();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="xx">первое число</param>
	/// <param name="yy">второе число</param>
	/// <param name="zz">третье число</param>
	Triad(int xx, int yy, int zz);

	/// <summary>
	/// Метод увеличения на 1
	/// </summary>
	virtual void add();

	/// <summary>
	/// Метод уменьшения на 1
	/// </summary>
	virtual void sub();

	// Методы переназначения и изменения полей:
	
	/// <summary>
	/// Изменить значение первого числа
	/// </summary>
	/// <param name="xx"></param>
	void setX(const int xx);

	/// <summary>
	/// Получить значение первого числа
	/// </summary>
	/// <returns></returns>
	double getX();

	/// <summary>
	/// Изменить значение второго числа
	/// </summary>
	/// <param name="yy"></param>
	void setY(const int yy);

	/// <summary>
	/// Получить значение второго числа
	/// </summary>
	/// <returns></returns>
	double getY();

	/// <summary>
	/// Изменить значение третьего числа
	/// </summary>
	/// <param name="zz"></param>
	void setZ(const int zz);

	/// <summary>
	/// Получить значение третьего числа
	/// </summary>
	/// <returns></returns>
	double getZ();
	
	/// <summary>
	/// Метод вывода
	/// </summary>
	/// <param name="out"></param>
	/// <returns></returns>
	virtual ostream& output(ostream& out);

	/// <summary>
	/// Метод ввода
	/// </summary>
	/// <param name="in"></param>
	/// <returns></returns>
	virtual istream& input(istream& in);
};