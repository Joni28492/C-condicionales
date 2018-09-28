/*main general cabecera*/
/*
*Realizacion de ejercicio de cabeceras @date 20/07/2018
*el ejercicio consiste en utilizar archivos de cabecera

*/
#include <stdio.h>
#include "ejercicio1.h"
#include "ejercicio2.h"
#include "ejercicio3.h"

int main(int argc, char** argv){
	
	
	int a=0, b=0, c=0;
	float bruto=0;
	
	//ejercicio1
	printf("introduce primer numero\n");
	scanf("%i", &a);
	printf("introduce segundo numero numero\n");
	scanf("%i", &b);
	
	if(ejercicio1a)
		printf("el numero %i es mayor que el numero %i\n", a, b);
	else
		printf("el numero %i es menor que el numero %i\n", a, b);
	
	printf("%i => %i\n", a, b);
	ejercicio1(&a,&b);
	printf("%i => %i\n", a, b);
	//ejercicio 2
	printf("introduce la cantidad bruta\n");
	scanf("%f", &bruto);
	
	printf("la cantidad se resuelve en %.2f\n", ejercicio2(bruto));
	
	//ejercicio3
	printf("introduce horas\n");
	scanf("%i", &a);
	
	do{
	printf("introduce minutos\n");
	scanf("%i", &b);
	}while(b>59);
	
	do{
	printf("introduce segundos\n");
	scanf("%i", &c);
	}while(c>59);
	
	printf("son las %i:%i:%i\n",a,b,c);
	
	ejercicio3(&a,&b,&c);
	
	printf("son las %i:%i:%i",a,b,c);
	
	

	
	
	
	
	
	
	
	
	
}