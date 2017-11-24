#pragma once
#include "Acidentes.h"


Acidente::Acidente(string localAcidente, int data, double x, double y) {
	this->localAcidente = localAcidente;
	this->data = data;
	pair<int, int> coord(x, y);
	this->coord = coord;
}


Acidente::Acidente() {}


double Acidente::getx() {
	return coord.first;
}

double Acidente::gety() {
	return coord.second;
}