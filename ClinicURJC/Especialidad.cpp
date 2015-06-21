/*
 * Paciente.cpp
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */
 
#include "Especialidad.h"

#include <iostream>
#include "Medico.h"
 
using namespace std;
 
Especialidad::Especialidad()
{
	medicos = {};
}

void Especialidad::setNombre (std::string nombreEspec) {
	nombre = nombreEspec;
}

void Especialidad::setJefe (Medico medico) {
	jefeDeServicio = medico;
}

void Especialidad::setMedico(Medico mMedico)
{
	medicos.push_back(mMedico);
}

void Especialidad::setEnfermero(Enfermero mEnfermero)
{
	enfermero = mEnfermero;
}

std::string Especialidad::getNombre ()
{
	return nombre;
}

Medico Especialidad::getJefe()
{
	return jefeDeServicio;
}

std::vector<Medico> Especialidad::getMedicos()
{
	return medicos;
}

Enfermero Especialidad::getEnfermero ()
{
	return enfermero;
}
