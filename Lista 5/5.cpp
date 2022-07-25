#include<stdio.h>

void receber_dados(float vet[10]){
	
	int i;
	
	for(i=0; i<10; i++){
		printf("Altura Atleta %i: ", i+1);
		scanf("%f", &vet[i]);
	}
}

void imprimir_resultado(float vet[10]){
	
	int i;
	float media, soma=0;	
		
		
	for(i=0; i<10; i++){
		soma+=vet[i];
	}
	
	media= soma/10;
	
	
	for(i=0; i<10; i++){
		if(vet[i]<media){
			printf("%f\n", vet[i]);
		}
	}
}




main(){
	
	float altura[10];
	
	receber_dados(altura);
	
	imprimir_resultado(altura);
	
	return 0;
}
