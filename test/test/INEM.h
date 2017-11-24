#pragma once
#include "PostosDeSocorro.h"


class INEM : public PostoDeSocorro {
protected:
	int numAmbulancias;
	int numCarros;
	int numMotos;



public:


	INEM(int numSocorristas, int numVeiculos, string local, double x, double y, int numAmbulancias, int numCarros, int numMotos);
	INEM();
	/* metodos get*/
	int getNumAmbulacias();
	int getNumCarros() { return 0; }
	int getNumMotos() { return 0; }
	void printPostos() {};
	double getProximidade(double x, double y);
	int tratamentoDeAcidentesViacao(Acidente * a);

};
