#ifndef JUGADOR_H
#define JUGADOR_H
#include<iostream>

using std::string;

class Jugador
{
	public:
		Jugador();
		virtual bool ModoJuego(int)=0;
		virtual bool Trampa()=0;
		~Jugador();
	protected:
		string nombre;
		int anioCursado;
		string casa;
		int numeroCamiseta;
		int peso, reflejo, musculatura;
		
};

#endif
