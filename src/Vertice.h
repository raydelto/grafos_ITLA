/*
 * Vertice.h
 *
 *  Created on: Jul 18, 2016
 *      Author: raydelto
 */

#ifndef VERTICE_H_
#define VERTICE_H_
#include <string>

class Vertice
{
public:
	Vertice(std::string nombre);
	virtual ~Vertice();
	void agregarAdyacencia(Vertice* vertice);
	int getDistancia() 		 { return _distancia; }
	std::string getNombre()  { return _nombre;	}

private:

	Vertice* _primer;
	Vertice* _ultimo;
	Vertice* _siguiente;
	Vertice* _ruta;
	int _distancia;
	std::string _nombre;
	friend class Cola;
	friend class Grafo;

};

#endif /* VERTICE_H_ */
