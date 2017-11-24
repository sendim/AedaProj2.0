
#include "Incendios.h"

Incendio::Incendio(string localAcidente, int data, double x, double y, int numCarrosBombeiros, int numBombeiros) : Acidente(localAcidente, data, x, y) {
	this->numBombeiros = numBombeiros;
	this->numCarrosBombeiros = numCarrosBombeiros;
}
Incendio::Incendio() {}

IncendioFlorestal::IncendioFlorestal(string localAcidente, int data, double x, double y, int numCarrosBombeiros, int numBombeiros, int areaChamas) : Incendio(localAcidente, data, x, y, numCarrosBombeiros, numBombeiros) {
	this->areaChamas = areaChamas;
	setNumCarros(numCarrosNecessarios(areaChamas));
	setNumBombeiros(numBombeirosNecessarios(areaChamas));
}

IncendioMoradia::IncendioMoradia(string localAcidente, int data, double x, double y, int numCarrosBombeiros, int numBombeiros, int nPessoas) : Incendio(localAcidente, data, x, y, numCarrosBombeiros, numBombeiros) {
	this->nPessoas = nPessoas;
	setNumCarros(numCarrosNecessarios(nPessoas));
	setNumBombeiros(numBombeirosNecessarios(nPessoas));
}

int IncendioFlorestal::numCarrosNecessarios(int areaArdida) {
	int carros = 3;
	carros += areaArdida / 5;                   //envia pelo menos 3 carro + 1 por cada 5 hectares
	return carros;
}

int IncendioFlorestal::numBombeirosNecessarios(int areaArdida) {
	int bombeiros = 12;
	bombeiros += areaArdida / 5;                   //envia pelo menos 12 bombeiros + 1 por cada 5 hectares
	return bombeiros;
}
int IncendioMoradia::numCarrosNecessarios(int nPessoas) {
	int carros = 1;
	carros += nPessoas / 4;
	return carros;
}
int IncendioMoradia::numBombeirosNecessarios(int nPessoas) {
	int bombeiros = 4;
	bombeiros += nPessoas / 2;
	return bombeiros;

}
IncendioApartamento::IncendioApartamento(string localAcidente, int data, double x, double y, int numCarrosBombeiros, int numBombeiros, int andares) : Incendio(localAcidente, data, x, y, numCarrosBombeiros, numBombeiros) {
	this->andares = andares;
	setNumCarros(numCarrosNecessarios(andares));
	setNumBombeiros(numBombeirosNecessarios(andares));
}
void Incendio::setNumCarros(int numCarros) {
	numCarrosBombeiros = numCarros;
}
void Incendio::setNumBombeiros(int numBombeiros) {
	this->numBombeiros = numBombeiros;
}

int IncendioApartamento::numCarrosNecessarios(int andares) {
	int carros = 2;
	carros += andares / 2;
	return carros;
}
int IncendioApartamento::numBombeirosNecessarios(int andares) {
	int bombeiros = 4;
	bombeiros += andares;
	return bombeiros;
}
void IncendioApartamento::printAcid() {
	cout << "Acidente tipo: Incendio num apartamento em " << localAcidente << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual sao precisos " << numCarrosBombeiros << " carros de bombeiros e " << numBombeiros << " bombeiros " << " num apartamento com " << andares << " andares." << endl << endl;
}

void IncendioMoradia::printAcid() {
	cout << "Acidente tipo: Incendio numa moradia em " << localAcidente << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual sao precisos " << numCarrosBombeiros << " carros de bombeiros e " << numBombeiros << " bombeiros " << " numa moradia com " << nPessoas << " pessoas." << endl << endl;
}

void IncendioFlorestal::printAcid() {
	cout << "Acidente tipo: Incendio florestal " << localAcidente << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual sao precisos " << numCarrosBombeiros << " carros de bombeiros e " << numBombeiros << " bombeiros " << " no qual ha " << areaChamas << " hectares em chamas." << endl << endl;
}



int Incendio::getNumCarros() {
	return numCarrosBombeiros;
}
int Incendio::getNumSocorristas() {
	return numBombeiros;
}