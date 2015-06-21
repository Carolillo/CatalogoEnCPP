/*
 * Persona.cpp
 *
 *  Created on: 20-jun-2015
 *      Author: Neck
 */
 
 #include <iostream>
 #include "Persona.h"
 
 using namespace std;
 
 Persona::Persona()
 {
	 setNombre("");
	 setEdad(0);
 }
 
 std::string Persona::getNombre ()
 {
	 return nombre;
 }
 
 int Persona::getEdad ()
 {
	 return edad;
 }
 
 void Persona::setNombre (std::string n)
 {
	 nombre= n;
 }
 
 void Persona::setEdad (int a)
 {
	 edad= a;
 }
 
