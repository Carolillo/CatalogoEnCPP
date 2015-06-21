/*
 * Enfermero.cpp
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */
 
#include <iostream>
#include "Enfermero.h"

using namespace std;
 
Enfermero::Enfermero()
{
	setNombre("");
	setEdad(0);
}

void Enfermero::setEspecialidad(Especialidad mEspecialidad)
{
	especialidad = mEspecialidad;
}

Especialidad Enfermero::getEspecialidad()
{
	return especialidad;
}
