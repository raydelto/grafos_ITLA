/*
 * Vertice.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: raydelto
 */

#include "Vertice.h"

Vertice::Vertice(std::string nombre)
{
	_nombre = nombre;
	_primer = NULL;
	_ultimo = NULL;
	_siguiente = NULL;
	_ruta = NULL;
	_distancia = -1;
}

Vertice::~Vertice()
{

}

void Vertice::agregarAdyacencia(Vertice* vertice)
{
	if(!_primer) //si  estå vacía
	{
		_primer = vertice;
		_ultimo = vertice;
	}else // si no está vacía
	{
		_ultimo -> _siguiente = vertice;
		_ultimo = vertice;
	}
}
