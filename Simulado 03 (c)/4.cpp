#include<stdio.h>

void maior_menor(int* a, int* b){
	
	int aux;
	
	if(*a>*b){
		aux=*b;
		*b=*a;
		*a=aux;
	}
	
}

int main(){
	
	int a, b;
	
	printf("Digite o valor de a:\n");
	scanf("%i", &a);
	
	printf("Digite o valor de b:\n");
	scanf("%i", &b);
	
	maior_menor(&a, &b);
	
	printf("Menor:%i\n", a);
	printf("Maior:%i\n", b);
	
	return 0;
		
}
