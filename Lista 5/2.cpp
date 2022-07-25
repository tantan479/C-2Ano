#include<stdio.h>

int j=0;

criar_vetor(int vet[100]){
	
	int i;
	
	for(i=0; i<=99; i++){
		
		if((i+1)%2==0){
			vet[j]= i+1;
			j++;
		}
		
	}
}

imprimir_vetor(int vet[100]){
	
	int i;
	
	for(i=0; i<j; i++){
		printf("%i\n", vet[i]);
	}
	
	}
	

main(){
	
	int vet[100];
	
	criar_vetor(vet);
	
	
	
	imprimir_vetor(vet);
	
	return 0;
	
}
