#include "MetodosNumericos.hpp"

MetodosNumericos::MetodosNumericos(const double &_XI, const double &_XU){
	setXI(_XI);
	setXU(_XU);
}

MetodosNumericos::MetodosNumericos(){
	this->xI = 0;
	this->xU = 0;
}

MetodosNumericos::~MetodosNumericos(){
}

void MetodosNumericos::setXI(const double _XI){
	this->xI = _XI;
}

void MetodosNumericos::setXU(const double _XU){
	this->xU = _XU;
}

void MetodosNumericos::setXR(const double _XR){
	this->xR = _XR;
}

void MetodosNumericos::setH(const double _H){
	this->h = _H;
}

const double MetodosNumericos::getXI()const{
	return xI;
}

const double MetodosNumericos::getXU()const{
	return xU;
}

const double MetodosNumericos::getXR()const{
	return xR;
}

const double MetodosNumericos::getH()const{
	return h;
}