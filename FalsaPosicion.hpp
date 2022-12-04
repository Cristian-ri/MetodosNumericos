#include "MetodosNumericos.hpp"

#ifndef FALSAPOSICION
#define FALSAPOSICION

class FalsaPosicion:public MetodosNumericos {
	
	public:
		FalsaPosicion(const double &, const double &, const double &);
		FalsaPosicion();
		~FalsaPosicion();
		
		void setFI(const double);
		void setFU(const double);
		void setFR(const double);
		void setN(const double);
		
		const double getFI()const;
		const double getFU()const;
		const double getFR()const;
		const double getN()const;
		
		double solucion(const double, const double);
		
	private:
		double fr;
		double fi, fu;
		double n;	
};
#endif