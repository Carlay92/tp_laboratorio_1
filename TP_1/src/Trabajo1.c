/*
 ============================================================================
 Name        : Trabajo1.c
 Author      : Carla Baro
 Class: 1E
 Description : UTN TRABAJO PRACTICO N1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "calculos.h"
#include "impresiones.h"
#include "validaciones.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int kilometros;
	float precioAerolineas;
	float precioLatam;
	float precioTarjetaDebitoAerolineas;
	float precioTarjetaDebitoLatam;
	float precioTarjetaCreditoAerolineas;
	float precioTarjetaCreditoLatam;
	float precioBitcoinAerolineas;
	float precioBitcoinLatam;
	float precioPorKmAerolineas;
	float precioPorKmLatam;
	float diferenciaDePrecios;
	int validacionAerolineas;
	int validacionLatam;
	kilometros = 0;
	precioAerolineas = 0;
	precioLatam = 0;

	do{
		mostrarMenu(kilometros,precioAerolineas,precioLatam);
		scanf("%d",&opcion);
		if (opcion>=1 && opcion <=6){
			switch (opcion){
				case 1:
					kilometros = getKilometros("Ingrese cantidad de kilometros:\n");
				break;
				case 2:
					precioAerolineas = getPrecio ("Ingrese precio del vuelo en Aerolineas:\n");
					precioLatam = getPrecio ("Ingrese precio del vuelo en Latam:\n");
				break;
				case 3:
					validacionAerolineas = validacionDatos(precioAerolineas,kilometros);
					validacionLatam = validacionDatos(precioLatam,kilometros);
					if (validacionAerolineas == 0){
							calculos(&precioTarjetaDebitoAerolineas,&precioTarjetaCreditoAerolineas,&precioBitcoinAerolineas,&precioPorKmAerolineas,precioAerolineas,kilometros);
					}
					if (validacionLatam == 0){
							calculos(&precioTarjetaDebitoLatam,&precioTarjetaCreditoLatam,&precioBitcoinLatam,&precioPorKmLatam,precioLatam,kilometros);
					}
					if (validacionLatam == 0 && validacionAerolineas == 0){
							diferenciaDePrecios = calcularDiferencia(precioAerolineas,precioLatam);
					}
				break;
				case 4:
					if (validacionLatam == 0){
						mostrarResultados("Latam:\n",precioTarjetaDebitoLatam,precioTarjetaCreditoLatam,precioBitcoinLatam,precioPorKmLatam);
					}
					if (validacionAerolineas == 0){
						mostrarResultados("Aerolineas:\n",precioTarjetaDebitoAerolineas,precioTarjetaCreditoAerolineas,precioBitcoinAerolineas,precioPorKmAerolineas);
					}
					if (validacionLatam == 0 && validacionAerolineas == 0){
						printf("La difencia de precios es: %.2f\n",diferenciaDePrecios);
					}
				break;
				case 5:
					calculos(&precioTarjetaDebitoLatam,&precioTarjetaCreditoLatam,&precioBitcoinLatam,&precioPorKmLatam,159339,7090);
					calculos(&precioTarjetaDebitoAerolineas,&precioTarjetaCreditoAerolineas,&precioBitcoinAerolineas,&precioPorKmAerolineas,162956,7090);
					diferenciaDePrecios = calcularDiferencia(159339,162956);
					mostrarResultados("Latam\n",precioTarjetaDebitoLatam,precioTarjetaCreditoLatam,precioBitcoinLatam,precioPorKmLatam);
					mostrarResultados("\nAerolineas:\n",precioTarjetaDebitoAerolineas,precioTarjetaCreditoAerolineas,precioBitcoinAerolineas,precioPorKmAerolineas);
					printf("\nLa difencia de precios es: %.2f\n",diferenciaDePrecios);
				break;
			}
		}else{
				printf("Elija una opción correcta\n");
			}
	}while (opcion != 6);

	return EXIT_SUCCESS;
}

