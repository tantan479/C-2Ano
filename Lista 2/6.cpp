#include<stdio.h>

main(){
	
	float n1, n2, media;
	
	printf("Digite a nota 1: ");
	scanf("%f", &n1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &n2);
	
	
	media = (n1+n2)/2.0;
	
	if(media>=7){
		printf("Aprovado");
	}else if(media<7 and media>=3){
		printf("Exame");
	}else{
		printf("Reprovado");
	}
	
	
	
	
	
	
	
	
	
	
	
}
