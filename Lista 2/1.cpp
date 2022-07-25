#include<stdio.h>

main(){
	
	float n1, n2, soma;
	
	
	printf("Digite o numero 1: \n");
	scanf("%f", &n1);
	printf("Digite o numero 2: \n");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	
	if (soma >20){
		soma = soma + 8;
	}else{
	soma = soma - 5;
	}
	
	printf("O resultado eh:  %.2f", soma);
	
	
	
	
	
	
	
}
