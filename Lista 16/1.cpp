#include<stdio.h>

int fib(int n){
	
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else if(n>1){
		return fib(n-1)+fib(n-2);
	}
	
}

int main(){
	
	int n, fibn;;
	
	printf("Digite o n-esimo termo da sequencia de Fibonnaci que quer encontrar:\n");
	scanf("%i", &n);
	
	fibn = fib(n);
	
	printf("O termo %i eh: %i", n, fibn);
	
	return 0;
	
}
