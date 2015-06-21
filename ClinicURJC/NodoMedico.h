/*
 * NodoMedico.h
 *
 *  Created on: 21-jun-2015
 *      Author: Neck
 */


#ifndef NodoMedico_H
#define NodoMedico_H

#include <iostream>
#include "Medico.h"

using namespace std;

template <class Medico>

class NodoMedico
{
    public:
        NodoMedico();
        NodoMedico(Medico);
        ~NodoMedico();

        NodoMedico *next;
        Medico datos;

        void delete_all();
        void print();
};

#endif // NodoMedico_H
