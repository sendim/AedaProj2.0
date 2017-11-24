#pragma once
#include "Acidentes.h"


class Assalto : public Acidente {

protected:
	/**
	* Numero de carros necessarios para combater o Assalto.
	*/
	int numCarros;
	/**
	* Numero de socorristas necessarios para combater o Assalto.
	*/
	int numSocorristas;
public:
	/**
	* @brief Construtor da classe Assalto
	*
	* Construtor da classe Assalto, subclasse de Acidente.
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	* @param numCarros Numero de carros necessarios para combater o assalto.
	* @param NumSocorristas Numero de socorristas necessarios para combater o assalto.
	*/
	Assalto(string localAcidente, int data, double x, double y, int numCarros, int NumSocorristas);
	/**
	* @brief Construtor padrao da classe Assalto
	*
	* Construtor padrao da classe Assalto, subclasse de Acidentes
	*
	*/
	Assalto::Assalto();
	/**
	* @brief Funcao que retorna o numero de carros necessarios.
	* Funcao que retorna o numero de carros da classe assalto.
	*
	* @return numCarros O numero de carros necessarios para combater o assalto.
	*/
	int getNumCarros();
	/**
	* @brief Funcao que retorna o numero de carros necessarios.
	* Funcao que retorna o numero de carros da classe assalto.
	*
	* @return numCarros O numero de carros necessarios para combater o assalto.
	*/
	int getNumSocorristas();


};

class Assaltoparticular : public Assalto {
private:
	bool precisadeamb;
	/**
	* Numero de feridos
	*/
	int numFeridos;
public:
	Assaltoparticular(string localAcidente, int data, double x, double y,
		int numFeridos);
	void printAcid();

};

class Assaltocomercial : public Assalto {
private:
	/**
	* Numero de feridos
	*/
	int numFeridos;
	bool precisadeamb;
public:
	Assaltocomercial(string localAcidente, int data, double x, double y, int numFeridos);
	void printAcid();

};