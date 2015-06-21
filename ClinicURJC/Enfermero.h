/*
 * Enfermero.h
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */

#ifndef ClinicURJC_Enfermero_H
#define ClinicURJC_Enfermero_H
#include <string.h>
#include "Especialidad.h"
#include "Persona.h"

class Enfermero: public Persona
{

	public :
		/*Constructor*/
	Enfermero();
		
		/*Setters y Getters*/
		void setEspecialidad(Especialidad);
		Especialidad getEspecialidad();

	private :
		/*Atributos*/
		Especialidad especialidad;
		
//		std::string nombre;
//		int edad;
};

#endif /* Enfermero_H_ */
