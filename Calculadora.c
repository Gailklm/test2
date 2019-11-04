/*
Fecha: 19/09/2019
Author: Germán Ignacio Cervantes González
Copyright: Todos los derechos reservados (c)

Nombre: Calculadora.c
Descripción: Calculadora. Permite sumar, restar, multiplicar y dividir dos números de punto flotante (x,y).
*/
//Hacemos la declaración de la biblioteca estándar.
#include <stdio.h>
#include <locale.h>

float maximo(float num1, float num2);
float suma(float x, float y);
float resta(float x, float y);
float multiplicación (float x, float y);
float división(float x, y);
float máximo (float x, y);

//A continuación viene  la declaración del programa principal
int main(){
	setlocale(LC_CTYPE,"Spanish");
	//Declaraciones de variables locales a la función main()
	float x=0,y=0; //Operandos "x" y "y" sobre los que se realizará la operación.
	float resultado=0; //Se almacena el resultado de la operación con los operandos.
	char opcion='A'; //Recibe el número de la operación que se realizará, de acuerdo al menú.
	int opValida = 1; //Si la operación está en el menú, se realiza.
	do{
	//Menú
	printf("INGRESE LA OPERACIÓN:\n");	
	printf("\n\n\nLAS OPERACIONES SON:\n");
	printf("1. SUMA.\n");
	printf("2. RESTA.\n");
	printf("3. MULTIPLICACIÓN.\n");
	printf("4. DIVISIÓN.\n");
    printf("5. MÁXIMO. \n");
    

		printf("0. Salir\n");

	
	fflush(stdin);
	//Leer la opción que se da en el menú.
	scanf("%c",&opcion);
	if (opcion != '0'){
		
		printf("\n\nINGRESE X: ");
		scanf("%f",&x);//x= Lo	que el usuario escribio
		printf("\nINGRESE Y: ");
		scanf("%f",&y);
	}
	/*Estructura condicional múltiple, que realiza la operación de acuerdo
	  a la selección que selecciona del usuario.
	*/
	
	
	switch (opcion){
		case '1': //1. Suma
			resultado = x + y;
		break;
		case '2': //2. Resta
			resultado = x - y;
			break;
		case '3': //3. Multiplicación
			resultado = x * y;
			break;
		case '4': //4. División
			resultado = x / y; 
			break;
        case '5': //5. Máximo
             resultado = maximo(x,y);
             break;
		case '0':
			opValida = 2;
			break;
		default:
			opValida = 0; //Si no es ninguna opción del menú, se marca la variable como "Opción no válida"
	}
	
    
	if (opValida == 2)
		printf("Gracias por usar este programa adiós");
	else
		if (opValida == 1){
	
			printf("\nEl resultado es %f\n\n", resultado);
			printf("Felicidades\n\n");
    	}
		else{
	  
			printf("Debes poner una opción del 1 al 5 o S/s.\n");
			printf("Qué no estas leyendo?\n");
    	}
    
    }while(opcion != '0');
	return 0;
}

float maximo(float num1, float num2){
	
	float resultado;
	if(num1>num2 )
      resultado=num1;
    else
      resultado=num2;
    
	return resultado;
    

{

float maximo(float num1, float num2);
   float resultado

float suma(float x, float y);
     float resultado= (x + y);

float resta(float x, float y);
     float resultado x-y

float multiplicación (float x, y);
     float resultado= x * y

float división(float x, y);
     float resultado= x / y

float máximo (float x, y);
}






