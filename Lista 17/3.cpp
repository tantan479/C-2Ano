#include<stdio.h>

float soma_Serie(float n){
	
	if(n==1){
		return 2;
	}else{
		return (((1+(n*n))/n) +soma_Serie(n-1));
	}
	
}

int main(){
	
	float n;
	
	printf("Digite um valor maior que zero (n) para a serie:\n");
	scanf("%f", &n);
	
	printf("A soma da serie eh: %.2f", soma_Serie(n));
	
	return 0;
	
}
