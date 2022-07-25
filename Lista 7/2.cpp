#include<stdio.h>

int main(){
	
	float mat [4][4], cont=0, soma=0;
	int i, j;
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			
			printf("Digite um numero[%i][%i]:\n", i, j);
			scanf("%f", &mat[i][j]);
			
		}
	}
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(i==j){
			
				soma+=mat[i][j];
				cont++;
				
			}	
		}
	}
	
	printf("A media da diagonal principal eh: %.2f ", soma/cont);
	
}
