#include <stdio.h>
#include <stdlib.h>

/* 
7) Desarrolle un programa que pida al usuario los datos de dos matrices de 2x2, y calcule y
muestre su producto. Investigue como obtener el producto de dos matrices.
*/

int main(int argc, char *argv[]) {
	
	
	int matrizA[2][2];
	int matrizB[2][2];
	int matrizC[2][2];
	int i=0,j=0,flag=1;
	
	while(flag==1){
		
		printf("Ingrese los valores de la matriz A:\n");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("A %d-%d : ",i+1,j+1);
				scanf("%d",&matrizA[i][j]);
			}
		}
		
		printf("\nIngrese los valores de la matriz B:\n");
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("B %d-%d : ",i+1,j+1);
				scanf("%d",&matrizB[i][j]);
			}
		}
		
		matrizC[0][0]= (matrizA[0][0]*matrizB[0][0])+(matrizA[0][1]*matrizB[1][0]);
		matrizC[0][1]= (matrizA[0][0]*matrizB[1][0])+(matrizA[0][1]*matrizB[1][1]);
		matrizC[1][0]= (matrizA[1][0]*matrizB[0][0])+(matrizA[1][1]*matrizB[1][0]);
		matrizC[1][1]= (matrizA[1][0]*matrizB[0][1])+(matrizA[1][1]*matrizB[1][1]);
		
		printf("\nEl producto de la matriz AB es:\n");
		printf("%d \t%d \n%d \t%d",matrizC[0][0],matrizC[0][1],matrizC[1][0],matrizC[1][1]);
		
		
		printf("\n\n\n-- Para calcular una nueva matriz ingrese 1 --");
		printf("\n\t\tOpcion: ");
		scanf("%d",&flag);
		system("cls");
	}
	
	
	
	return 0;
}
