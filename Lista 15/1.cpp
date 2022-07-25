#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct tipo_produto{
	int id;
	char nome[100];
	int qtd;
	float custo;
};

void cadastrar_produto(){
	
	FILE *fp;
	struct tipo_produto produto;
	fp = fopen("produtos.bin", "ab");
	
	printf("Digite o id do produto:\n")
	scanf("%i", &tipo_produto.id);
	printf("Digite o nome do produto:\n")
	getchar();
	gets(tipo_produto.nome);
	printf("Digite a quantidade do produto:\n")
	scanf("%i", &tipo_produto.qtd);
	printf("Digite o custo do produto:\n")
	scanf("%f", &tipo_produto.custo);
	
	
}

void alterar_produto(int identificador){
	
	FILE *fp;
	
	fp = fopen("produtos.bin", "r+b");
	
	

}

void mostrar_todos_produtos(){

}

int main(){
	int opcao;
	int identificador;

	do{
		printf("|-------------------MENU-----------------|\n");
		printf("| 1 Cadastrar Produto                    |\n");
		printf("| 2 Alterar Produto                      |\n");
		printf("| 3 Relatorio - Mostrar Todos Produtos   |\n");
		printf("| 0 Sair do Programa                     |\n");
		printf("|----------------------------------------|\n\n");

		printf("Digite a opcao: ");
		scanf("%d", &opcao);

		switch (opcao){
		case 1:
			cadastrar_produto();
			system("cls");
			break;
		case 2:
			printf("\nDigite o ID do produto que deseja alterar: ");
			scanf("%d", &identificador);
			alterar_produto(identificador);
			break;
		case 3:
			mostrar_todos_produtos();
			break;
		}
	}while(opcao != 0);

	printf("\n\n");

}
