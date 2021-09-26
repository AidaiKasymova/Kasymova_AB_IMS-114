#include "triad.h"
#include "date.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {
	triad p;
	date day;
	
	day.set_first(5);
	day.set_second(10);
	day.set_third(15);

	p = day;

	cout << p << endl;
	cout << day << endl;

	p.add_first(6);
	p.add_second(12);
	p.add_third(18);

	cout << p << endl;
	day.set_day(7);
	cout << day << endl;

	cout << day.get_newDay() << endl;
	cin >> p;
	return 0;

}