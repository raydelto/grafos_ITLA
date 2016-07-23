/*
 * Grafo.h
 *
 *  Created on: Jul 18, 2016
 *      Author: raydelto
 */

#ifndef GRAFO_H_
#define GRAFO_H_
#include "Cola.h"
class Grafo
{
public:
	Grafo();
	virtual ~Grafo();
	void recorrer(Vertice* inicio);
private:
	Cola* _cola;
};

#endif /* GRAFO_H_ */
