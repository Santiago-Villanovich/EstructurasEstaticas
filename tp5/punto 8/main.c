#include <stdio.h>
#include <stdlib.h>

/* 
8) Desarrolle un programa que, a partir de los datos prefijados de los días de cada mes, diga
qué meses tienen 30 días. Se deberá mostrar el número de cada mes, pero empezando a
contar desde 1 (abril será el mes 4).
*/

int main(int argc, char *argv[]) {
	
	int anio[12];
	int i=0,mes=0;

	for(i=1;i<=12;i++){
		if(i==2){
			anio[i]=28;
		}else{
			if(i==4 || i==6 || i==9 || i==11){
			anio[i]=30;		
			}else{
				anio[i]=31;
			}
		}
	}
	
	printf("Los meses con 30 dias son los siguientes:\n\n");
	for(i=1;i<=12;i++){
		if(anio[i]==30){
			printf("mes nro %d\n",i);
		}
		
	}
	
	
	return 0;
}
