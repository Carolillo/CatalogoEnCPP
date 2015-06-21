/*
 * Paciente.cpp
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */
 
#include <iostream>
#include "Paciente.h"
 
using namespace std;
 
Paciente::Paciente()
{
	setNombre("");
	setEdad(0);
}

Paciente::Paciente(std::string nombre, int edad, Especialidad especialidad, Medico medico)
{
	Paciente::setNombre(nombre);
	Paciente::setEdad(edad);
	Paciente::addEspecialidad(especialidad, medico);
}

Paciente::Paciente(std::string nombre, int edad, std::map<Especialidad, Medico> especialidades)
{
	Paciente::setNombre(nombre);
	Paciente::setEdad(edad);
	Paciente::addEspecialidades(especialidades);
}

void Paciente::addEspecialidad(Especialidad especialidad, Medico medico)
{
	/**
	 * Detectar si especialidad existe
	 */
	especialidades[especialidad] = medico;
}

void Paciente::addEspecialidades (std::map<Especialidad, Medico> mEspecialidades)
{
	especialidades = mEspecialidades;
}

std::map<Especialidad, Medico> Paciente::getEspecialidades ()
{
	return especialidades;
}
