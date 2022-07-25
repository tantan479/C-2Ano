#include<stdio.h>

void determinar_lar_alt(int qtd, int* lar, int* alt){
	
	if(qtd>0 and qtd<=25){
		*lar=50;
		*alt=25;
	}else if(qtd<=40){
		*lar=50;
		*alt=50;
	}else if(qtd<=60){
		*lar=75;
		*alt=50;
	}else if(qtd<=80){
		*lar=100;
		*alt=50;
	}else{
		printf("Valores nai disponiveis");
	}
	
}

int main(){
	
	int qtd, lar=0, alt=0;
	
	printf("Informe a quantidade de cabos UTP:\n");
	scanf("%i", &qtd);
	
	determinar_lar_alt(qtd, &lar, &alt);
	
	
	if(lar!=0 and alt!=0)
	printf("Largura: %i\nAltura: %i", lar, alt);
	
	return 0;
	
}
