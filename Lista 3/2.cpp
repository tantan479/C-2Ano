#include<stdio.h>

main(){
	
	float n, maior, menor, i=0, cont, soma, media;
	
	
	do{
		
	printf("Digite um numero: \n");
	scanf("%f", &n);
	
	if(n!=0){
		cont++;
		soma +=n;
	}
	
	if(i==0){
		maior = n;
		menor = n;
		i++;
	}
	
	if(n>maior){
		maior = n;
	}
	

	
	if(n<menor and n!=0){
		menor = n;
	}
		
	}while(n!=0);
	
	media = soma/cont;
	
	
	printf("Maior: %.2f \nMenor: %.2f \nMedia: %.2f", maior, menor, media);
	
	
	
	
}
