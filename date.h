#pragma once
#include "triad.h"


using namespace std;

class date : public triad {
	int year, month, day;

public:
	date(void);
	date(int x, int y, int z);
	virtual ~date(void);

	void set_day(int z);
	int get_day();

	int get_newDay();

	friend ostream& operator << (ostream& out, date& d);
	friend istream& operator >> (istream& in, date& d);

	char* toString();

};
