#include<stdio.h>

int main(){
	
	float R [4][5], maior;
	int i, j, maior_i, maior_j, cont=0;
	
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			
			printf("Digite um numero: \n");
			scanf("%f", &R[i][j]);
			
		}
	}
	
	
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			if(R[i][j] > maior or cont==0){
				
				maior_i=i;
				maior_j=j;
				maior=R[i][j];
				
			}
			
			cont++;
		
		}
	}
	
	printf("Maior elemento eh o de posicao [%i][%i]: %.2f", maior_i, maior_j, maior);
	
	return 0;
	
}
