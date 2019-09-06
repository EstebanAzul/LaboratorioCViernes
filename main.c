#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float cal;
	printf("ingrese la calificacion :\n\n");
	scanf("%f", &cal);
	if(cal >=0 && cal < 5){
		printf("\nNO APTO");
	}
	else if(cal >=5 && cal <=10){
		printf("\nAPTO");
	}
	else {
		printf("\nERROR: Nota incorrecta");
	}
	
//////////////////////////////////////////////////////Comienza segunda actividad /////////////////////////////////////////////////////////////////////

int dia;
printf("\n\n\n Ingrese un numero del 1 al 7\n\n");
scanf("%d", &dia);
switch (dia){
	case 1: 
		printf("\n\nEl numero ingresado corresponde a el dia: Domingo");
	break;
	
	case 2: 
		printf("\n\nEl numero ingresado corresponde a el dia: Lunes");
	break;
	
	case 3: 
		printf("\n\nEl numero ingresado corresponde a el dia: Martes");
	break;
	
	case 4: 
		printf("\n\nEl numero ingresado corresponde a el dia: Miercoles");
	break;
	
	case 5: 
		printf("\n\nEl numero ingresado corresponde a el dia: Jueves");
	break;
	
	case 6: 
		printf("\n\nEl numero ingresado corresponde a el dia: Viernes");
	break;
	
	case 7: 
		printf("\n\nEl numero ingresado corresponde a el dia: Sabado");
	break;
	
	default:
		printf("\n\nERROR: Dia incorrecto");
	break;
}

///////////////////////////////////////////////////Comienza tercer Actividad ////////////////////////////////////////////////////////////////////////////

int op;
printf("\n\n\n De las siguientes opciones, seleccione una ingresando el numero de producto \n\n");
printf("Opcion 1: Coca Cola\n\n");
printf("Opcion 2: Pepsi Cola\n\n");
printf("Opcion 3: Dr Pepper\n\n");
printf("Opcion 4: Diet Coke\n\n");
printf("Opcion 5: Red Bull\n\n");

scanf("%d", &op);

switch (op){
	case 1:
		printf("\n\nLa el pructo seleccionado es: Coca Cola\n\n");
	break;
	
	case 2:
		printf("\n\nLa el pructo seleccionado es: Pepsi Cola\n\n");
	break;
	case 3:
		printf("\n\nLa el pructo seleccionado es: Dr Pepper\n\n");
	break;
	
	case 4:
		printf("\n\nLa el pructo seleccionado es: Diet Coke\n\n");
	break;
	case 5:
		printf("\n\nLa el pructo seleccionado es: Red Bull\n\n");
	break;
	default:
		printf("\n\nERROR: seleccion invalida\n\n");
	break;
}
	return 0;
}
