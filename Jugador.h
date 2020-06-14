#ifndef JUGADOR_H
#define JUGADOR_H

#include<iostream>
#include <cstdlib>
#include <ctime>
using std::string;

class Jugador
{
	public:
		Jugador(string, int, string, int);
		virtual bool ModoJuego(int)=0;
		virtual bool Trampa()=0;
		
		string getNombre();
		void setNombre(string);
		int getAnioCursado();
		void setAnioCursado(int);
		string getCasa();
		void setCasa(string);
		int getNumeroCamista();
		void setNumeroCamista(int);
		~Jugador();
	protected:
		string nombre;
		int anioCursado;
		string casa;
		int numeroCamiseta;
		
};

#endif
