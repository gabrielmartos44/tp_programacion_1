/*
 * funciones.h
 *
 *  Created on: 15 abr. 2022
 *      Author: Gabriel
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int menu();
float pedirkm();

int subMenuAereolineas();
void pedirAerolineas(float*, float*, int);
float calculadorDescuento(float);
float calculadorAumento(float);
float calculadorBitcoin(float);
float calculadorPrecioxKm(float,float);
float diferenciadePrecio(float,float);


#endif /* FUNCIONES_H_ */
