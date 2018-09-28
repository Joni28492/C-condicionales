#include<stdio.h>
#include<string.h>

/**
*Realizacion de ejercicio 1  del dia  @date 17/07/2018
*el ejercicio consiste en detectar si el numero es mayor o menor que 100
*@param    int n valor que introducimos
*@see  impresion ejercicio1(int n)
*@return n, retorna el valor introducido como 0 o 1 para saber si es verdadero o falso
*@author Jonathan Fernández López
*/
   int ejercicio1(int n){
	   
		
	   
	   
	   switch(n>100){
		   
			case 0:
				n=0;
				break;
				
			

				
				
			default:
				n=1;
				break;
			

		   
		   
	   }
	    
		return n;
	   
   }
   
   
   
   
   //Escribir un programa que dado un número del 1 a 7 escriba el correspondiente nombre del día de la semana.
/**
*Realizacion de ejercicio 2  del dia  @date 17/07/2018
*el ejercicio consiste en saber el dia de la semana a traves de un numero introducido
*@param  int n   es el valor que utilizamos para referirnos al dia de la semana 											"
*@see  impresion ejercicio2(int n)   imprime el dia de la semana
*@author Jonathan Fernández López
*/
   void ejercicio2(int n){
	   
	   
	   switch(n){
		   
		   case 1:
		   printf("lunes\n");
		   break;
		   
		   case 2:
		   printf("martes\n");
		   break;

		   case 3:
		   printf("miercoles\n");
		   break;

		   case 4:
		   printf("jueves\n");
		   break;

		   case 5:
		   printf("viernes\n");
		   break;

		   case 6:
		   printf("sabado\n");
		   break;

		   case 7:
		   printf("domingo\n");
		   break;		   
		   
		   default:
		   printf("la semana no tiene tantos dias, o escribe un numero mayor que 0\n");
		   break;
 
		   
	   }
	   
  
   }
   
   //Escribir un programa que lea un carácter e indique si es o no una vocal (mayúscula o minúscula).
/**
*Realizacion de ejercicio 1  del dia  @date 17/07/2018
*el ejercicio consiste en detectar si el el caracter introducido es una vocal, y si es mayuscula o minuscula 
*@param    char ch caracter que introducimos
*@see  impresion ejercicio3(char ch)
*@author Jonathan Fernández López
*/
   void ejercicio3(char ch){
	   
	   
	   
	   switch(ch){
		   
		   case 'A':
		   case 'E':
		   case 'I':
		   case 'O':
		   case 'U':
		   
		   printf("es una vocal Mayuscula\n");
		   break;
		   
		   
		   case 'a':
		   case 'e':
		   case 'i':
		   case 'o':
		   case 'u':

		   printf("es una vocal Minuscula\n");
		   break;		   
		   
		   default:
		   printf(" no es ninguna vocal\n");
		   break;

	   }
	   
	   
   }


int main(int argc, char** argv){
	
	int n=0;
	char ch='\0';
	//ejercicio 1
	printf("introduce numero para saber si es menor o mayor que 100\n");
	scanf("%i", &n);
	
	if(ejercicio1(n)) printf("%i es mayor que 100\n", n);
	else printf("%i es menor que 100\n", n);
	
	//ejercicio 2
	
	printf("introduce numero de de dia \n");
	scanf("%i", &n);
	ejercicio2(n);
	
	//ejercicio 3
	printf("introduce caracter\n");
	scanf("%s", &ch);
	
	ejercicio3(ch);
	
	
	

	
}