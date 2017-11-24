#pragma once
#include "Acidentes.h"


class Incendio : public Acidente {
protected:
	/**
	* Numero de carros de bombeiros necessarios para o incendio
	*/
	int numCarrosBombeiros;
	/**
	* Numero de bombeiros necessarios para o incendio
	*/
	int numBombeiros;
public:
	/**
	* @brief Construtor da classe Incendio
	*
	* Construtor da classe Incendio, subclasse de Acidentes
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	* @param numCarrosBombeiros Numero de carros necessarios para combater o incendio.
	* @param numBombeiros Numero de bombeiros necessarios para combater o incendio.
	*
	*/
	Incendio(string localAcidente, int data, double x, double y,
		int numCarrosBombeiros, int numBombeiros);

	/**
	* @brief Construtor padrao da classe Incendio
	*
	* Construtor padrao da classe Incendio, subclasse de Acidentes
	*
	*/
	Incendio();
	/**
	* @brief Altera na classe incendio o numero de carros de bombeiros necessarios para combater o Incendio.
	*
	* Esta funcao altera o parametro numCarrosBombeiros da classe Incendio, dependendo do numero necessario.
	*
	* @param numCarros Numero de carros necessarios para combater o incendio.
	*
	*/
	void setNumCarros(int numCarros);
	/**
	* @brief Altera na classe incendio o numero de bombeiros necessarios para combater o Incendio.
	*
	* Esta funcao altera o parametro numBombeiros da classe Incendio, dependendo do numero necessario.
	*
	* @param numCarros Numero de bombeiros necessarios para combater o incendio.
	*
	*/
	void setNumBombeiros(int numBombeiros);
	/**
	* @brief Retorna quantos carros de bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao retorna o numero de carros de bombeiros necessarios para combater o incendio.
	* @return numCarrosBombeiros Carros de bombeiros necessarios para combater o fogo.
	*/
	int getNumCarros();
	/**
	* @brief Retorna quantos bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao retorna o numero de bombeiros necessarios para combater o incendio.
	* @return numBombeiros Bombeiros necessarios para combater o fogo.
	*/
	int getNumSocorristas();
};

class IncendioFlorestal : public Incendio {
private:
	/**
	*Hectares de chamas.
	*/
	int areaChamas;
public:
	/**
	* @brief Construtor da classe IncendioFlorestal
	*
	* Construtor da classe IncendioFlorestal, subclasse de Incendio, subclasse de Acidente.
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	* @param numCarrosBombeiros Numero de carros necessarios para combater o incendio.
	* @param numBombeiros Numero de bombeiros necessarios para combater o incendio.
	* @param areaChamas Hectares de chamas.
	*
	*/
	IncendioFlorestal(string localAcidente, int data, double x, double y,
		int numCarrosBombeiros, int numBombeiros, int areaChamas);
	/**
	* @brief Determina quantos carros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 3 carros sao sempre necessarios, e que envia mais 1 a cada 5 hectares.
	*
	* @param areaArdida Hectares de chamas.
	* @return carros Carros necessarios para combater o fogo.
	*/
	int numCarrosNecessarios(int areaArdida);
	/**
	* @brief Determina quantos bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 6 bombeiros sao sempre necessarios, e que envia mais 2 a cada 5 hectares.
	* @param areaArdida Hectares de chamas.
	* @return bombeiros Bombeiros necessarios para combater o fogo.
	*/
	int numBombeirosNecessarios(int areaArdida);
	/**
	* @brief Faz um print das especificacoes do incendio.
	*
	* Faz um print das especificacoes do incendio.
	*
	*/
	void printAcid();
};
class IncendioMoradia : public Incendio {
private:/**
		*Numero de pessoas afetadas
		*/
	int nPessoas;
public:
	/**
	* @brief Construtor da classe IncendioMoradia
	*
	* Construtor da classe IncendioMoradia, subclasse de Incendio, subclasse de acidente.
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	* @param numCarrosBombeiros Numero de carros necessarios para combater o incendio.
	* @param numBombeiros Numero de bombeiros necessarios para combater o incendio.
	* @param nPessoas Numero de pessoas afetadas pelo incendio.
	*
	*/
	IncendioMoradia(string localAcidente, int data, double x, double y,
		int numCarrosBombeiros, int numBombeiros, int nPessoas);
	/**
	* @brief Determina quantos carros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 1 carro e sempre necessario, e que envia mais 1 a cada 2 pessoas envolvidas.
	*
	* @param nPessoas Numero de pessoas afetadas pelo incendio.
	* @return carros Carros necessarios para combater o fogo.
	*/
	int numCarrosNecessarios(int nPessoas);
	/**
	* @brief Determina quantos Bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 2 carro e sempre necessario, e que envia mais 2 a cada 2 pessoas envolvidas.
	*
	* @param nPessoas Numero de pessoas afetadas pelo incendio.
	* @return bombeiros Bombeiros necessarios para combater o fogo.
	*/
	int numBombeirosNecessarios(int nPessoas);
	/**
	* @brief Faz um print das especificacoes do incendio.
	*
	* Faz um print das especificacoes do incendio.
	*
	*/
	void printAcid();
};
class IncendioApartamento : public Incendio {
private:
	/**
	* Numero de andares do predio
	*/
	int andares;
public:
	/**
	* @brief Construtor da classe IncendioApartamento
	*
	* Construtor da classe IncendioApartamento, subclasse de Incendio, subclasse de Acidente.
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	* @param numCarrosBombeiros Numero de carros necessarios para combater o incendio.
	* @param numBombeiros Numero de bombeiros necessarios para combater o incendio.
	* @param andares Numero de andares do predio.
	*
	*/
	IncendioApartamento(string localAcidente, int data, double x, double y,
		int numCarrosBombeiros, int numBombeiros, int andares);
	/**
	* @brief Determina quantos carros de bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 2 carros e sempre necessario, e que envia mais 2 a cada andar.
	*
	* @param andares Numero de andares afetadas pelo incendio.
	* @return carros Carros necessarios para combater o fogo.
	*/
	int numCarrosNecessarios(int andares);
	/**
	* @brief Determina quantos bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 4 bombeiros e sempre necessario, e que envia mais 4 por andar.
	*
	* @param andares Numero de andares afetadas pelo incendio.
	* @return bombeiros Bombeiros necessarios para combater o fogo.
	*/
	int numBombeirosNecessarios(int andares);
	/**
	* @brief Faz um print das especificacoes do incendio.
	*
	* Faz um print das especificacoes do incendio.
	*
	*/
	void printAcid();
};