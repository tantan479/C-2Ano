#include<stdio.h>
#include<string.h>
#include<unistd.h>

int produtos_cadastrados=0;

struct produto{
	int codigo;
	char descricao[100];
	int estoque_min;
	int estoque_atu;
	float preco;
};

void cadastrar_produtos(struct produto produtos[]){
	
	printf("Digite o codigo do produto:\n");
	scanf("%i", &produtos[produtos_cadastrados].codigo);
	printf("Digite a descricao do produto:\n");
	getchar();
	gets(produtos[produtos_cadastrados].descricao);
	printf("Digite o estoque minimo:\n");
	scanf("%i", &produtos[produtos_cadastrados].estoque_min);
	printf("Digite o estoque atual:\n");
	scanf("%i", &produtos[produtos_cadastrados].estoque_atu);
	printf("Digite o preco:\n");
	scanf("%f", &produtos[produtos_cadastrados].preco);
	produtos_cadastrados++;
	printf("Salvando...");
	sleep(1);
	system("cls");
	
}

void mostrar_produtos_abaixo_estoque_minimo(struct produto produtos[]){
	
	int i;
	
	for(i=0;i<produtos_cadastrados;i++){
		if(produtos[i].estoque_atu<produtos[i].estoque_min){
			printf("Codigo: %i\n", produtos[i].codigo);
			printf("Descricao: ");
			puts(produtos[i].descricao);
			printf("Estoque minimo: %i\n", produtos[i].estoque_min);
			printf("Estoque atual: %i\n", produtos[i].estoque_atu);
			printf("Preco: %.2f\n", produtos[i].preco);
			sleep(1);
			printf("\n");
		}
	}
	
	sleep(5);
	system("cls");
	
}

void sair_programa(){
	
	sleep(1);
	printf("\n\nSaindo do programa...");
	
}

int main(){
	
	int aux=0, a;
	struct produto produtos[100];
	
	do{
		
		printf("---------------------------------------------\n");
		printf("1 - Cadastrar produtos\n");
		printf("2 - Mostrar produtos abaixo do estoque minimo\n");
		printf("0 - Sair do programa\n");
		printf("---------------------------------------------\n");
		printf("Escolha:");
		scanf("%i", &a);
		
		switch (a){
			case 1:
				cadastrar_produtos(produtos);
				break;
			case 2:
				mostrar_produtos_abaixo_estoque_minimo(produtos);
				break;
			case 0:
				aux=1;
				sair_programa(); 
				break;
			default:
				printf("Opcao invalida!");
				sleep(1);
				system("cls");
		};
		
	}while(aux==0);
	
	return 0;
	
}
