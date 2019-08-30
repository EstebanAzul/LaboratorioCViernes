/*
* Autor: Esteban Carvajal Villanueva
* Fecha: 30/08/2019
*Grupo: 006
*Horario: Viernes 7am - 9am
*Matricula: 1882011
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(void) 
{
	int x = 0, y = 0;
	printf("Ingrese dos valores enteros cualesquiera\n");
	scanf("%d", &x);
	scanf("%d", &y);
	if(x < y){
		printf("el segundo valor es mayor que el primero\n");
	}
	else if(y < x){
		printf("el primer valor es mayor que el segundo\n");
	}
	else
	{
		printf("ambos valores son iguales\n");
	}
	
////////////////////////////////////////////////////////////// COMIENZA ACTIVIDAD DOS ////////////////////////////////////////////////////////////////////////////////


printf("\n\n\n     COMIENZA ACTIVIDAD DOS \n\n\n");
int a = 5, b = 3, c = -12;

if(a > 3)
	printf("a es mayor a tres\n\n");

if(a > c)
	printf("a es mayor a c\n\n");

if(b != c)
	printf("b es diferente de c\n\n");

if(a == 3)
	printf("a es igual a 3\n\n");

if((a*b) == 15)
	printf("a x b es igual a 5\n\n");

if((c/b) < a)
	printf("c entre b es menor que a\n\n");

if((c/b) == -10)
	printf("c entre b es igual a menos 10\n\n");

if((a + b + c) == 5)
	printf("a + b + c es igual a 5\n\n");

if((a+b==8)&&(a-b == 6))
	printf("a + b es igual a ocho y a menos b es igual a dos\n\n");

if((a+b==8)&&(a-b == 2))
	printf("a + b es igual a ocho y a menos b es igual a seis\n\n");

if((a >3)&&(b>3)&&(c<3))
	printf("a es mayor que 3 y b es mayor que tres y c es menor que tres\n\n");


///////////////////////////////////////////////////////////////// COMIENZA PROYECTO TRES ///////////////////////////////////////////////////////////////////////////////////

printf("comienza tercer proyecto\n");
printf("ingrese un valor entero para a, b y c\n");
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

if(a > 3){
	printf("a es mayor a tres\n\n");
}
else {
	printf("a es menor o igual a tres\n\n");
}

if(a > c){
	printf("a es mayor a c\n\n");
}
else {
	printf("a es menor o igual a c\n\n");
}

if(b != c){
	printf("b es diferente de c\n\n");
}
else {
	printf("b es igual a c\n\n");
}

if(a == 3){
	printf("a es igual a 3\n\n");
}
else {
	printf("a es diferente de tres\n\n");
}

if((a*b) == 15){
	printf("a x b es igual a 5\n\n");
}
else {
	printf("a por b es diferente de 15\n\n");
}

if((c/b) < a){
	printf("c entre b es menor que a\n\n");
}
else {
	printf("c entre b es mayor o igual a a\n\n");
}

if((c/b) == -10){
	printf("c entre b es igual a menos 10\n\n");
}
else {
	printf("c entre b es diferente a menos diez\n\n");
}

if((a + b + c) == 5){
	printf("a + b + c es igual a 5\n\n");
}
else {
	printf("a mas b mas c es diferente de 5\n\n");
}

if((a+b==8)&&(a-b == 6)){
	printf("a + b es igual a ocho y a menos b es igual a dos\n\n");
}
else {
	printf("a mas b es diferente de ocho o a menos b es diferente de 6\n\n");
}

if((a+b==8)&&(a-b == 2)){
	printf("a + b es igual a ocho y a menos b es igual a seis\n\n");
}
else {
	printf("a mas b es diferente de ocho o a menos b es diferente de menos 2\n\n");
}

if((a >3)&&(b>3)&&(c<3)){
	printf("a es mayor que 3 y b es mayor que tres y c es menor que tres\n\n");
}
else {
	printf("a es menor o igual a tres o b es menor o igual a tres o c es mayor o igual a tres\n\n");
}


	return 0;
}




