#include<stdio.h>

criar_vetor(int vet[100]){
	
	int i, j=100;
	
	for(i=0;i<=99;i++){
		vet[i]=j;
		j--;
	}
}

imprimir_vetor(int vet[100]){
	
	int i;
	
	for(i=0;i<=99;i++){
		printf("%0.2f\t\n", vet[i]/2.0);
	}
	
	
}






main(){
	
	int vet[100];
	
	criar_vetor(vet);
	
	imprimir_vetor(vet);
	
	return 0;
}
