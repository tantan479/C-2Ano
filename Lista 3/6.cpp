#include<stdio.h>

main(){
	
	float A, soma=0;
	int B, i;
	
	printf("Digite um numero A: \n");
	scanf("%f", &A);
	
	printf("Digite um numero B: \n");
	scanf("%i", &B);
	
	
	
	
	for(i=0; i<B; i++){
		
		soma+=A;	
			
	}
	
	
	printf("A multiplicação entre esses numeros eh:%.2f", soma);
	
	
	
	
	
}
