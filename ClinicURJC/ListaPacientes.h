/*
 * ListaPacientes.h
 *
 *  Created on: 20-jun-2015
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
    	void add_sort(Paciente);
    	void concat(ListaPacientes);
    	void del_all();
    	void del_by_data(Paciente);
    	void del_by_position(int);
    	void fill_by_user(int);
    	void fill_random(int);
    	void intersection(ListaPacientes);
    	void invert();
    	void load_file(string);
    	void print();
    	void save_file(string);
    	void search(Paciente);
    	void sort();

private:
    NodoPaciente<Paciente> *m_head;
    int m_num_nodes;


};



#endif /* ClinicURJC_ListaPacientes_H */
