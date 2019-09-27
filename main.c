/*
*Autor: Esteban Carvajal Villanueva
*Fecha: 27/09/2019
*grupo: 006
*Horario: 7am-9am
*Matricula: 1882011
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//**************ACTIVIDAD1*****************
	
	 int nC[24];
	 nC[0] = 34;	
	 nC[1] = 21;
	 nC[2] = 65;
	 nC[3] = 82;
	 nC[4] = 29;
	 nC[5] = 61;
	 nC[6] = 28;
	 nC[7] = 46;
	 nC[8] = 92;
	 nC[9] = 16;
	 nC[10] = 65;
	 nC[11] = 23;
	 nC[12] = 86;
	 nC[13] = 34;
	 nC[14] = 17;
	 nC[15] = 51;
	 nC[16] = 78;
	 nC[17] = 81;
	 nC[18] = 94;
	 nC[19] = 32;
	 nC[20] = 61;
	 nC[21] = 82;
	 nC[22] = 43;
	 nC[23] = 85;

	int R = 2;
	nC[R] = 57;
	printf("El numero de coches en la hora %d es: %d", R, nC[R]);
	R = 21;
	nC[R] = 57;
	printf("\n\nEl numero de coches en la hora %d es: %d\n\n\n", R, nC[R]);
	
	//**************ACTIVIDAD2*****************
	
	int A = 8, B = 4;

	R = A/B;
	printf("El valor de A es: %d\nEl valor de B es: %d\nEl resultado de A/B es: %d", A, B, R);
	printf("\n\nEl valor en el campo %d del arreglo es: %d",R, nC[R]);	
	
	
	return 0;
}
