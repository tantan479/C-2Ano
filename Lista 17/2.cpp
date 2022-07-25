#include<stdio.h>


void imprimeSerie(int i, int j, int k){
	
	i+=k;
	
	if(i<j){
		printf("%i ", i);
		imprimeSerie(i, j, k);
	}
	
}


int main(){
	
	int i, j, k;
	
	printf("Digite um valor inicial:\n");
	scanf("%i", &i);
	printf("Digite o valor final:\n");
	scanf("%i", &j);
	printf("Digite o incremento:\n");
	scanf("%i", &k);
	
	imprimeSerie(i, j, k);
	
	return 0;
	
}


