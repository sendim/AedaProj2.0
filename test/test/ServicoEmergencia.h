#pragma once


#include "PostosDeSocorro.h"
#include "AcidentesViacao.h"
#include "INEM.h"
#include "AcidentesViacao.h"
#include "Incendios.h"
#include "Assaltos.h"

using namespace std;

class ServicoEmergencia {
private:
	vector <Acidente *> acidentes;
	vector <PostoDeSocorro *> postosSocorro;
public:

	ServicoEmergencia();
	void addAcidente(Acidente * a);
	void addPostoSocorro(PostoDeSocorro * p);
	void printAcidentes();
	virtual void printPostos() {};
	void removeAcidente(Acidente *a);
	void removePostoSocorro(PostoDeSocorro *p);
	void tratamentoDeAcidentes(Acidente *a);
	void tratamentoDeIncendios(Acidente *a);
	vector <PostoDeSocorro *> getBombeiros();
	vector <PostoDeSocorro *> getINEM();
	vector <PostoDeSocorro *> getPolicia();
	void adicionarAcidenteViacao();

};

