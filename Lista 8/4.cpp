#include<string.h>
#include<stdio.h>


int main(){
	
	int i, j, supermenor;
	char super[4][101], produt[10][101];
	float preco[4][10], soma=0.0, menor;
	
	for(i=0;i<4;i++){
		printf("Digite o nome do supermercado %i:\n", i+1);
		gets(super[i]);
		for(j=0;j<10;j++){
			printf("Digite o nome do produto %i:\n", j+1);
			gets(produt[j]);
			printf("Digite o preco do produto %i:\n", j+1);
			scanf("%f", &preco[i][j]);
			getchar(); // para não bugar o gets, pois ela captura o enter(caracter) isso que buga
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<10;j++){
			soma+=preco[i][j];
		}
		
		if(soma<menor or i==0){
			menor=soma;
			supermenor=i;
		}
		
		soma=0.0;
	}
	
	printf("O supermercado mais barato eh o %s. A compra custara %.2f", super[supermenor], menor);
	
	return 0;

}

