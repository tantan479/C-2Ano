#include<stdio.h>

float conv_pol(int pol){
	return pol*2.54;
}

main(){
	
	float pol;
	
	printf("Digite o numero em polegadas que voce quer converter para cermtimetros: \n");
	scanf("%f", &pol);
	
	printf("Valor em cemtimetros: %.2f", conv_pol(pol));
	
	
}
