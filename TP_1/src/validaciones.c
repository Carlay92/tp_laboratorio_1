/*
 * Validaciones.c
 *      Author: carla
 */
#include "validaciones.h"


/// @brief Valida la existencia de datos ingresados por el usuario.
/// @param precio Es el valor ingresado por el usuario.
/// @param kilometros Son los kilometros ingresados.
/// @return Retorna en caso de exito "0" y en caso de error "-1".
int validacionDatos (float precio, int kilometros){
	int retorno;
	retorno = -1;
	if (precio != 0 && kilometros != 0){
		retorno = 0;
	}
	return retorno;
}

/// @brief Toma la cantidad de kilometros ingresadas por el usuario
/// @param mensaje Mensaje a ser mostrado
/// @return Devuelve la cantidad de km que ingresó el usuario.
int getKilometros (char * mensaje){
	int kilometros;

	do{
		printf(mensaje);
		scanf("%d",&kilometros);
	}while (kilometros <=0);
	return kilometros;
}

/// @brief Toma el precio que ingresa el usuario
/// @param mensaje Mensaje a ser mostrado
/// @return Devuelve la suma de dinero ingresada por el usuario
float getPrecio (char * mensaje){
	float precio;
	do{
		printf(mensaje);
		scanf("%f",&precio);
	}while (precio<=0);
	return precio;
}


