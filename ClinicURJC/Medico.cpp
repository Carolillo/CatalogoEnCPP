/*
 * Medico.cpp
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */
 
#include <iostream>
#include "Persona.h"
#include "Medico.h"
 
using namespace std;
 
Medico::Medico()
{
	identificativo = 0;
	date = "";
}

void Medico::setEspecialidad(Especialidad mEspecialidad)
{
	especialidad = mEspecialidad;
}

Especialidad Medico::getEspecialidad()
{
	return especialidad;
}

void Medico::setTipo(std::string mTipo)
{
	tipo = mTipo;
}

std::string Medico::getTipo()
{
	return tipo;
}

void Medico::setIdentificativo(int ident)
{
	identificativo = ident;
}

int Medico::getIdentificativo()
{
	return identificativo;
}

void  Medico::setDate(std::string mDate)
{
	date = mDate;
}

std::string Medico::getDate()
{
	return date;
}
