#include <iostream>
#include "Racun.hpp"
#include "IsplatniRacun.hpp"
#include "UplatniRacun.hpp"
#include "DevizniRacun.hpp"
using std::cout;
using std::endl;

int main()
{
	UplatniRacun uplatni;
	uplatni.uplati(120);
	uplatni.uplati(50);
	cout << "Transakcije uplatnog racuna:" << endl;
	uplatni.transakcije();

	IsplatniRacun isplatni(300);
	if (isplatni.isplati(100)) {
		cout << "Isplaceno 100KN" << endl;
	}
	else {
		cout << "Nije isplaceno 100KN" << endl;
	}
	if (isplatni.isplati(74.23)) {
		cout << "Isplaceno 74.23KN" << endl;
	}
	else {
		cout << "Nije isplaceno 74.23KN" << endl;
	}
	if (isplatni.isplati(350)) {
		cout << "Isplaceno 350KN" << endl;
	}
	else {
		cout << "Nije isplaceno 350KN" << endl;
	}
	cout << "Transakcije isplatnog racuna:" << endl;
	isplatni.transakcije();

	DevizniRacun devizni(150, "EUR", 7.45);
	devizni.kupi(300);
	devizni.kupi(150);
	cout << "Transakcije deviznog racuna:" << endl;
	devizni.transakcije();

}