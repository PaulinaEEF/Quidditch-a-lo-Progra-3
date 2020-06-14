#ifndef GUARDIAN_H
#define GUARDIAN_H

#include "Jugador.h"

class Guardian : public Jugador
{
	public:
		Guardian(string, int, string, int, int, int);
		bool ModoJuego(int);
		bool Trampa();
		
		int getPeso();
		void setPeso(int);
		int getReflejo();
		void setReflejo(int);
		int getVelocidadInicial();
		void setVelocidadInicial(int);
		int getAgilidad();
		void setAgilidad(int);
		
		
		~Guardian();
	protected:
		int peso, reflejo, velocidadInicial, agilidad;
};

#endif
