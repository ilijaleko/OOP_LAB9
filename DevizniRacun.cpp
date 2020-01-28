#include "DevizniRacun.hpp"

double DevizniRacun::tecaj = 0;

DevizniRacun::DevizniRacun(double stanje, std::string valuta, double tecaj) {
	this->stanje = stanje;
	this->valuta = valuta;
	this->tecaj = tecaj;
}

void DevizniRacun::kupi(double iznos) {
	stanje = stanje + (iznos / tecaj);
	brojTransakcija++;
	popisTransakcija.push_back(iznos / tecaj);
}