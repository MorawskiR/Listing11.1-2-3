

#include <iostream>
#include "Time.h"

int main()
{
	using std::cout;
	using std::endl;

	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "czas planowania = ";
	planning.Show();
	cout << endl;

	cout << "czas kodowania = ";
	coding.Show();
	cout << endl;

	cout << "czas poprawiania = ";
	fixing.Show();
	cout << endl;

	total = coding + fixing ;
	
	cout << "łącznie (coding.Show(fixing) = ";
	total.Show();
	cout << endl;
	cout << "Kojene poprawki: ";
	Time morefixing(3, 28);
	morefixing.Show();
	cout << endl;
	cout << "lacznie more fixing .operator+(total )):";
	total = morefixing.operator+(total);

	total.Show();

	return 0;
}
