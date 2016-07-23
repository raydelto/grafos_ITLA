/*
 * Cola.h
 *
 *  Created on: Jul 18, 2016
 *      Author: raydelto
 */

#ifndef COLA_H_
#define COLA_H_
#include "Vertice.h"
class Cola
{
public:
	Cola();
	virtual ~Cola();
	void agregar(Vertice* elemento);
	Vertice* extraer();
	bool estaVacia();
private:
	Vertice* _primer;
	Vertice* _ultimo;
	int _tamano;

};

#endif /* COLA_H_ */
