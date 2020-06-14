#ifndef CAZADOR_H
#define CAZADOR_H

#include "Jugador.h"

class Cazador : public Jugador
{
	public:
		Cazador(string, int, string, int, int, int);
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
		
		~Cazador();
	protected:
		int peso, reflejo, velocidadInicial, agilidad;
};

#endif
