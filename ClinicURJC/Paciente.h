/*
 * Paciente.h
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */

#ifndef ClinicURJC_Paciente_H
#define ClinicURJC_Paciente_H
#include <string.h>
#include <map>
#include "Especialidad.h"
#include "Medico.h"


class Paciente: public Persona
{

	public :
		/*Constructor*/
		Paciente();
		Paciente(std::string, int, Especialidad, Medico);
		Paciente(std::string, int, std::map<Especialidad, Medico>);
		
		/*Setters y Getters*/
		void addEspecialidad (Especialidad, Medico);
		void addEspecialidades (std::map<Especialidad, Medico>);
		void showEspecialidades ();
		std::map<Especialidad, Medico> getEspecialidades();
		/*Shadows*/
		//getNombre();
		//getEdad()
		//setNombre(string)
		//setEdad(int)

	private :
		/*Atributos*/
		std::map<Especialidad, Medico> especialidades;
};



#endif /* Paciente_H_ */
