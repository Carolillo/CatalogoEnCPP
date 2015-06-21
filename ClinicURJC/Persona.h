/*
 * Persona.h
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */

#ifndef ClinicURJC_Persona_H
#define ClinicURJC_Persona_H
#include <string.h>

class Persona
{

	public :
		/*Constructor*/
		Persona();

		/*Setters y Getters*/
		void setNombre (std::string);
		void setEdad (int);
		std::string getNombre ();
		int getEdad ();

	private :

		/*Atributos*/
		std::string nombre;
		int edad;

};



#endif /* Persona_H_ */
