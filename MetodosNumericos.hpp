
//Clase abstracta
#ifndef METODOSNUMERICOS
#define METODOSNUMERICOS

class MetodosNumericos{
	
	public:
		MetodosNumericos(const double &, const double &);
		MetodosNumericos();
		~MetodosNumericos();
		
		void setXI(const double _XI);
		void setXU(const double _XU);
		void setXR(const double _XR);
		void setH(const double _H);
		
		const double getXI()const;
		const double getXU()const;
		const double getXR()const;
		const double getH()const;
		
		double cambio_signo(const double &, const double &);
		
		virtual void solucion()=0;
		
	protected:
		double xI, xU, xR;
		double h;
};
#endif
