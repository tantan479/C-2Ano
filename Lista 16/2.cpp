#include<stdio.h>

float elevador(float x, int n){
	
	if(n==0){
		return 1;
	}else if(n>0){
		return x*elevador(x,n-1);
	}else{
		printf("n invalido!");
	}
	
}

int main(){
	
	int n;
	float x, resultado;
	
	printf("Eleve um numero real (x) a um inteiro (n):\n");
	printf("Digite x:\n");
	scanf("%f", &x);
	printf("Digite n:\n");
	scanf("%i", &n);
	
	printf("O resultado eh: %.2f", elevador(x,n));
	
	return 0;
	
}
