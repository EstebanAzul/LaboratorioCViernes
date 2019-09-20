/*
*Autor: Esteban Carvajal Villanueva
*Fecha: 20/09/2019
*grupo: 006
*Horario: 7am-9am
*Matricula: 1882011
*/

#include <stdio.h>
//**************ACTIVIDAD1*****************

int main () {
	
	
	int i;
	float prom = 0, tot = 0, cal = 0;
	printf("Programa que dadas 10 calificaciones de un alumno regresa el promedio (calificacion base 10)\n");
	for(i = 1; i <= 10; i++){
		printf("\nIngrese la calificacion %d del alumno ", i);
		scanf("%f", &cal);
		tot = tot + cal;
	}
	prom = tot/10;
	if(prom >= 7){
	printf("\nEl alumno aprobo el curso con la calificacion de: %.2f", prom);
}
else {
	printf("\nEl alumno reprobo el curso con la calificacion de %.2f", prom);
}
//**************ACTIVIDAD2*****************

int base = 0, exponente = 0, var = 0, resultado = 0, j = 0;

printf("\n\n\n\n\n Programa que dados base y exponente, calcula el resultado\n");
printf("\nIngrese la base ");
scanf("%d", &base);
printf("\nIngrese el exponente ");
scanf("%d", &exponente);
var = base;
for(j = 2; j <= exponente; j++){
	var *= base;
}
printf("\n\nEl resultado es: %d", var);
}
