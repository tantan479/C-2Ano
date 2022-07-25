#include<stdio.h>

void transpor(float A[][4], float T[][4]){
	
	int i, j;
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			
			T[j][i]=A[i][j];
			
		}
	}
	
}

void mostrar(float A[4][4], float T[4][4]){
	
	int i, j;
	
	printf("Mostrar A: ");
	
	for(i=0; i<4; i++){
		printf("\n");
		for(j=0; j<4; j++){
			
			printf("%.1f ", A[i][j]);	
			
		}
	}
	
	printf("\n\n");
	printf("Mostrar T: ");
	
	for(i=0; i<4; i++){
		printf("\n");
		for(j=0; j<4; j++){
			
			printf("%.1f ", T[i][j]);	
			
		}
	}
	

}



int main(){
	
	float A[4][4], T[4][4];
	int i, j;
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			
			printf("Digite um numero[%i][%i]:\n", i, j);
			scanf("%f", &A[i][j]);
			
		}
	}
	
	transpor(A, T);
	mostrar(A, T);
	
	
}
