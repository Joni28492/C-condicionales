/*ejercicio 3
Escribir un programa que una vez leída una hora en formato (horas, minutos, segundos)
 indique cual será la hora completa dentro de un segundo (controlar qué ocurre cuando
 se indica 59 segundos y/o minutos).

*/

#include "ejercicio3.h"
/*
*Realizacion de ejercicio 3 del dia @date 20/07/2018
*el ejercicio consiste en dar en formato horario la hora despues de un seg
*@param  horas  int primero de los valores con los que operamos 
*@param  min  int primero de los valores con los que operamos 		
*@param  seg  int primero de los valores con los que operamos 
*modifica los valores y controla que pasa si son mayores de 59 seg
*/

void ejercicio3(int *horas,int *min,int *seg){
	

	(*seg)++;
	
	if(*seg==60) {
		(*min)++;
		
		*seg=0;
		printf(" seg =0-> %i\n", *seg);
		
	}
	
	if(*min==60){
		*min=0;
		(*horas)++;
		

		
	}
	
	if(*horas>=24){
			
		if(*horas==24)(*horas)=0;
			
		else (*horas)%=24;
	}
	
	
	
}


