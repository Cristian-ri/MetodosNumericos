#include "MetodosNumericos.hpp"
#include <cmath>
using std::abs;

#ifndef FALSAPOSICION
#defien FALSAPOSICION

class FalsaPosicion{
	
	public:
		FalsaPosicion(const double &, const double &, const double &, 
						const double &, const double &, const double &);
		
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
		
		
		
		
	private:
		double fr;
		double fi, fu;
		double n;	
};
#endif
