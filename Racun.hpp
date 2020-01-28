#pragma once
#include <string>
#include <vector>

class Racun {
public:
	double dohvatiStanje();
	std::string dohvatiStanjeTekst();
	void transakcije();

	static int brojTransakcija;
protected:
	double stanje;
	std::string valuta;
	std::vector<double> popisTransakcija;
};