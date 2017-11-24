#pragma once

#include "Acidentes.h"



class PostoDeSocorro {
	friend class Acidente;
protected:
	int numSocorristas;
	int numVeiculos;
	string local;
	pair<int, int> coord;
public:

	PostoDeSocorro(int numSocorristas, int numVeiculos, string local, double x, double y);

	void setNumVeiculos(int numVeiculos);
	//virtual string tipo() = 0;
	virtual void printPostos() {};
	virtual double getProximidade(double x, double y) { return 0; };
	virtual int tratamentoDeIncendios(Acidente * a) { return 1; };
};


class Bombeiros : public PostoDeSocorro {
private:
	int numAmbulancias;
	int numAutotanques;
public:
	Bombeiros(int numSocorristas, int numVeiculos, string local, double x, double y, int numAmbulancias, int numAutotanques);
	//string tipo() = 0;
	void printPostos();
	int tratamentoDeIncendios(Acidente * a);
	double getProximidade(double x, double y);
};

class Policia : public PostoDeSocorro {
private:
	int numCarros;
	int numMotos;
public:
	Policia(int numSocorristas, int numVeiculos, string local, double x, double y, int numCarros, int numMotos);
	//string tipo() = 0;
	void printPostos() {}
	double getProximidade(double x, double y);
	int tratamentoDeAssaltos(Acidente * a);
};