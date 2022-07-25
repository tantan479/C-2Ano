#include<stdio.h>
#include<string.h>

struct habitante{
	int idade;
	char sexo;
	float salario;
	int numero_filhos;
};

void ler_dados(struct habitante habitante[5]){
	
	int i;
	
	for(i=0;i<5;i++){
		printf("Digite sua idade: \n");
		scanf("%i", &habitante[i].idade);
		printf("Digite seu sexo [M] ou [F]: \n");
		getchar();
		scanf("%c", &habitante[i].sexo);
		printf("Digite seu salario: \n");
		scanf("%f", &habitante[i].salario);
		printf("Digite a sua quantidade de filhos: \n");
		scanf("%i", &habitante[i].numero_filhos);
		printf("\n");
	}
	
}

void calcular_media_salario(struct habitante habitante[5]){
	
	int i, contador=0;
	float soma=0;
	
	for(i=0;i<5;i++){
		soma+=habitante[i].salario;
		contador++;
	}
	
	printf("\nA media dos salarios eh: %.2f", soma/contador);
	
}

int main(){
	
	struct habitante habitante[5];
	
	ler_dados(habitante);
	calcular_media_salario(habitante);
	
	return 0;
}
