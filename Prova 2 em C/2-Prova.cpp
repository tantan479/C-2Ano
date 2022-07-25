#include<stdio.h>

struct pessoa{
	char nome[50];
	float altura;
	float peso;
};

float calcular_imc_media(struct pessoa pessoas[100]){
	
	int i;
	float soma_imc=0, media_imc;
	
	for(i=0;i<100;i++){
		soma_imc+=(pessoas[i].peso/(pessoas[i].altura*pessoas[i].altura));
	}
	
	media_imc=soma_imc/100.0;
	
	return media_imc;
	
}


