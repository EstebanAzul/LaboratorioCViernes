/* 
* Autor: Esteban Carvajal Villanueva
*Fecha: 24/08/2018
*grupo: 006
*Horario: Viernes 7AM-9AM
*Matricula: 1882011
*/

#include <stdio.h>
#include <conio.h>

int main (void)
{
	float x;
	float resultado;
	printf("Capture el valor de x entre 0 y 10\n");
	scanf("%d",&x);
	resultado = (((x-1)/4) - ((x-5)/36));
	printf("Para la Primer expresion (x-1)/4) -((x-5)/36 el valor de x es %f\n\n\n", resultado);
	resultado = 6*(((x+1)/8) - ((2*x - 3)/16));
	printf("Para la Primer expresion 6*((x+1)/8) - ((2*x - 3)/16) el valor de x es %Lf", resultado);
	return 0;
}
