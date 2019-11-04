
/*Análisis del problema 

Objetivo 
Hacer un algoritmo y programa que verifique si todos los alumnos del grupo 1192 son mayores de edad

Entradas: 
eContadorAlumno: Variable de tipo entero que guarda el número total de estudiantes
bMayorEdad: Variable de tipo booleano que indica si todos en el grupo son mayores de edad
eEdadAlumno: Variable de tipo de entero que guardara de una a una las edades de los alumno

Salidas:
Mensaje que indique si todos son mayores de edad o no

Restricciones
Sólo funcionará para 26 alumnos
No admite caracteres 
Los alumnos son veraces 
No admite decimales 

Precondiciones 
Saber cuántos alumnos se evaluarán
A cuántos alumnos se les preguntará 
La mayoría de edad es de 18 años */


/*Pseudocodigo:

1.	Inicio 
2.	Declaracion de variables
Entero: eContadorAlumno=26
Booleano: bMayorEdad= VERDADERO
Entero: eEdadAlumno
3.	Mientras (eContadorAlumno >0 && bMayorEdad == VERDADERO)
3.1 Escribir: "Dame tu edad"
3.2 Leer: eEdadAlumno
3.3 eContadorAlumno-
3.4	Si (eEdadAlumno < 18)
3.4.1	bMayorEdad = Falso
3.5	Fin Si
4	Fin Mientras
5	Si (bMayorEdad == VERDADERO)
6	Escribir: "Todos mis alumnos son mayores de edad"
7	Si no
8	Escribir: "No todos mis alumnos son mayores de edad"
9	Fin si no
10	FIN */


/*directivas al preprocesador*/
#include <stdio.h> 
#define boolean int
#define true 1
#define false 0
#define MAX_ALUMNOS 26

main (){
	
	int eContadorAlumno =MAX_ALUMNOS;
	int eEdadAlumno;
	boolean bMayorEdad = true;
	
	while (eContadorAlumno >0 && bMayorEdad == true){
		printf ("Dame tu edad");
		scanf ("%d",&eEdadAlumno);
		eContadorAlumno--;
		if (eEdadAlumno <18){
			bMayorEdad = false;
		}
	}
	
	if (bMayorEdad == true){
		printf ("Todos los alumnos son mayores de edad");
	}
	else{
		printf ("No todos los alumnos son mayores de edad");
		
	}
	
	
}
