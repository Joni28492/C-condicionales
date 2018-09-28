#include<stdio.h>





//Escribir un programa que detecte si un número introducido desde el teclado es positivo o negativo.
/**
*Realizacion de ejercicio 1  del dia  @date 16/07/2018
*el ejercicio consiste en detectar si el numero es positivo o negativo
*@param    int n valor que introducimos
*@see  impresion ejercicio1(int n)
*@return n, retorna  como 0 o 1 para saber si es negativo o positivo
*@author Jonathan Fernández López
*/
int ejercicio1(int n){
	
	if(n<0) return 0;
	else return 1;
}




//Escribir un programa que detecte si se han introducido en orden creciente tres números introducidos por el usuario.
/**
*Realizacion de ejercicio 2  del dia  @date 16/07/2018
*el ejercicio consiste en detectar si el numero tiene 3 cifras y es de orden creciente
*@param    int n valor que introducimos
*@see  impresion ejercicio1(int n)
*@return n, retorna  como 1 o 0 para saber si tiene 3 cifras, y si tiene orden creciente o no
*@author Jonathan Fernández López
*/
int ejercicio2(int n){
	
	if(n>99 && n<=999){
		
		if(n/100<n%10 && (n%100)/10 < n%10) return 1;
		else return 0;
		
	}
	
	else return 0;
	
	
}


//Escribir un programa que determine si un número leído desde el teclado es par o impar.
/**
*Realizacion de ejercicio 3  del dia  @date 16/07/2018
*el ejercicio consiste en detectar si el numero es par o impar
*@param    int n valor que introducimos
*@see  impresion ejercicio3(int n)
*@return n, retorna  como 1 o 0 para saber si es par o impar
*@author Jonathan Fernández López
*/
int ejercicio3(int n){
	
	if(n%2==0) return 1;
	else return 0;
	
	
	
}



int main(int argc, char** argv){
	
	int n=0;
	
	printf("introduce numero para saber si es negativo o positivo\n");
	scanf("%i", &n);
	
	//ejercicio1
	if(ejercicio1(n))
		printf("es positivo\n");
	else
		printf("es negativo\n");
	
	
	//ejercicio 2
	printf("introduce numero para saber si tiene un orden creciente de 3 cifras\n");
	scanf("%i", &n);
	
	if(ejercicio2(n))
		printf("si, lo tiene\n");
	else
		printf("no lo tiene\n");
	
	//ejercicio 3
	printf("introduce numero para saber si es par o impar\n");
	scanf("%i", &n);
	
	if(ejercicio3(n))
		printf("es par\n");
	else
		printf("es impar\n");
	
	
	return 0;
	
}