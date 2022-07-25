#include<stdio.h>
#include<string.h>

struct livro{
	char nome[50];
	char isbn[13];
	int ano_edicao;
	int paginas;
	float preco;
};

int main(){
	
	int i, soma_paginas=0;
	struct livro livro[5];
	
	for(i=0;i<5;i++){
		printf("Digite o nome do livro: \n");
		gets(livro[i].nome);
		printf("Digite o isbn do livro: \n");
		gets(livro[i].isbn);
		printf("Digite o ano da edicao: \n");
		scanf("%i", &livro[i].ano_edicao);
		printf("Digite o numero de paginas: \n");
		scanf("%i", &livro[i].paginas);
		printf("Digite o preco do livro: \n");
		scanf("%f", &livro[i].preco);
		getchar();
		printf("\n");
	}
	
	for(i=0;i<5;i++){
		soma_paginas+=livro[i].paginas;
	}
	
	printf("A media de paginas eh: %.2f", soma_paginas/5.0);
	
	return 0;
	
}
