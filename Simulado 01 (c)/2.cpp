#include<stdio.h>

void calcular(int numeros[100]){
	
	int i, soma_par=0, soma_impar=0;
	
	for(i=0;i<100; i++){
		if(numeros[i]%2==0){
			soma_par+=numeros[i];
		}else{
			soma_impar+=numeros[i];
		}
	}
	
	
	printf("Soma par: %i\nSoma impar: %i", soma_par, soma_impar);
	
}


int main(){
	
	int numeros[100], i;
	
	for(i=0;i<100; i++){
		numeros[i]=i+1;
	}
	
	calcular(numeros);
	
	return 0;
	
}
