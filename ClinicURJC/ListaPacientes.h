/*
 * ListaPacientes.h
 *
 *  Created on: 21-jun-2015
 *      Author: Neck
 */

#ifndef ClinicURJC_ListaPacientes_H
#define ClinicURJC_ListaPacientes_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "NodoPaciente.h"
#include "NodoPaciente.cpp"

using namespace std;


template <class Paciente>

class ListaPacientes
{

	public:
    	ListaPacientes();
    	~ListaPacientes();

    	void add_head(Paciente);
    	void add_end(Paciente);
    	void del_all();
    	void fill_by_user(int);
    	void load_file(string);
    	void print();
    	void save_file(string);
    	Paciente search(std::string);

private:
    NodoPaciente<Paciente> *m_head;
    int m_num_nodes;


};



#endif /* ClinicURJC_ListaPacientes_H */
