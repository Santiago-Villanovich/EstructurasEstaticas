#include <stdio.h>
#include <stdlib.h>

/*  2) Cree un vector de 10 posiciones, pida al usuario que ingrese los 10 valores y luego
muéstrelo de manera inversa */

int main(int argc, char *argv[]) {
	
	int vector[10];
	int i=0;
	
	for(i=0;i<10;i++){
		
		printf("Ingrese el valor para guardar en la posicion %d:\n",i+1);
		scanf("%d",&vector[i]);
	}
	
	printf("posicion\tvalor\n");
	for(i=0;i<10;i++){
		printf("%d\t\t%d\n",i+1,vector[i]);
	}
	
	return 0;
}
