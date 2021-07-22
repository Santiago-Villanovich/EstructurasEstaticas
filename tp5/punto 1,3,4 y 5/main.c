#include <stdio.h>
#include <stdlib.h>

/* 
1) Cree un vector de enteros de 5 posiciones, inicializándolo con los valores del
10,100,94,84,11.

3) Cree una matriz de enteros de 3 x 3. Inicialícela en base a la siguiente tabla:
	100 74 99
	11  36 68
	23   9 81
	
4) Cree un array de char y escriba la palabra “Bienvenidos”. Responda la siguiente pregunta:
a. ¿De cuantas posiciones deberá ser el vector?

5) Ingrese 10 valores en un vector de enteros. Sume todos los valores muestre el resultado
en pantalla. Responda:
a. ¿Cuántas líneas de código necesito para desarrollar el programa sin utilizar ciclos
de repetición?
b. Implemente la misma solución con ciclos de repetición, y responda ¿Cuántas
líneas de código necesito en esta segunda versión?

 */

int main(int argc, char *argv[]) {
	
	int i=0,j=0;
	
//1)
	int vector1[]={10,100,94,84,11};
	
	printf("PUNTO 1)\n");
	for(i=0;i<5;i++){
		printf("posicion %d \tvalor %d\n",i,vector1[i]);
	}
	
	
//3)
	int vector3[3][3]={100,74,99,11,36,68,23,9,81};
	
	printf("\n\nPUNTO 3)\n");	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("fila %d columna %d\tvalor %d\n",i,j,vector3[i][j]);	
				
		}
	}
	
	
//4)
	char vector4[]="Bienvenidos";
	
	printf("\n\nPUNTO 4)\n");	
	for(i=0;i<11;i++){
		printf("%c ",vector4[i]);
	}
	
	
//5)
	int vector5[10];
	int suma=0;
	
	printf("\n\nPUNTO 5)");
	for(i=0;i<10;i++){
		printf("\nIngrese el valor a guardar en la posicion %d: ",i);
		scanf("%d",&vector5[i]);
		
		suma+=vector5[i];
	}
	printf("\nel total del vector5 es %d\n",suma);	
	
	printf("\tA) se necesitarian 20 lineas de codigo unicamente para solicitar los datos.\n");
	printf("\tB) En cambio con ciclos de repeticion tan solo 3");
	
	
	return 0;
}
