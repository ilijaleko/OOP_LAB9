#pragma once
#include "Racun.hpp"

class IsplatniRacun : public Racun {
public:
	IsplatniRacun(double stanje);
	bool isplati(double iznos);
};