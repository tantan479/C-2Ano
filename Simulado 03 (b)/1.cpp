#include<stdio.h>

int calcular_formula(int n){
	
	
	if(n==1){
		return n*n;
	}else{
		return n*n + calcular_formula(n-1); 
	}
	
}

int main(){
	
	int n;
	
	printf("Digite n:\n");
	scanf("%i", &n);
	
	printf("O resultado eh: %i", calcular_formula(n));
	
	return 0;
	
}
