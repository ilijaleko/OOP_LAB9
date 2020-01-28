#pragma once
#include "Racun.hpp"

class DevizniRacun : public Racun {
public:
	DevizniRacun(double stanje, std::string valuta, double tecaj);
	void kupi(double iznos);
	void setTecaj(double tecaj);
	static double tecaj;
};