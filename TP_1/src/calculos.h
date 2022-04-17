/*
 * Calculos.h
 *
 *      Author: carla
 */
#ifndef CALCULOS_H_
#define CALCULOS_H_

#include <stdio.h>
#include <stdlib.h>

float calcularDebito (float precio);
float calcularCredito (float precio);
float calcularBitcoin (float precio);
float calcularPrecioUnitario (float precio, int kilometros);
float calcularDiferencia(float precioUno, float precioDos);

void calculos(float *debito,float *credito,float *bitcoin,float *unitario, float precioEmpresa,int kilometros);

#endif /* CALCULOS_H_ */
