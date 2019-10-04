/* 
*Autor: Esteban Carvajal Villanueva
*Fecha: 4/Oct/2019
*Grupo: 006
*Horario: 7am-9am
*Matricula: 1882011
*/

#include <stdio.h>

int veoe[6][10][2] = {0};

int main (void){
	
	//**************ACTIVIDAD 1*****************
	int i = 0, j = 0, k = 0;
	
	for(i = 0; i <= 5; i ++){
		for(j = 0; j <= 9; j++){
			for(k = 0; k <= 1; k++){
				veoe[i][j][k] = i+j+k;
			}
		}
	}
	veoe[3][7][1] = 4234;
	printf("El numero de empleado 3, de la oficina 7, del edificio 1, ha vendido: %d\n\n", veoe[3][7][1]);

	// ¿Cuantos elementos componen el array multidimensional?
	// RESPUESTA: El numero de elementos que componen el array multidimensional son el largo de sus vectores multiplicados entre si, en este caso: 6*10*2 = 120
	
	// ¿Qué ocurre si intentamos mostrar por pantalla un valor con un índice que no
	//está definido para ese array multidimensional?
	// RESPUESTA: Imprime el valor de 0
	
	//**************ACTIVIDAD 2*****************
	for(i = 0; i <= 5; i ++){
		for(j = 0; j <= 9; j++){
			for(k = 0; k <= 1; k++){
				veoe[i][j][k] = veoe[i][j][k] + 10;
			}
		}
	}
	
	printf("El numero de empleado 3, de la oficina 7, del edificio 1, ha vendido: %d\n\n", veoe[3][7][1]);
}
