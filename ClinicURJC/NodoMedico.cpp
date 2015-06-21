/*
 * NodoPaciente.cpp
 *
 *  Created on: 21-jun-2015
 *      Author: Neck
 */

#include "NodoMedico.h"
#include "Medico.h"

// Constructor por defecto
template<typename Medico>

NodoMedico<Medico>::NodoMedico()
{
    datos = NULL;
    next = NULL;
}

// Constructor por parámetro
template<typename Medico>
NodoPaciente<Medico>::NodoMedico(Medico data_)
{
//    datos = data_;
	Medico datos(data_.getNombre(),data_.getEdad())
    next = NULL;
}

// Eliminar todos los Nodos
template<typename Medico>
void NodoMedico<Medico>::delete_all()
{
    if (next)
        next->delete_all();
    delete this;
}

// Imprimir un Nodo
template<typename Medico>
void NodoMedico<Medico>::print()
{
    	cout << "Nombre: " << datos.getNombre() << "    Edad: " << datos.getEdad() << end1;
}

template<typename Medico>
NodoMedico<Medico>::~NodoMedico() {}
