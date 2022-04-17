/*
 * Calculos.c
 *
 *      Author: carla
 */
#include "calculos.h"


/// @brief Calcula el valor con descuento especifico segun el precio ingresado.
/// @param precio Es el valor a utilizar para calcular el descuento.
/// @return Retorna el resultado, es decir, el total de precio con el descuento.
float calcularDebito (float precio){
	float precioDebito;
	precioDebito = precio - (precio * 10/100);
	return precioDebito;
	}

/// @brief Calcula el valor con interés específico segun el precio ingresado.
/// @param precio Es el valor a utiliza para calcular el interés.
/// @return Retorna el resultado, es decir, el total de precio con interes.
float calcularCredito (float precio){
	float precioCredito;
	precioCredito = precio + (precio * 25/100);
	return precioCredito;
	}

/// @brief Calcula el precio en relacion con la cotización del bitcoin.
/// @param precio Es el valor que ultiliza para calcular el precio en Bitcoin.
/// @return Retorna el precio, convertido en moneda Bitcoin.
float calcularBitcoin (float precio){
	float precioBitcoin;
	float cotizacionBitcoin;
	cotizacionBitcoin = 4785633.47;
	precioBitcoin = precio/cotizacionBitcoin;
	return precioBitcoin;
	}

/// @brief Calcula el valor unitario del Km, dividiendo el valor total por la cantidad de kilometros.
/// @param precio Es el precio total del vuelo.
/// @param kilometros Es la cantidad de Km del vuelo.
/// @return Retorna el precio unitario del Km.
float calcularPrecioUnitario (float precio, int kilometros){
	float precioUnitario;
	precioUnitario = precio/kilometros;
	return precioUnitario;
	}

/// @brief Calcula la diferencia entre dos precios ingresados.
/// @param precioUno Valor del vuelo A.
/// @param precioDos Valor del vuelo B.
/// @return Retorna la diferencia de precios entre el vuelo A y el vuelo B.
float calcularDiferencia(float precioUno, float precioDos){
	float diferenciaPrecio;
	if (precioUno<precioDos){
		diferenciaPrecio = precioDos - precioUno;
	}else{
		diferenciaPrecio = precioUno - precioDos;
	}
	return diferenciaPrecio;
	}

/// @brief Realiza todos los calculos, agrupando todas las funciones en una sola funcion.
/// @param debito Direccion de memoria donde se guarda el precio pagando con Debito
/// @param credito Direccion de memoria donde se guarda el precio pagando con Credito
/// @param bitcoin Direccion de memoria donde se guarda el precio pagando con Bitcoin
/// @param unitario Direccion de memoria donde se guarda el valor en Bitcoin
/// @param precioEmpresa Precio de la empresa en particular, que se utiliza como base para realizar los calculos
/// @param kilometros Kilometros que se utilizaran para calcular el valor unitario.
void calculos(float *debito,float *credito,float *bitcoin,float *unitario, float precioEmpresa,int kilometros){
	*debito = calcularDebito(precioEmpresa);
	*credito = calcularCredito(precioEmpresa);
	*bitcoin = calcularBitcoin(precioEmpresa);
	*unitario = calcularPrecioUnitario(precioEmpresa,kilometros);
	}


