#include "triad.h"
#include <cstring>
#include <stdlib.h>

using namespace std;

triad::triad(void) : a(0), b(0), c(0) {}

triad::triad(int first, int second, int third) : a(first), b(second), c(third) {}

triad::~triad(void){}

void triad::set_first(int first) {
	a = first;
}

int triad::get_first() {
	return a;
}

void triad::set_second(int second) {
	b=second;
}

int triad::get_second() {
	return b;
}

void triad::set_third(int third) {
	c=third;
}

int triad::get_third() {
	return c;
}

void triad::add_first(int n) {
	a = a + n;
}

void triad::add_second(int n) {
	b = b + n;
}

void triad::add_third(int n) {
	c = c + n;
}

ostream& operator<<(ostream& out, triad& p) {
	out << "first = " << p.a << endl;
	out << "second = " << p.b << endl;
	out << "third = " << p.c << endl;
	return out;
}

istream& operator>>(istream& in, triad& p) {
	in >> p.a;
	in >> p.b;
	in >> p.c;
	return in;
}

char* triad::toString()
{
	char buffer[65];
	strcat(itoa(a, buffer, 10), itoa(b, buffer, 10));
	return strcat(buffer, itoa(c, buffer, 10));

}