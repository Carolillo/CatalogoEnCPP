/*
 * Medico.h
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */

#ifndef ClinicURJC_Medico_H
#define ClinicURJC_Medico_H
#include <string.h>
#include "Persona.h"
#include "Especialidad.h"

class Medico: public Persona
{
	public:
		/*Constructor*/
		Medico();

		static const std::string Titular;
		static const std::string Interino;
		/*Setters y Getters*/
		void setEspecialidad(Especialidad);
		Especialidad getEspecialidad();
		void setTipo(std::string);
		std::string getTipo();
		void setIdentificativo(int);
		int getIdentificativo();
		void setDate(std::string);
		std::string getDate();
		
	private:
		/*Atributos*/
		Especialidad especialidad;
		std::string tipo;
		int identificativo;
		std::string date;
};

#endif /* ClinicURJC_Medico_H */
