#pragma once
#include "AcidentesViacao.h"




AcidenteViacao::AcidenteViacao(string localAcidente, int ae, int data, double x, double y, int numFeridosGraves, int numVeiculosEnvolv) : Acidente(localAcidente, data, x, y) {

	this->numFeridosGraves = numFeridosGraves;
	this->numVeiculosEnvolv = numVeiculosEnvolv;
	this->ae = ae;
	setNumCarros(numCarrosNecessarios());
	setNumMotos(numMotosNecessarias());
	setNumAmbulancias(numAmbulanciasNecessarias());
}



int AcidenteViacao::numVeiculosNecessarios() {
	int nCarro = 0;
	/*se for em estrada nacional*/
	if (ae == 0) {
		nCarro = this->numVeiculosEnvolv % 2; /* envia um carro por cada 2 veiculos envolvidos */
	}
	/* se for em autoestrada */
	nCarro = this->numVeiculosEnvolv; /* envia carro por cada veiculo envolvido */
	return nCarro;
	int nMoto = 0;
	/* se for em estrada nacional, ha preferencia por meios mais rapidos */
	if (this->ae == 0) {
		nMoto = this->numVeiculosEnvolv; /* envia uma moto por cada veiculo envolvido */
	}
	/* se for em autoestrada */
	nMoto = this->numVeiculosEnvolv % 2; /* envia uma moto por cada 2 veiculos envolvidos */
	return nMoto;
}


int AcidenteViacao::numAmbulanciasNecessarias() {
	int nAmb = 0;
	if (this->numFeridosGraves > 0) {
		nAmb = this->numFeridosGraves;  /* envia uma ambulancia para cada ferido grave */
	}
	return nAmb;
}
void AcidenteViacao::printAcid() {
	if (ae == 0) {
cout << "Acidente tipo: Acidente viacao em estrada nacional em " << localAcidente << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual houveram " << numFeridosGraves << " Feridos " << endl << endl;
	return;
	}
	cout << "Acidente tipo: Acidente viacao em autoestrada " << localAcidente << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual houveram " << numFeridosGraves << " Feridos " << endl << endl;

}