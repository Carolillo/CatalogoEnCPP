/*
 * Paciente.h
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */

#ifndef ClinicURJC_Paciente_H
#define ClinicURJC_Paciente_H
#include <string.h>

class Paciente: public Persona
{

	public :
		/*Constructor*/
		Paciente();
		
		/*Setters y Getters*/
		void setNombre (std::string);
		void setEdad (int);
		void addServicio (std::string, Medico);
		
		std::string getNombre ();
		int getEdad ();
		
				
		
	private :
	
		/*Atributos*/
		
		
//		std::string nombre;
//		int edad;


};



#endif /* PERSONA_H_ */
