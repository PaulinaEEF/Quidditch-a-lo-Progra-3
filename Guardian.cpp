#include "Guardian.h"

Guardian::Guardian(string nombre, int anioCursado, string casa, int numeroCamiseta, int peso, int reflejo):Jugador(nombre, anioCursado, casa, numeroCamiseta)
{
	this->peso=peso;
	this->reflejo=reflejo;
	velocidadInicial = (200/peso)*7;
	agilidad = reflejo + 7;
}

bool Guardian::ModoJuego(int velocidad){
	//Agilidad > Velocidad de cualquier Cazador del equipo contrario
	if(agilidad > velocidad){
		agilidad+=8;
		return true;
	}else{
		return false;
	}
	
}
bool Guardian::Trampa(){
	srand((unsigned)time(0));
	int numeroRandom = rand() % 100;
	//tiene un 13% chance de funcionar
	if(numeroRandom>13){
		return false;
	}else{
		return true;
	}
	
}

int Guardian::getPeso(){
	return this->peso;
	
}
void Guardian::setPeso(int peso){
	this->peso=peso;
}
int Guardian::getReflejo(){
	return this->reflejo;
	
}
void Guardian::setReflejo(int reflejo){
	this->reflejo=reflejo;
}

int Guardian::getVelocidadInicial(){
	return velocidadInicial;
}
void Guardian::setVelocidadInicial(int velocidadInicial){
	this->velocidadInicial=velocidadInicial;
}
int Guardian::getAgilidad(){
	return agilidad;
}
void Guardian::setAgilidad(int agilidad){
	this->agilidad=agilidad;
}

Guardian::~Guardian()
{
}
