#include<stdio.h>

float conv_feet(int feet){
	return feet*3.281;
}

main(){
	
	float feet;
	
	printf("Digite o valor em pes a ser convertido: \n");
	scanf("%f", &feet);
	
	printf("O valor convertido eh: %.2f", conv_feet(feet));
	
}
