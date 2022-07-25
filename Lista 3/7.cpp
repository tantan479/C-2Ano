#include<stdio.h>

main(){
	
	int N, i, fat=1;
	
	printf("Digite um numero que voce quer calcular a fatorial: ");
	scanf("%i", &N);
	
	for(i=1; i<N; i++){
		
		fat=fat*(i+1);
	
	}
	
	printf("A fatorial eh:%i", fat);
	
	
	
	
	
}
