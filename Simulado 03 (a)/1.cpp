#include<stdio.h>

int calcular_fatorial(int num){
	
	if(num == 1 or num == 0){
		return 1;
	}else{
		return num*calcular_fatorial(num-1);
	}
	
}

int main(){
	
	int num, fat;
	
	printf("Digite o numero em que deseja calcular a fatorial:\n");
	scanf("%i", &num);
	
	printf("A fatorial eh: %i", calcular_fatorial(num));
	
	return 0;
	
}
