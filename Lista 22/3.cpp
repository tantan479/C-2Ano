/*
Curso T?cnico em Inform?tica - 2? Ano - Programa??o I
Descri??o: Programa que tem como objetivo apresentar a manipula??o de uma lista encadeada, por meio
das fun??es de inser??o, impress?o e pesquisa.

Autor: Rafael Vargas Mesquita
Data de cria??o: 08/11/2010
?ltima altera??o: 02/03/2012
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

/* ---------------------------------------------------------------------------------------*/
/*           [IN?CIO] Declara??o das estruturas e prot?tipos de fun??o [IN?CIO]           */
/*VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV*/

typedef struct pessoa{
	int codigo;
	char nome[40];
	char nacionalidade[20];
	char estado_civil[15];
}Pessoa;


typedef struct no {
	Pessoa info;
	struct no* prox;
} No;

typedef struct lista {
	No* prim;
} Lista;


// prototipa??o das fun??es
void menu();
Lista *inicializa (void);	
void insere (Lista *l, int cod, char nome[40], char nacionalidade[20], char estado_civil[15]);
void imprime (Lista *l);
int vazia (Lista *l);
int busca (Lista *l, int v);
int retira (Lista* l, int v);

/* ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
/*          [T?RMINO] Declara??o das estruturas e prot?tipos de fun??o [T?RMINO]          */
/* ---------------------------------------------------------------------------------------*/



/* ---------------------------------------------------------------------------------------*/
/*                    [IN?CIO] Fun??o Principal do Programa 'Main' [IN?CIO]               */
/*VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV*/

int main (){
	// cria um ponteiro para a lista
	Lista *l;
	int r;
	int op, cod;
	char nome[40], nac[20], estad[15]; 

	do{
		system("cls");
		menu();
		scanf("%d", &op);

		// verifica a op??o digitada pelo usu?rio
		switch(op){
			// cria a lista
			case 1:
				// inicializa lista como vazia
				l = inicializa();
				printf("\n\t\tA lista foi criada com sucesso!!!");
				printf("\n\t\tTecle <ENTER> para continuar");
				getch();
				break;

			// insere elementos na lista
			case 2:
				printf("\n\t\tInforme o novo codigo: ");
				scanf("%d", &cod);
				printf("\n\t\tDigite o nome:");
				getchar();
				gets(nome);
				printf("\n\t\tDigite a nacionalide: ");
				gets(nac);
				printf("\n\t\tDigite o estado civil: ");
				gets(estad);

				// insere na lista o elemento informado pelo usu?rio
				insere(l, cod, nome, nac, estad); 

				printf("\n\t\tElemento inserido na lista com sucesso!!!");
				printf("\n\t\tTecle <ENTER> para continuar");
				getch();
				break;

			// imprime elementos da lista
			case 3:
				//	 verificar se a lista est? vazia
				if(!vazia(l)){
					// imprime os elementos da lista
					imprime(l);
					printf("\n\t\tTecle <ENTER> para continuar");
					getch();
				}
				else{
					printf("\n\t\tA lista estah vazia!\n");
					printf("\n\t\tTecle <ENTER> para continuar");
					getch();
				}
				break; 

			// busca um elemento na lista
			case 4:
				printf("\n\t\tDigite um codigo a ser pesquisado: ");
				scanf("%d", &cod);
				r = busca(l, cod);
				if(r){
					printf("\n\t\tO codigo estah na lista!\n\n");
					printf("\n\t\tTecle <ENTER> para continuar");
					getch();
				}
				else{
					printf("\n\t\tO valor nao estah na lista!\n\n");			
					printf("\n\t\tTecle <ENTER> para continuar");
					getch();
				}
				break;

			// retira um elemento da lista
			case 5:
				printf("\n\t\tDigite o codigo a ser retirado: ");
				scanf("%d", &cod);
				r = retira(l, cod); 

				if(r == 1){
				    printf("\n\t\tElemento removido da lista com sucesso!!!");
				}else{
					printf("\n\t\tElemento nao existe na lista!!!");
				}
				printf("\n\t\tTecle <ENTER> para continuar");
				getch();
				break;
			
			// sai do programa
			case 6:
				printf("\n\t\tFim do Programa!\n");
				break;

			// se o usu?rio digitar uma op??o fora da faixa entre 1 e 6
			default:
				printf("\n\tOpcao invalida!\n");
		} // fim do switch
	}while(op != 6); // fim do..while

	printf("\n");
	return 0;
}
/* ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
/*                   [T?RMINO] Fun??o Principal do Programa 'Main' [T?RMINO]              */
/* ---------------------------------------------------------------------------------------*/




