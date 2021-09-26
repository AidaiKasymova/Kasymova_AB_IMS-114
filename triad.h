#pragma once
#include <iostream>

using namespace std;

class triad
{
protected:
	int a, b, c;

public:

	triad(void);
	triad(int first, int second, int third);
	virtual ~triad(void);

	void set_first(int first);
	int get_first();

	void set_second(int second);
	int get_second();

	void set_third(int third);
	int get_third();

	void add_first(int n);
	void add_second(int n);
	void add_third(int n);

	friend ostream& operator<<(ostream& out, triad& p);
	friend istream& operator>>(istream& in, triad& p);

	char* toString();
};

