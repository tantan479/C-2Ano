#include<stdio.h>

int tamanhos(char palavra[100]){
	
	int i, contador=0;
	
	for(i=0;palavra[i]!='\0';i++){
		contador++;
	}
	
	return contador;
}



int main(){
	
	int tamanho;
	char palavra[100];
	
	printf("Digite a palavra: \n");
	gets( palavra);
	
	tamanho=tamanhos(palavra);
	
	printf("O tamanho eh: %i", tamanho);
	
	
		
	
	return 0;
	
}
