#include<stdio.h>

void alterar_matriz(float A[][4]){
	
	int i, j;
	float maior=0;
	
	for(i=0;i<4;i++){
			if(A[i][i]>maior){
				maior=A[i][i];
			}	
		}
		
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			A[i][j]=A[i][j]/maior;
		}
	}
	
	for(i=0;i<4;i++){
		printf("\n");
		for(j=0;j<4;j++){
			printf(" %.2f", A[i][j]);
		}
	}
	
}


int main(){
	
	float A[4][4];
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite o numero da celula [%i][%i]: \n", i, j);
			scanf("%f", &A[i][j]);
		}
	}
	
	alterar_matriz(A);
	
	return 0;
}
