/*
 * Paciente.cpp
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */
 
#include <iostream>
#include "Persona.h"
 
using namespace std;
 
Paciente::Paciente()
{
	setNombre("");
	setEdad(0);
}

void Paciente::addEspecialidad(Especialidad especialidad, Medico medico)
{
	especialidades[especialidad] = medico;
}

std::map<Especialidad, Medico> Paciente::getEspecialidades ()
{
	return especialidades;
}
