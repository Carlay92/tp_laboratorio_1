#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayPassenger.h"

///@brief Indica si todas las posiciones del Array se encuentran vacias. (isEmpty)
///@param Passenger*list Puntero al array de pasajeros
///@param int len Longitud del array
///@return int Return (-1) si hay Error [Invalid length or NULL pointer] - (0) si esta Ok
int initPassengers(Passenger*list, int len)
{
	int retorno = -1;
	int i;

	if(list != NULL && len > 0)
	{
	retorno = 0;
		for(i = 0; i < len; i++)
		{
			list[i].isEmpty = 1;
		}
	}
	return retorno;
}
/// @brief Construye el perfil de un pasajero con datos a ingresarse
/// @param list puntero al Array de pasajeros
/// @param len longitud del Array
/// @param pId puntero al ID
/// @param pIndex puntero al Indice
/// @return Valor de validacion
int createPassenger (Passenger* list, int len, int*pId,int*pIndex)
{
	int retorno = -1;
	int id = *pId;
	char name[51];
	char lastName[51];
	float price;
	int type;
	char flyCode[10];
	int status;
	int position = *pIndex;

	if(list != NULL && len > 0)
	{
		retorno = 0;
		do
		{
			getDatoAlfa(name, "Ingrese Nombre:\n","No está ingresando un nombre válido\n",2, 51, 10);






		}while();

	}

	return retorno;
}


///brief add in a existing list of passengers the values received as parameters in the first empty position
///param list passenger*
///param len int
///param id int
///param name[] char
///param lastName[] char
///param price float
///param typePassenger int
///param flycode[] char
///return int Return (-1) if Error [Invalid length or NULL pointer or without free space] - (0) if Ok
int addPassenger(Passenger*list, int len, int id, char name[],char lastName[],float price,int typePassenger, char flycode[], char status, int*pIndice)
{
	int retorno = -1;



	return retorno;
}

///brief encuentra a un Passenger por el Id y retorna la posicion del Index del array.
///param list Passenger*
///param len int
///param id int
///return Return passenger index position or (-1) if [Invalid length or NULL pointer received or passenger not found]
int findPassengerById(Passenger* list, int len,int id)
{
return NULL
}

///brief Elimina un Passenger mediante su Id (put isEmpty Flag in 1)
///param list Passenger*
///param len int
///param id int
///return int Return (-1) if Error [Invalid length or NULL pointer or if can't find a passenger] - (0) if Ok
int removePassenger(Passenger* list, int len, int id)
{
return -1;
}

///brief Ordena los elementos dentro del array de Passenger, el paramentro indica el modo de ordenar (UP DOWN)
///param list Passenger*
///param len int
///param order int [1] indicate UP - [0] indicate DOWN
/// return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
int sortPassengers(Passenger* list, int len, int order)
{
return 0;
}

///brief print the content of passengers array
///param list Passenger*
///param length int
///return int

int printPassenger(Passenger* list, int length)
{
return 0;
}
