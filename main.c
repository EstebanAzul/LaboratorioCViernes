/* 
* Autor: Esteban Carvajal Villanueva
* Fecha: 13/09/2019
* grupo: 006
* Horario: 7am-9am
* Matrícula: 1882011
*/
#include <stdio.h>
#include <conio.h>

int main () {
	
	//**************ACTIVIDAD1*****************
		printf("      COMIENZA PROGRAMA 1     \n");
	int x = 0, z = 0;
	char y;
	printf("Programa que recibe valores hasta que el usuario\nhaya terminado de ingresar numeros y al final\nimprime la suma de todos los valores ingresados\n\n");
	printf("Ingrese un numero entero: ");
	scanf("%d", &x);
	z = x;
	x = 0;
	fflush(stdin);
	printf("\nDesea ingresar otro valor? (s/n) :");
	scanf("%c", &y);
	while(y == 's'){
		fflush(stdin);
		printf("\nIngrese un numero entero: ");
		scanf("%d", &x);
		z = z + x;
		x = 0;
		fflush(stdin);
		printf("\nDesea ingresar otro valor? (s/n) :");	
		scanf("%c", &y);
	}
	
	printf("\nLa suma de todos los valores es: %d",z);
	
	//**************ACTIVIDAD2*****************
	printf("\n\n\n\n\n      COMIENZA PROGRAMA 2     ");
	int a = 0;
	printf("\n\n\nPrograma que recibe valores hasta que el numero ingresado sea mayor o igual a 100\n\n");
	printf("Ingrese un numero entero: ");
	scanf("%d", &x);
	printf("%d",x);
	fflush(stdin);
	while(x < 100){
		fflush(stdin);
		printf("\n\nIngrese un numero entero: ");
		scanf("%d", &x);
		printf("\n%d",x);
	}
	
}
