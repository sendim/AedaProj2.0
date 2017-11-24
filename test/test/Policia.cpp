#pragma once
#include "PostosDeSocorro.h"


Policia::Policia(int numSocorristas, int numVeiculos, string local, double x, double y, int numCarros, int numMotos) : PostoDeSocorro(numSocorristas, numVeiculos, local, x, y) {
	setNumVeiculos(numCarros + numMotos);
	this->numMotos = numMotos;
	this->numCarros = numCarros;
}
double Policia::getProximidade(double x, double y) {
	double distancia;
	double x1 = coord.first;
	double y1 = coord.second;
	distancia = sqrt(((double)x - (double)x1)*((double)x - (double)x1) + ((double)y - (double)y1)*((double)y - (double)y1));
	return distancia;
}

int Policia::tratamentoDeAssaltos(Acidente * a) {
	int policias = a->getNumSocorristas();
	int carros = a->getNumCarros();
	bool noMotos = false;
	bool noCarros = false;

	if (numMotos < 1)
		noMotos = true;
	if (numCarros < 1)
		noCarros = true;

	if ((noMotos || noMotos) == false)
		return 1;
	

	if (carros == 2) {		//se for num comercial
		if (numCarros >= 1 && numMotos >= 2) {
			numMotos -= 2;
			numCarros -= 1;
			numSocorristas -= 4;
			numVeiculos -= 3;
			cout << "Foram enviadas 2 motos e 1 carro.\n";
			return 0;
		}
		if (noMotos && numCarros >= 2) {
			numCarros -= 2;
			numSocorristas -= 4;
			numVeiculos -= 2;
			cout << "Foram enviados 2 carros.\n";
			return 0;
		}
		if (noCarros && numMotos >= 4) {
			numCarros -= 4;
			numSocorristas -= 4;
			numVeiculos -= 4;
			cout << "Foram enviados 4 motos.\n";
			return 0;
		}
	}

	if (carros == 1) {		//se for num particular
		if (numMotos >= 2) {
			numMotos -= 2;
			numSocorristas -= 2;
			numVeiculos -= 2;
			cout << "Foram enviadas 2 motos.\n";
			return 0;
		}
		if (numMotos <= 1 && numCarros >= 1) {
			numCarros -= 1;
			numSocorristas -= 2;
			numVeiculos -= 1;
			cout << "Foi enviado 1 carro.\n";
			return 0;
		}
	}
	return 1;
}