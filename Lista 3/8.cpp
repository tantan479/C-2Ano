#include<stdio.h>

main(){
	
	int N, i, fibo1=0, fibo2=1, fibo3;
	
	printf("Insira a quantidade de termos da sequencia de Fibonnaci que voce quer: ");
	scanf("%i", &N);
	
	printf("1\n");
	
	for(i=1;i<N;i++){
		
		fibo3=fibo1+fibo2;
		fibo1=fibo2;
		fibo2=fibo3;
		
		printf("%i\n", fibo3);
		
	}
}
