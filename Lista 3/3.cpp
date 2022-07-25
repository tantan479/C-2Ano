#include<stdio.h>

main(){
	
	float media;
	int cont=0, soma=0, n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	while(n>0){
		
		printf("Digite um numero: ");
		scanf("%i", &n);
		
		if(n%3==0 and n>0){
			soma+=n;
			cont++;
		}
		
		
		
	}
	
	if(soma == 0){
		printf("\nA media eh 0 pois não foi digitado multiplo de 3");
	}else{
		
	media = soma/cont;	
	printf("A media aritmetica dos numeros multiplos 3 eh: %2.f", media);
	
	
	}


	
	
	
}
