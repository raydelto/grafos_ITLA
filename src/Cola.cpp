/*
 * Cola.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: raydelto
 */

#include "Cola.h"

Cola::Cola(): _primer(NULL), _ultimo(NULL) , _tamano(0)
{

}

Cola::~Cola()
{

}

void Cola::agregar(Vertice* elemento)
{
	_tamano++;
	if(!_primer) //Está vacia
	{
		_primer = elemento;
		_ultimo = elemento;
	}else // No está vacía
	{
		_ultimo -> _siguiente = elemento;
		_ultimo = elemento;
	}
}

Vertice* Cola::extraer()
{
	if(!_primer) //la cola está vacía
	{
		return NULL;
	}
	Vertice* retorno = _primer;
	_primer = _primer ->_siguiente;
	_tamano--;
	return retorno;
}


bool Cola::estaVacia()
{
	return _tamano == 0;
}
