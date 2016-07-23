/*
 * Grafo.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: raydelto
 */

#include "Grafo.h"
#include <iostream>

using namespace std;

Grafo::Grafo()
{
	_cola = new Cola();
}

Grafo::~Grafo()
{

}

void Grafo::recorrer(Vertice* inicio)
{

	inicio -> _distancia = 0;
	_cola -> agregar(inicio);
	Vertice* i = NULL;
	Vertice* adyacente = NULL;
	while(!_cola -> estaVacia())
	{
		i = _cola -> extraer();
		if(!i)
		{
			break;
		}
		adyacente = i-> _primer;
		while(adyacente)
		{
			if(adyacente -> _distancia == -1) //Si no he recorrido este vértice
			{
				_cola -> agregar(adyacente);
				adyacente -> _distancia = i -> _distancia + 1;
				adyacente -> _ruta = i;
			}
			adyacente = adyacente -> _siguiente;
		}
	}
}
