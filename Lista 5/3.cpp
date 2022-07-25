#include<stdio.h>

criar_vetor(int vet[20]){
	
	int i;
	
	for(i=0; i<20; i++){
		vet[i] = (i+1)*(i+1);
	}
	
}

imprimir_vetor(int vet[20]){
	
	int i;
	
	for(i=0; i<20; i++){
		printf("%i\n", vet[i]);
	}
	
}







main(){
	
	int vet[20];
	
	criar_vetor(vet);
	
	imprimir_vetor(vet);
	
	return 0;
	
}
