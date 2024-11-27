#include <stdio.h>

/* teniendo una matriz Z*Z, llenar la matriz  en las posiciones fila[x]columna[b] 
de ceros tanto vertical como horizontal donde se encuentre un  elemento cero*/

int main (){
	
	int tamanioMatriz;
	
	printf("\nIngrese el tamanio de la matriz par:");
	scanf("%i",&tamanioMatriz);
	fflush(stdin);
	
	//inicializar matriz y vector
	int matriz[tamanioMatriz][tamanioMatriz];
	int vectorFila[tamanioMatriz];
	int vectorColumna[tamanioMatriz];
	
	for(int i=0; i<tamanioMatriz ; i++){
		vectorFila[i]=1;
		vectorColumna[i]=1;
	}
	
	for(int filas=0; filas < tamanioMatriz; filas++){
		for(int columnas=0; columnas < tamanioMatriz; columnas++){
			printf("Ingrese el elemento Matriz[%i][%i]:",filas,columnas);
			scanf("%i",&matriz[filas][columnas]);
			fflush(stdin);
			
			if(matriz[filas][columnas] == 0){
				vectorFila[filas]=0;
				vectorColumna[columnas]=0;
				
			}
		}
	}
	
	
	printf("Imprimiendo la matriz original\n");
	for(int filas=0; filas < tamanioMatriz; filas++){
		for(int columnas=0; columnas < tamanioMatriz; columnas++){
			printf("%i ",matriz[filas][columnas]);
		}
		printf("\n");
	}
	
	
	//llenar la matrix con ceros donde encuntre ceros en las posiciones
	for(int filas=0; filas < tamanioMatriz; filas++){
		for(int columnas=0; columnas < tamanioMatriz; columnas++){
			if(vectorFila[filas] ==0 || vectorColumna[columnas]==0){
				matriz[filas][columnas] = 0;
				
			}
		}
	}
	
	printf("Imprimiendo la matriz con ceros\n");
	for(int filas=0; filas < tamanioMatriz; filas++){
		for(int columnas=0; columnas < tamanioMatriz; columnas++){
			printf("%i ",matriz[filas][columnas]);
		}
		printf("\n");
	}
	
}
