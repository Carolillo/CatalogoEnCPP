/*
 * NodoPaciente.cpp
 *
 *  Created on: 21-jun-2015
 *      Author: Neck
 */

#include "NodoPaciente.h"
#include "Paciente.h"

// Constructor por defecto
template<typename Paciente>

NodoPaciente<Paciente>::NodoPaciente()
{
    datos = NULL;
    next = NULL;
}

// Constructor por parámetro
template<typename Paciente>
NodoPaciente<Paciente>::NodoPaciente(Paciente data_)
{
//    datos = data_;
	Paciente datos(data_.getNombre(),data_.getEdad())
    next = NULL;
}

// Eliminar todos los Nodos
template<typename Paciente>
void NodoPaciente<Paciente>::delete_all()
{
    if (next)
        next->delete_all();
    delete this;
}

// Imprimir un Nodo
template<typename Paciente>
void NodoPaciente<Paciente>::print()
{
    	cout << "Nombre: " << datos.getNombre() << "    Edad: " << datos.getEdad() << end1;
    	cout << datos.showEspecialidades() << end1;
}

template<typename Paciente>
NodoPaciente<Paciente>::~NodoPaciente() {}
