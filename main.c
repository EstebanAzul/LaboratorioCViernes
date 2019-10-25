/*
*Autor:Esteban Carvajal Villanueva
*Fecha:25/10/2019
*grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1882011
*/



#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
struct estudiante {
	char nombre[55];
	char sexo[10];
	int edad;
	int calificaciones[5];
}estudiante1, estudiante2, estudiante3;

int main(){
	
////////////////////////////////////ACTIVIDAD 1///////////////////////////////////////////////////////
strcpy(estudiante1.nombre, "Esteban Carvajal Villanueva");
estudiante1.edad = 19;
strcpy(estudiante1.sexo, "hombre");
estudiante1.calificaciones[0] = 84;
estudiante1.calificaciones[1] = 73;
estudiante1.calificaciones[2] = 88;
estudiante1.calificaciones[3] = 90;
estudiante1.calificaciones[4] = 34;

strcpy(estudiante2.nombre, "Jessica Lizeth Hernandez Bracho");
estudiante2.edad = 18;
strcpy(estudiante2.sexo, "mujer");
estudiante2.calificaciones[0] = 89;
estudiante2.calificaciones[1] = 95;
estudiante2.calificaciones[2] = 100;
estudiante2.calificaciones[3] = 98;
estudiante2.calificaciones[4] = 87;

strcpy(estudiante3.nombre,"Rolando Josafat Moreno Valdez");
estudiante3.edad = 19;
strcpy(estudiante3.sexo, "hombre");
estudiante3.calificaciones[0] = 78;
estudiante3.calificaciones[1] = 90;
estudiante3.calificaciones[2] = 85;
estudiante3.calificaciones[3] = 92;
estudiante3.calificaciones[4] = 87;

float prom1 = (estudiante1.calificaciones[0] + estudiante1.calificaciones[1] + estudiante1.calificaciones[2] + estudiante1.calificaciones[3] + estudiante1.calificaciones[4])/5;
float prom2 = (estudiante2.calificaciones[0] + estudiante2.calificaciones[1] + estudiante2.calificaciones[2] + estudiante2.calificaciones[3] + estudiante2.calificaciones[4])/5;
float prom3 = (estudiante3.calificaciones[0] + estudiante3.calificaciones[1] + estudiante3.calificaciones[2] + estudiante3.calificaciones[3] + estudiante3.calificaciones[4])/5;

if((prom1 > prom2) && (prom1 > prom3)){
	printf("El alumno con la calificacion mas alta es: %s",estudiante1.nombre );
}
else if((prom3 > prom2) && (prom3 > prom1)){
	printf("El alumno con la calificacion mas alta es: %s",estudiante3.nombre );
}
else if((prom2 > prom1) && (prom2 > prom3)){
	printf("El alumno con la calificacion mas alta es: %s",estudiante2.nombre );
}

//////////////////////////////////////////////////////////ACTIVIDAD 2///////////////////////////////////////////////////////////////////////////////////////////////////////


*/
struct panda {
	char name[30];
	int peso;
	int birth;
	char sexo[10];
}panda1, panda2, panda3;


 void LeerPanda(panda.panda1);
 int EdadPanda(panda p);
 int TenerBebes(panda p);
}
