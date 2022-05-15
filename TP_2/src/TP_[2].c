/*
 ============================================================================
 Name        : TP_[2].c
 Author      : Carla Baro
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayPassenger.h"
#include "funciones.h"

#define LIMITE_PASAJEROS 2000

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int respuesta;

	do {
		respuesta = getOption(&opcion,"Seleccione una opción\n1. ALTA: Ingresar pasajero\n2. MODIFICAR: Modificar 'Nombre','Apellido','Precio de pasaje','Tipo de pasajero' o 'Código de vuelo'\n3. BAJA: Eliminar pasajero definitivamente\n4. INFORMAR:\n5. SALIR\n\n", "No esta eligiendo una opción válida.\n",1,5,5);
		if(!respuesta)
		{
			switch(opcion)

			{
				case 1:

					break;

				case 2:
					break;

				case 3:
					break;

				case 4:
					break;
			}
		 }
		} while (opcion!=5);


	return EXIT_SUCCESS;
}
