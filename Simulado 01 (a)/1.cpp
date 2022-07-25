#include<stdio.h>
#include<string.h>

int main(){
	
	 int N, K, M, i;
	 
	 printf("Digite o tamanho da mochila: \n");
	 scanf("%i", &M);
	 printf("Digite o decremento: \n");
	 scanf("%i", &K);
	 printf("Digite o numero que inicia: \n");
	 scanf("%i", &N);
	 
	 printf("Numeros a serem colocados na mochila: ");
	 
	 for(i=N;i>0;i=i-K){
	 	printf("%i ", i);
	 }
	 
	 
	 
	 printf("\nNumeros que entraram na mochila: ");
	 
	 
	 for(i=N;i>0;i=i-K){
	 	
	 	if(i<=M){
	 		printf("%i ", i);
	 		M=M-i;
		 }
	 	
	 }
	 
	 
	return 0;
	 
	 
	
}
