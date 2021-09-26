#include "date.h"

using namespace std;

date::date(void) : triad(), year(0), month(0), day(0) {}

date::date(int x, int y, int z) : triad (x,y), day (z) {}

date::~date(void) {}

void date::set_day(int z) {
	day = z;
}

int date::get_day() {
	return day;
}

double date::get_newDay(int n) {
	return day +n;
}

ostream& operator << (ostream& out, date& d) {
	out << d.get_third() << "/" << d.get_second() << "/" << d.get_first() << endl;
	return out;
};

istream& operator >> (istream& in, date& d) {
	int n;
	in >> n;
	d.set_day(n);
	return in;
}

char* date::toString() {
	char buffer[65];
    strcat(itoa(get_third(), buffer, 10), "/");
	strcat(buffer, itoa(get_second(), buffer, 10));
	strcat(buffer, "/");
	return strcat(buffer, itoa(get_first(), buffer, 10));

}

