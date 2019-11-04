/*
Fecha: 19/09/2019
Author: Germ�n Ignacio Cervantes Gonz�lez
Copyright: Todos los derechos reservados (c)

Nombre: Calculadora.c
Descripci�n: Calculadora. Permite sumar, restar, multiplicar y dividir dos n�meros de punto flotante (x,y).
*/
//Hacemos la declaraci�n de la biblioteca est�ndar.
#include <stdio.h>
#include <locale.h>

float maximo(float num1, float num2);
float suma(float x, float y);
float resta(float x, float y);
float multiplicaci�n (float x, float y);
float divisi�n(float x, y);
float m�ximo (float x, y);

//A continuaci�n viene  la declaraci�n del programa principal
int main(){
	setlocale(LC_CTYPE,"Spanish");
	//Declaraciones de variables locales a la funci�n main()
	float x=0,y=0; //Operandos "x" y "y" sobre los que se realizar� la operaci�n.
	float resultado=0; //Se almacena el resultado de la operaci�n con los operandos.
	char opcion='A'; //Recibe el n�mero de la operaci�n que se realizar�, de acuerdo al men�.
	int opValida = 1; //Si la operaci�n est� en el men�, se realiza.
	do{
	//Men�
	printf("INGRESE LA OPERACI�N:\n");	
	printf("\n\n\nLAS OPERACIONES SON:\n");
	printf("1. SUMA.\n");
	printf("2. RESTA.\n");
	printf("3. MULTIPLICACI�N.\n");
	printf("4. DIVISI�N.\n");
    printf("5. M�XIMO. \n");
    

		printf("0. Salir\n");

	
	fflush(stdin);
	//Leer la opci�n que se da en el men�.
	scanf("%c",&opcion);
	if (opcion != '0'){
		
		printf("\n\nINGRESE X: ");
		scanf("%f",&x);//x= Lo	que el usuario escribio
		printf("\nINGRESE Y: ");
		scanf("%f",&y);
	}
	/*Estructura condicional m�ltiple, que realiza la operaci�n de acuerdo
	  a la selecci�n que selecciona del usuario.
	*/
	
	
	switch (opcion){
		case '1': //1. Suma
			resultado = x + y;
		break;
		case '2': //2. Resta
			resultado = x - y;
			break;
		case '3': //3. Multiplicaci�n
			resultado = x * y;
			break;
		case '4': //4. Divisi�n
			resultado = x / y; 
			break;
        case '5': //5. M�ximo
             resultado = maximo(x,y);
             break;
		case '0':
			opValida = 2;
			break;
		default:
			opValida = 0; //Si no es ninguna opci�n del men�, se marca la variable como "Opci�n no v�lida"
	}
	
    
	if (opValida == 2)
		printf("Gracias por usar este programa adi�s");
	else
		if (opValida == 1){
	
			printf("\nEl resultado es %f\n\n", resultado);
			printf("Felicidades\n\n");
    	}
		else{
	  
			printf("Debes poner una opci�n del 1 al 5 o S/s.\n");
			printf("Qu� no estas leyendo?\n");
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

float multiplicaci�n (float x, y);
     float resultado= x * y

float divisi�n(float x, y);
     float resultado= x / y

float m�ximo (float x, y);
}






