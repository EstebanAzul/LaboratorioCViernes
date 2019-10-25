/*
*Autor:Esteban Carvajal Villanueva
*Fecha:25/10/2019
*grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1882011
*/


#include <stdio.h>
#include <math.h>
int num, num2, pot, resultado;
void num_primos(num);
void potencia();

int main() {
	
////////////////////////////////////////////////////////ACTIVIDAD 1//////////////////////////////////////////////////////////////////////////
static int resultado;
printf("Ingrese un numero: ");
scanf("%d", &num);

num_primos(num);

/////////////////////////////////////////////////////// ACTIVIDAD 2 ///////////////////////////////////////////////////////////////////////////


potencia();


return 0;
}





void potencia(){
	printf("\n\nIngrese el numero que desea elevar a x potencia: ");
	scanf("%d", &num2);
	printf("\nIngrese la potencia a la que quiere elevar el numero: ");
	scanf("%d", &pot);
	resultado = pow(num2, pot);
	printf("El resultado es: %d", resultado);
}

void num_primos(int num){

int divisor = 1, divisores = 0;

do{
	if(num % divisor == 0){
	divisores++;
}
	divisor++;
}
while(divisor <= num);
if(divisores == 2){
printf("El numero %d es PRIMO.", num);
}
else{
printf("El numero %d NO es PRIMO.", num);
}

}
