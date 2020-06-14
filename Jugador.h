#ifndef JUGADOR_H
#define JUGADOR_H
#include<iostream>

using std::string;

class Jugador
{
	public:
		Jugador(string, int, string, int, int, int, int);
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
		int getPeso();
		void setPeso(int);
		int getReflejo();
		void setReflejo(int);
		int getMusculatura();
		void setMusculatura(int);
		~Jugador();
	protected:
		string nombre;
		int anioCursado;
		string casa;
		int numeroCamiseta;
		int peso, reflejo, musculatura;
		
};

#endif
