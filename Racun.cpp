#include "Racun.hpp"
#include <iostream>

int Racun::brojTransakcija = 0;

double Racun::dohvatiStanje() {
	return stanje;
}

std::string Racun::dohvatiStanjeTekst() {
	return std::to_string(stanje) + valuta;
}

void Racun::transakcije() {
	for (auto transakcija : popisTransakcija) {
		std::cout << transakcija << std::endl;
	}
}