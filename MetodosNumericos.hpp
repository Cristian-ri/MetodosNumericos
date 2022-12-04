//Clase abstracta
#include <cmath>
using std::exp;
using std::pow;

#ifndef METODOSNUMERICOS
#define METODOSNUMERICOS

class MetodosNumericos{
	
	public:
		MetodosNumericos(const double, const double);
		MetodosNumericos();
		~MetodosNumericos();
		
		void setXI(const double);
		void setXU(const double);
		void setXR(const double);
		void setH(const double);
		
		const double getXI()const;
		const double getXU()const;
		const double getXR()const;
		const double getH()const;
		
		virtual double solucion()=0;
		
	protected:
		double xI, xU, xR;
		double h;
};
#endif
