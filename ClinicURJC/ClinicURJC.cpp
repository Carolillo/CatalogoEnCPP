/*
 * ClinicURJC.cpp
 *
 *  Created on: 21/6/2015
 *      Author: Neck
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int option = 0;
	std::string ClearScreen = "";
	strcpy(ClearScreen, "clear");             /* Descomentar para sistemas Unix, OS X*/
	/*  strcpy(ClearScreen, "cls");               /* Descomentar para sistemas Windowds */

	printf("\n\n          PLANIFICADOR DE EVENTOS PARA REUNIONES");

	/* Ejecutamos el menu inicial excepto en el caso de introducir la opci�n 4 */
	  while(option != 4) {
	    printf("\n\n1. Médico titular.\n");
	    printf("2. Enfermero.\n");
	    printf("3. Pacientes.\n");
	    printf("4. Salir\n");
	    option = scanf_entero();                /* Invocamos el procedimiento scanf_entero declarado en 'Funciones.h' */
	    system(ClearScreen);                    /* Borramos pantalla */
	    printf("\n\n          PLANIFICADOR DE EVENTOS PARA REUNIONES\n\n");

	    if(option == '\0') {                    /* El caracter introducido no es n�mero */
	      printf("\n<<ERROR: Introduzca un numero>>\n");
	    } else {

	      switch (option) {
	        case 1 :
	          preferencias.AnnadirPreferencia(preferencia);
	          break;
	        case 2 :
	          preferencias.ImprimirPreferencias();
	          break;
	        case 3 :
	          fechasElegidas.ObtenerFechasElegidasAPartirDeLasPreferencias(preferencias);
	          fechasElegidas.OrdenarFechasElegidas();
	          fechasElegidas.ImprimirFechasElegidas();
	          break;
	        case 4 :
	          break;
	        default :
	          printf("\n<<ERROR: Opcion incorrecta>>\n"); /* No se ha introducido ninguno de los n�meros de opci�n */
	      }
	    }
	  }
}
