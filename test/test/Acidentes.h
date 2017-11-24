#pragma once


#include <vector>
#include <string>
#include <utility>
#include <fstream>
#include <iostream>

using namespace std;


/*
* Representa um acidente
*/
class Acidente {
	friend class PostoDeSocorro;
protected:
	/*
	* Local do acidente
	*/
	string localAcidente;
	/*
	* Data do acidente
	*/
	int data;
	/*
	* Par da longitude e da latitude do acidente
	*/
	pair<double, double> coord;
public:
	/**
	* @brief Construtor da classe Acidente
	*
	* Construtor da classe Acidente.
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	*
	*/
	Acidente(string localAcidente, int data, double x, double y);
	/**
	* @brief Construtor padrao da classe Acidente
	* Construtor da classe Acidente.
	*
	*/
	Acidente();
	/**
	* @brief Puramente virtual.
	*/
	virtual void printAcid() {};
	/**
	* @brief Funcao que retorna a longitude da localizacao do acidente.
	* Funcao que retorna a longitude da localizacao do acidente.
	*
	* @return coord.first Longitude da localizacao do acidente.
	*/
	double getx();
	/**
	* @brief Funcao que retorna a latitude da localizacao do acidente.
	*
	* Funcao que retorna a latitude da localizacao do acidente.
	*
	* @return coord.second latitude da localizacao do acidente.
	*/
	double gety();
	/**
	* @brief Puramente virtual.
	*/
	virtual int getNumCarros() {
		return 0;
	}
	/**
	* @brief Puramente virtual.
	*/
	virtual int getNumSocorristas() {
		return 0;
	}

};





/*class AcidenteViacaoNacional : public AcidenteViacao {}

class AcidenteViacaoAutoEstrada : public Acidente-Viacao {} */
