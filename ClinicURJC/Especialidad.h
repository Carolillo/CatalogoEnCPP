/*
 * Especialidad.h
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */

#ifndef ClinicURJC_Especialidad_H
#define ClinicURJC_Especialidad_H
#include "Medico.h"
#include "Enfermero.h"
#include <string.h>

class Especialidad
{

	public :
		/*Constructor*/
		Especialidad();
		
		/*Setters y Getters*/
		void setNombre (std::string);
		void setJefe (Medico);
		void setMedico(Medico);
		void setEnfermero(Enfermero);

		std::string getNombre ();
		Medico getJefe();
		std::vector<Medico> getMedicos();
		Enfermero getEnfermero ();
		
				
		
	private :
		/*Atributos*/

		std::string nombre;
		Medico jefeDeServicio;
		std::vector<Medico> medicos;
		Enfermero enfermero;
};



#endif /* Especialidad_H_ */
