#include<stdio.h>


main(){
	
	int NUM,menor, n, i;
	
	printf("Digite um numero NUM: \n");
	scanf("%i", &NUM);
	
	for(i=0; i<NUM; i++){
		
		printf("Numero %i: \n", i+1);
		scanf("%i", &n);
		
		if(i==0 or menor > n){
			menor = n;
		}
	}
	
	printf("O menor dos numeros lidos eh: %i", menor);
	
	
	
	
	
	
}


