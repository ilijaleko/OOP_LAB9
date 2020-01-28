#include "UplatniRacun.hpp"

void UplatniRacun::uplati(double iznos) {
	stanje = stanje + iznos;
	brojTransakcija++;
	popisTransakcija.push_back(iznos);
}