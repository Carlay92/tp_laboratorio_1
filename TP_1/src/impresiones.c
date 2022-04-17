/*
 * Impresiones.c
 *

 *      Author: carla
 */

#include "impresiones.h"


/// @brief Muestra resultados de los calculos
/// @param mensaje Muestra el nombre de la empresa
/// @param precioDebito Trae el valor del precio con Debito de la empresa solicitada.
/// @param precioCredito Trae el valor del precio con Credito de la empresa solitada.
/// @param precioBitcoin Trae el valor en bitcoins del precio.
/// @param precioUnitario Trae el valor unitario del Km.
void mostrarResultados (char* mensaje, float precioDebito, float precioCredito, float precioBitcoin, float precioUnitario){
	printf(mensaje);
	printf("a) Precio con tarjeta de debito: %.2f\n", precioDebito);
	printf("b) Precio con tarjeta de crédito: %.2f\n", precioCredito);
	printf("c) Precio pagando con Bitcoin: %f\n", precioBitcoin);
	printf("d) Precio unitario: %.2f\n", precioUnitario);
}

/// @brief Muestra el Menu para que el usuario interactúe.
/// @param kilometros Muestra los kilometros ingresados por el usuario. En el caso que aun no lo haya hecho, muestra "0"
/// @param precioAerolineas Muestra el precio ingresado. Si no se ingresó valor, se muestra "0".
/// @param precioLatam
void mostrarMenu (int kilometros, float precioAerolineas, float precioLatam){
		printf("\n Elige una de las siguientes opciones:\n");
		printf("1. Ingresar Kilometros: (Km=%d)\n",kilometros);
		printf("2. Ingresar precio de vuelos: (Aerolineas=%.2f, Latam=%.2f)\n",precioAerolineas,precioLatam);
		printf("3. Calcular todos los costos:\n");
		printf(" a) Tarjeta de débito (descuento 10 porciento)\n");
		printf(" b) Tarjeta de crédito (interés 25 porciento)\n");
		printf(" c) Bitcoin\n");
		printf(" d) Precio por km (precio unitario)\n");
		printf(" e) Diferencia de precio ingresada (Latam - Aerolíneas)\n");
		printf("4. Informar los resultados\n");
		printf("5. Carga forzada de datos\n");
		printf("6. Salir\n");
}