/* ---------------------------------------------------------------------------------------*/
/*      [IN?CIO] Implementa??es das Fun??es da Lista Simplesmente Encadeada [IN?CIO]      */
/*VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV*/
// fun??o que inicializa a lista
Lista* inicializa (){
	Lista *nova = (Lista *) malloc(sizeof(Lista));
	if (!nova){
		printf("Lista_nova: nao foi possivel alocar espaco para uma nova Lista. ");
		exit(1);
	}

	/* Inicializa os dados */
	nova->prim = NULL;
	return nova;
}


// insere elemento novo na lista (no in?cio)
void insere (Lista *l,  int cod, char nome[40], char nacionalidade[20], char estado_civil[15]){
	No *novo = (No*) malloc(sizeof(No));
	novo->info.codigo = cod;
	strcpy(novo->info.nome, nome);
	strcpy(novo->info.estado_civil, estado_civil);
	strcpy(novo->info.nacionalidade, nacionalidade);
	novo->prox = l->prim;

	l->prim = novo;
}


// imprime os elementos da lista
void imprime (Lista *l){
	No *aux; /* vari?vel auxiliar para percorrer a fila */

	printf("\n\t\tElementos da Lista\n");
	for (aux = l->prim; aux != NULL; aux = aux->prox){
		printf("\n");
		printf("\t\tCod = %d\n", aux->info.codigo);
		printf("\t\tNome = %s\n", aux->info.nome);
		printf("\t\tNacionalidade = %s\n", aux->info.nacionalidade);
		printf("\t\tEstado Civil = %s\n", aux->info.estado_civil);
		}
	

	printf("\n");
}


// retorna 1 se vazia ou 0 se n?o vazia
int vazia (Lista *l){
	return (l->prim == NULL);
}


// busca um elemento na lista

int busca (Lista *l, int v){
	No *aux; /* vari?vel auxiliar para percorrer a lista */
	for (aux = l->prim; aux != NULL; aux = aux->prox)
		if (aux->info.codigo == v)
			return 1;

	// n?o achou o elemento
	return 0; 
}

// retira um elemento da lista
int retira (Lista* l, int v){
	No *ant = NULL; /* ponteiro para elemento anterior */
	No *aux = l->prim; /* ponteiro para percorrer a lista*/
	/* procura elemento na lista, guardando anterior */
	while (aux != NULL && aux->info.codigo != v) {
		ant = aux;
		aux = aux->prox;
	}

	if (aux == NULL) /* verifica se achou elemento */
		return 0; /* n?o achou: retorna lista original */
	/* retira elemento */
	if (ant == NULL) { /* retira elemento do inicio */
		l->prim = aux->prox;
	}
	else {/* retira elemento do meio da lista */
		ant->prox = aux->prox; 
	}
	free(aux);
	return 1;
}



// monta o menu do programa
void menu(){
	printf("\n\t\t#### Programa Simula Lista Encadeada ####\n");
	printf("\n\t\t1- Cria Lista Encadeada");
	printf("\n\t\t2- Insere Elementos na Lista Encadeada");
	printf("\n\t\t3- Imprime a Lista Encadeada");
	printf("\n\t\t4- Pesquisa Elementos na Lista Encadeada");
	printf("\n\t\t5- Retira Elementos da Lista Encadeada");
	printf("\n\t\t6- Sair do Programa");
	printf("\n\n\t\tDigite a opcao desejada: ");
}
/* ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
/*     [T?RMINO] Implementa??es das Fun??es da Lista Simplesmente Encadeada [T?RMINO]     */
/* ---------------------------------------------------------------------------------------*/
