

#include <iostream>
#include "Time.h"

int main()
{
	using std::cout;
	using std::endl;

	Time aida(3, 35);
	Time tosca(2, 48);

	Time temp;

	cout << "Aida i Tosca: \n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca; // operator+()
	cout << "Aida i Tosca : " << temp << endl;
	temp = aida * 1.17;
	cout << "Aida * 1.17: " << temp << endl;
	cout << "10  * Tosca: " << 10.0 * tosca << endl;

	/*
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
	cout << endl;*/




	return 0;
}
