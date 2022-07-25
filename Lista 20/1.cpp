#include<stdio.h>

void calcular_descontos(float salario, float* INSS, float* IR){
	
	*INSS=0.10*salario;
	*IR=0.075*salario;
	
}


int main(){
	
	float salario, INSS, IR;
	
	printf("Digite seu salario:\n");
	scanf("%f", &salario);
	
	calcular_descontos(salario, &INSS, &IR);
	
	printf("INSS:%.2f\nIR:%.2f", INSS, IR);
	
	return 0;
	
}
