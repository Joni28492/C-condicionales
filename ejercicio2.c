/*
ejercicio 2

Escribir un programa que lea desde teclado el importe bruto de una factura y determine el importe neto según los siguientes criterios.

Importe bruto menor de 18000€ -> sin descuento

Importe bruto mayor de 18000€ -> 15% de descuent

*/
#include  "ejercicio2.h"


/*
*Realizacion de ejercicio 2 del dia @date 20/07/2018
*el ejercicio consiste en calcular el importe bruto y si tiene descuento aplicarselo
*@param  bruto  float primero de los valores con los que operamos 		 
*@retorna n con el descuento aplicado o no
*/

float ejercicio2(float bruto){
	
	int n=0;
	
	if(bruto>=18000)
		n=bruto;
	else
		n=bruto-(bruto/15.0);
	
	return n;
	
}

