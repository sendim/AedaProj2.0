#pragma once
#include "INEM.h"


INEM::INEM(int numSocorristas, int numVeiculos, string local, double x, double y, int numAmbulancias, int numCarros, int numMotos) : PostoDeSocorro(numSocorristas, numVeiculos, local, x, y) {

	setNumVeiculos(numCarros + numMotos + numAmbulancias);
	this->numMotos = numMotos;
	this->numCarros = numCarros;
	this->numAmbulancias = numAmbulancias;
}

double INEM::getProximidade(double x, double y) {
	double distancia;
	double x1 = coord.first;
	double y1 = coord.second;
	distancia = sqrt(((double)x - (double)x1)*((double)x - (double)x1) + ((double)y - (double)y1)*((double)y - (double)y1));
	return distancia;
}
int INEM::tratamentoDeAcidentesViacao(Acidente * a) {
	
	
	return 1; 
}