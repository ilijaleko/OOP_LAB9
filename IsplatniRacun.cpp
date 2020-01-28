#include "IsplatniRacun.hpp"

IsplatniRacun::IsplatniRacun(double stanje) {
	this->stanje = stanje;
}

bool IsplatniRacun::isplati(double iznos) {
	if (stanje >= iznos) {
		stanje = stanje - iznos;
		brojTransakcija++;
		popisTransakcija.push_back(iznos * (-1));
		return 1;
	}
	return 0;
}