#include <stdio.h>
#include <stdlib.h>

/*

6) Desarrolle un programa que almacene en un vector el número de días que tiene cada mes
(supondremos que es un año no bisiesto), pida al usuario que le indique un mes (1=enero,
12=diciembre) y muestre en pantalla el número de días que tiene ese mes.

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

	printf("ingrese el mes que desea ver: ");
	scanf("%d",&mes);

	while(mes!=0){

		printf("\nEl mes %d tiene %d dias\n",mes,anio[mes]);

		printf("\ningrese el mes que desea ver: ");
		scanf("%d",&mes);	
	}


	return 0;
}
