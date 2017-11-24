#pragma once
#include "PostosDeSocorro.h"



Bombeiros::Bombeiros(int numSocorristas, int numVeiculos, string local, double x, double y, int numAmbulancias, int numAutotanques) : PostoDeSocorro(numSocorristas, numVeiculos, local, x, y) {
	setNumVeiculos(numAmbulancias + numAutotanques);
	this->numAmbulancias = numAmbulancias;
	this->numAutotanques = numAutotanques;
}

void Bombeiros::printPostos() {};

double Bombeiros::getProximidade(double x, double y) {
	double distancia;
	double x1 = coord.first;
	double y1 = coord.second;
	distancia = sqrt(((double)x - (double)x1)*((double)x - (double)x1) + ((double)y - (double)y1)*((double)y - (double)y1));
	return distancia;
}

int Bombeiros::tratamentoDeIncendios(Acidente * a) {
	int bombeiros = a->getNumSocorristas();
	int carros = a->getNumCarros();
	int x = 0;

	x += carros;
	if (2 * x < bombeiros)
		x += bombeiros;

	if (numAmbulancias < x)
	{
		x -= numAmbulancias;
		numAmbulancias = 0;
		numAutotanques -= x;
		cout << "Foram enviadas " << numAmbulancias << " e " << numAutotanques << ".";
		return 0;
	}
	return 1;
}

