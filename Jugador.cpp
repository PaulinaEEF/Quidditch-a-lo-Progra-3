#include "Jugador.h"

Jugador::Jugador(string nombre, int anioCursado, string casa, int numeroCamiseta)
{
	this->nombre=nombre;
	this->anioCursado = anioCursado;
	this->casa=casa;
	this->numeroCamiseta=numeroCamiseta;
	
}

string Jugador::getNombre(){
	return this->nombre;
	
}
void Jugador::setNombre(string nombre){
	this->nombre=nombre;
}
int Jugador::getAnioCursado(){
	return this->anioCursado;
	
}
void Jugador::setAnioCursado(int anioCursado){
	this->anioCursado = anioCursado;
}
string Jugador::getCasa(){
	return this->casa;
	
}
void Jugador::setCasa(string casa){
	this->casa=casa;
}
int Jugador::getNumeroCamista(){
	return this->numeroCamiseta;
	
}
void Jugador::setNumeroCamista(int numeroCamiseta){
	this->numeroCamiseta=numeroCamiseta;
}


Jugador::~Jugador()
{
}
