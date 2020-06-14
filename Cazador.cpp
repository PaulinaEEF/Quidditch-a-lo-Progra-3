#include "Cazador.h"

Cazador::Cazador(string nombre, int anioCursado, string casa, int numeroCamiseta, int peso, int reflejo):Jugador(nombre, anioCursado, casa, numeroCamiseta)
{
	this->peso=peso;
	this->reflejo=reflejo;
	velocidadInicial = (200/peso)*7;
	agilidad = reflejo + 7;
}

bool Cazador::ModoJuego(int agilidadContraria){
	//Velocidad + Agilidad >= Agilidad del Guardian del equipo contrario
	if(velocidadInicial + agilidad >= agilidadContraria){
		velocidadInicial+=6;
		agilidad+=6;
		return true;
	}else{
		return false;
	}
}
bool Cazador::Trampa(){
	//tiene un 10% de chance de funcionar 
	srand((unsigned)time(0));
	int numeroRandom = rand() % 100;
	if(numeroRandom <= 10){
		return true;
	}else{
		return false;
	}
}


int Cazador::getPeso(){
	return this->peso;
	
}
void Cazador::setPeso(int peso){
	this->peso=peso;
}
int Cazador::getReflejo(){
	return this->reflejo;
	
}
void Cazador::setReflejo(int reflejo){
	this->reflejo=reflejo;
}

int Cazador::getVelocidadInicial(){
	return velocidadInicial;
}
void Cazador::setVelocidadInicial(int velocidadInicial){
	this->velocidadInicial=velocidadInicial;
}
int Cazador::getAgilidad(){
	return agilidad;
}
void Cazador::setAgilidad(int agilidad){
	this->agilidad=agilidad;
}

Cazador::~Cazador()
{
}
