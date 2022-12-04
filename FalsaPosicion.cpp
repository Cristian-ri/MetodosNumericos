#include "FalsaPosicion.hpp"
//#include "Utilitario.h"
#include <cmath>
using std::abs;

FalsaPosicion::FalsaPosicion(const double &_XI, const double &_XU, 
				const double &_H):MetodosNumericos(_XI, _XU){
					this->h = _H;
}


FalsaPosicion::FalsaPosicion(){
	this->h = 0;
}

FalsaPosicion::~FalsaPosicion(){
}

void FalsaPosicion::setFI(const double _FI){
	this->fi = _FI;
}

void FalsaPosicion::setFU(const double _FU){
	this->fu = _FU;
}

void FalsaPosicion::setFR(const double _FR){
	this->fr = _FR;
}

void FalsaPosicion::setN(const double _N){
	this->n = _N;
}

const double FalsaPosicion::getFI()const{
	return fi;
}

const double FalsaPosicion::getFU()const{
	return fu;
}

const double FalsaPosicion::getFR()const{
	return fr;
}

const double FalsaPosicion::getN()const{
	return n;
}

double FalsaPosicion::solucion(const double _FI, const double _FU){	
	return 0;
}
