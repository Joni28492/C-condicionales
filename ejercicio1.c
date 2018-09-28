/*
cabecera 1
Escribir un programa que lea dos números desde el teclado y si el primero es mayor que el segundo intercambie sus valores.
*/
//incluimos la librearia
#include "ejercicio1.h"


/**
*Realizacion de ejercicio 1 del dia @date 20/07/2018
*@param  a  int primero de los valores con los que operamos 
*@param  b  int primero de los valores con los que operamos 		 
*@see  intercambio de valores mediante punteros
*/
void ejercicio1(int *a, int *b){
	
	
	int c=0;
	c=*a;
	*a=*b;
	*b=c;
	
	
	
}


/**
*Realizacion de ejercicio 1 del dia @date 20/07/2018
*el ejercicio consiste en saber si el primer numero es mayor que el segundo
*@param  a  int primero de los valores con los que operamos 
*@param  b  int primero de los valores con los que operamos 		 
*@return 1 si es mayor, 0 si no lo es
*/
int ejercio1a(int a, int b){
	
	if(a>b) return 1;
	else return 0;
	
	return -1;	
}