#pragma once

#include "Assaltos.h"

Assalto::Assalto(string localAcidente, int data, double x, double y, int numCarros, int numSocorristas) : Acidente(localAcidente, data, x, y) {
	this->numCarros = numCarros;
	this->numSocorristas = numSocorristas;

}

Assaltoparticular::Assaltoparticular(string localAcidente, int data, double x, double y, int numFeridos) : Assalto(localAcidente, data, x, y, 1, 2) {

	this->numFeridos = numFeridos;
	if (numFeridos > 0)
		precisadeamb = true;
	else
		precisadeamb = false;
}


Assaltocomercial::Assaltocomercial(string localAcidente, int data, double x, double y, int numFeridos) : Assalto(localAcidente, data, x, y, 2, 4) {
	this->numFeridos = numFeridos;
	if (numFeridos > 0)
		precisadeamb = true;
	else
		precisadeamb = false;
}




void Assaltocomercial::printAcid() {
	cout << "Acidente tipo: Assalto comercial em " << localAcidente << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual houveram " << numFeridos << " Feridos " << endl << endl;

}

void Assaltoparticular::printAcid() {
	cout << "Acidente tipo: Assalto particular em " << localAcidente << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual houveram " << numFeridos << " Feridos " << endl << endl;

}

int Assalto::getNumCarros() {
	return numCarros;
}
int Assalto::getNumSocorristas() {
	return numSocorristas;
}

