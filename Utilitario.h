#include <cmath>
using std::exp;
using std::pow;

double funcion(double x){
	
	double y;
	y = pow(x,3)-3*x+exp(x)-2; //x^3-3x+e^(x)-2
	return y;
}