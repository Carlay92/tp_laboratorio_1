#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

/// @brief muestra la impresion de un mensaje, sin interaccion
/// @param mensaje a imprimir
void mostrarMensaje(char*mensaje)
{
	printf(mensaje);
}

/// @brief Toma una opcion de un menu y la devuelve por puntero
/// @param pOpcion valor por referencia
/// @param mensaje
/// @param mensajeError
/// @param minimo
/// @param maximo
/// @param reintentos
/// @return validacion de funcion
int getOption (int*pOpcion, char*mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno;
	int bufferOpcion;
	retorno = -1;
	if (pOpcion != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos > 0)
		do
		{
		printf("%s\n",mensaje);
		scanf("%d",&bufferOpcion);
			if(bufferOpcion>maximo || bufferOpcion<minimo)
			{
			printf("%s\n",mensajeError);
			reintentos--;
			} else
					{
					*pOpcion = bufferOpcion;
					retorno=0;
					}
		}while(reintentos!=0);
	return retorno;
}

/// @brief Toma un dato
/// @param pDato
/// @param mensaje
/// @param mensajeError
/// @param minimo
/// @param maximo
/// @param reintentos
/// @return
int getDatoAlfa(char pDato[], char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	char cadenaChars[maximo];

	if(pDato != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
	  do
		{
		  printf(mensaje);
			/*if(funcionparatomarelnombrevalidada(cadenaChars, minimo, maximo) == 0)
			{
				strncpy(pDato,cadenaChars,maximo);
				retorno = 0;
				break;
			}
			reintentos--;
			printf("%s",mensajeError);*/
		}while(reintentos >= 0);
	}

	return retorno;
}

