#include<stdio.h>

int somar(int n1, int n2){
	
	if(n2==1){
		return n1;
	}else{
		return n1 + somar(n1, n2-1);
	}
	
}

int main(){
	
	int n1, n2;
	
	printf("Digite um numero para multiplicar:\n");
	scanf("%i", &n1);
	
	printf("Digite a quantidade de vezes que voce quer multiplicar:\n");
	scanf("%i", &n2);
	
	printf("Resultado: %i", somar(n1,n2));
	
	return 0;
	
}
