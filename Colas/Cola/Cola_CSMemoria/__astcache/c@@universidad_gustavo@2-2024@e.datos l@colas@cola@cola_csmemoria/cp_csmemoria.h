﻿//---------------------------------------------------------------------------

#ifndef CP_CSMemoriaH
#define CP_CSMemoriaH
#include "CSMemoria.h"
#include <string>
//---------------------------------------------------------------------------
using namespace std;
class Pila_CSMemoria{
private:
	int tope;
	CSMemoria* m;

public:
	Pila_CSMemoria();
	Pila_CSMemoria(CSMemoria*);
	bool vacia();
	void meter(int);
	void sacar(int&);
	int sacar();
	int cima();
	void mostrar(int,int,TCanvas*);
	//Posfija_Prefija
	double evaluar_PosFija(AnsiString,int,int,TCanvas*);
	double evaluar_PreFija(AnsiString,int,int,TCanvas*);
	double evaluar(int,char,int);
	bool esOperador(char);
	int prioridad(char);
	string invertido(string);
	string postfija(string,int,int,TCanvas*);
	string prefija(string,int,int,TCanvas*);
	bool parentesisOk(string);
};
#endif