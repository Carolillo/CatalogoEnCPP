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
//#include <vector>


class Paciente: public Persona
{

	public :
		/*Constructor*/
		Paciente();
		
		/*Setters y Getters*/
		void addEspecialidad (Especialidad, Medico);
		std::map<Especialidad, Medico> getEspecialidades ();
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
