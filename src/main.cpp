//============================================================================
// Name        : Grafos.cpp
// Author      : Raydelto Hernandez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Grafo.h"
int main()
{
	Vertice* a = new Vertice("A");
	Vertice* b = new Vertice("B");
	Vertice* c = new Vertice("C");
	c-> agregarAdyacencia(b);
	b-> agregarAdyacencia(a);
	b-> agregarAdyacencia(c);
	Grafo* grafo = new Grafo();
	grafo -> recorrer(c);
	cout << "La distancia entre A y C es de " << a -> getDistancia() << endl;

	return 0;
}
