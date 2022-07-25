#include<stdio.h>

int main(){
	
	float distancia[6][6], distancia_final=0;
	int i, j, cidade[6];
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("Digite o numero da celula[%i][%i]: \n", i, j);
			scanf("%f", &distancia[i][j]);
		}
	}
	
	for(i=0;i<6;i++){
		printf("Rota da viagem: \n");
		scanf("%i", &cidade[i]);
	}
	
	for(i=0;i<5;i++){
		distancia_final+= distancia[cidade[i]][cidade[i+1]];
	}
	
	printf("A distancia eh: %.2f", distancia_final);
	
	return 0;
	
}
