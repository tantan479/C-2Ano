#include<stdio.h>

void calcular_descontos(float preco, float *d10, float *d20){
	
	*d10 = preco-(preco*0.1);
	*d20 = preco-(preco*0.2);
	
	printf("O produto custava %.2f agora com o desconto de %.2f (10 por cento) o novo valor eh: %.2f\n\n", preco, preco*0.1, *d10);
	printf("O produto custava %.2f agora com o desconto de %.2f (20 por cento) o novo valor eh: %.2f\n\n", preco, preco*0.2, *d20);
	
	
}




int main(){
	
	float preco, d10, d20;
	
	printf("Insira o valor do produto: \n");
	scanf("%f", &preco);
	
	calcular_descontos(preco, &d10, &d20);
	
	return 0;
	
}
