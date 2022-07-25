#include<stdio.h>

float soma_linha_impar(float B[3][3]){
	
	float soma=0.0;
	int i, j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i%2!=0)
			soma+=B[i][j];
		}
	}
	
	return soma;
	
}


int main(){
	
	float B[3][3], soma;
	int i, j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite o numero da celula [%i][%i]: \n", i, j);
			scanf("%f", &B[i][j]);
		}
	}
	
	soma=soma_linha_impar(B);
	
	printf("A soma das linhas impares eh: %.2f", soma);
	
	return 0;
	
}
