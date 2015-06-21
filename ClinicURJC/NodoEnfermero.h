/*
 * NodoPaciente.h
 *
 *  Created on: 21-jun-2015
 *      Author: Neck
 */


#ifndef NodoPaciente_H
#define NodoPaciente_H

#include <iostream>
#include "Paciente.h"

using namespace std;

template <class Paciente>

class NodoPaciente
{
    public:
        NodoPaciente();
        NodoPaciente(Paciente);
        ~NodoPaciente();

        NodoPaciente *next;
        Paciente datos;

        void delete_all();
        void print();
};

#endif // NodoPaciente_H
