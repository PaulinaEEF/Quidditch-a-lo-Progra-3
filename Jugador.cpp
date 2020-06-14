#include "Jugador.h"

Jugador::Jugador(string nombre, int anioCursado, string casa, int numeroCamiseta, int peso, int reflejo, int musculatura)
{
	this->nombre=nombre;
	this->anioCursado = anioCursado;
	this->casa=casa;
	this->numeroCamiseta=numeroCamiseta;
	this->peso=peso;
	this->reflejo=reflejo;
	this->musculatura=musculatura;
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
int Jugador::getPeso(){
	return this->peso;
	
}
void Jugador::setPeso(int peso){
	this->peso=peso;
}
int Jugador::getReflejo(){
	return this->reflejo;
	
}
void Jugador::setReflejo(int reflejo){
	this->reflejo=reflejo;
}
int Jugador::getMusculatura(){
	return this->musculatura;
	
}
void Jugador::setMusculatura(int musculatura){
	this->musculatura=musculatura;
}


Jugador::~Jugador()
{
}
