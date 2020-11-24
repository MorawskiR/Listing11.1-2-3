

#include <iostream>
#include "Time.h"

int main()
{
	using std::cout;
	using std::endl;

	Time weding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;

	cout << "czas pielenia : ";
	weding.Show();
	cout << endl;


	cout << "czas woskowania : ";
	waxing.Show();
	cout << endl;



	cout << "laczny czas pracy: ";
	total = weding + waxing;
	total.Show();
	cout << endl;


	diff = weding - waxing;
	cout << "czas pileneie - cczas woskowania = ";
	diff.Show();
	cout << endl;

	adjusted = total * 1.5;
	cout << "czas pracy z poprawką na przerwy = ";
	adjusted.Show();
	cout << endl;
	

	return 0;
}
