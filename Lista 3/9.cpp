#include<stdio.h>

main(){
	
	int i, N, n1=1, soma=3;
	
		printf("Insira a quantidade de termos da sequencia que voce quer: ");
		scanf("%i", &N);
		
		printf("%i\n", n1);
		
		for(i=1; i<N; i++){
			
			n1+=soma;
			soma=soma+2;
			
			printf("%i\n", n1);
			
		}
	
	
	
	
	
	
}
