#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include "MetodosNumericos.hpp"
#include "FalsaPosicion.hpp"

int main(int argc, char** argv) 
{
	FalsaPosicion f0(1,2,0.01);
	f0.solucion();
	
	cout<<"Hola"<<endl;
	
	return 0;
}
