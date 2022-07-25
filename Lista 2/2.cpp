#include<stdio.h>

main(){
	
	float A, B, maior, menor;
	
	printf("Digite o numero A: \n");
	scanf("%f", &A);
	printf("Digite o numero B: \n");
	scanf("%f", &B);
	
	if(A>B){
		maior = A;
		menor = B;
	}else {
		menor = A;
		maior = B;
	}
	
	printf("Maior: %.2f", maior);
	printf("\nMenor: %.2f", menor);
	
	
	
	
	
	
	
	
}
