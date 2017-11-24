#pragma once
#include "Acidentes.h"


class AcidenteViacao : public Acidente {
private:
	int numFeridosGraves;
	int numVeiculosEnvolv;
	
	int ae; //1-EN OU 0-AE


public:
	bool precisadeamb() const;
	AcidenteViacao(string localAcidente, int ae, int data, double x, double y, int numFeridosGraves, int numVeiculosEnvolv);

	void setNumCarros(int numero);
	void setNumAmbulancias(int numero);
	void setNumMotos(int numero);
	int numVeiculosNecessarios();

	int numCarrosNecessarios();
	int numMotosNecessarias();
	int numAmbulanciasNecessarias();
	void printAcid();
};

