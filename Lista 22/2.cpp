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

/* ---------------------------------------------------------------------------------------*/
/*           [IN?CIO] Declara??o das estruturas e prot?tipos de fun??o [IN?CIO]           */
/*VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV*/

typedef struct no {
	int info;
	struct no* prox;
} No;

typedef struct lista {
	No* prim;
} Lista;


// prototipa??o das fun??es
void menu();
Lista *inicializa (void);	
void insere (Lista *l, int i);
void imprime (Lista *l);
int vazia (Lista *l);
int busca (Lista *l, int v);
int retira (Lista* l, int v);
int busca_minimo(Lista *l);

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
	int op, num;

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
				printf("\n\t\tInforme o novo valor: ");
				scanf("%d", &num);

				// insere na lista o elemento informado pelo usu?rio
				insere(l, num); 

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
				printf("\n\t\tDigite um valor a ser pesquisado: ");
				scanf("%d", &num);
				r = busca(l, num);
				if(r){
					printf("\n\t\tO valor estah na lista!\n\n");
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
				printf("\n\t\tDigite um valor a ser retirado: ");
				scanf("%d", &num);
				r = retira(l, num); 

				if(r == 1){
				    printf("\n\t\tElemento removido da lista com sucesso!!!");
				}else{
					printf("\n\t\tElemento nao existe na lista!!!");
				}
				printf("\n\t\tTecle <ENTER> para continuar");
				getch();
				break;
			
			
			case 6:
				
				if(!vazia(l)){
					printf("\t\tO menor valor encontrado eh:%i", busca_minimo(l));
					printf("\n\t\tTecle <ENTER> para continuar");
					getch();
				}
				else{
					printf("\n\t\tA lista estah vazia!\n");
					printf("\n\t\tTecle <ENTER> para continuar");
					getch();
				}
				break;
			
			// sai do programa
			case 7:
				printf("\n\t\tFim do Programa!\n");
				break;

			// se o usu?rio digitar uma op??o fora da faixa entre 1 e 6
			default:
				printf("\n\tOpcao invalida!\n");
		} // fim do switch
	}while(op != 7); // fim do..while

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
void insere (Lista *l, int v){
	No *novo = (No*) malloc(sizeof(No));
	novo->info = v;
	novo->prox = l->prim;

	l->prim = novo;
}


// imprime os elementos da lista
void imprime (Lista *l){
	No *aux; /* vari?vel auxiliar para percorrer a fila */

	printf("\n\t\tElementos da Lista\n");
	for (aux = l->prim; aux != NULL; aux = aux->prox)
		printf("\t\tInfo = %d\n", aux->info);

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
		if (aux->info == v)
			return 1;

	// n?o achou o elemento
	return 0; 
}

// retira um elemento da lista
int retira (Lista* l, int v){
	No *ant = NULL; /* ponteiro para elemento anterior */
	No *aux = l->prim; /* ponteiro para percorrer a lista*/
	/* procura elemento na lista, guardando anterior */
	while (aux != NULL && aux->info != v) {
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

int busca_minimo(Lista *l){
	No *aux; /* vari?vel auxiliar para percorrer a lista */
	int men;
	
	for (aux = l->prim; aux != NULL; aux = aux->prox){
		if(men>aux->info or aux==l->prim){
			men=aux->info;
		}
	}
	
	return men;
	
}



// monta o menu do programa
void menu(){
	printf("\n\t\t#### Programa Simula Lista Encadeada ####\n");
	printf("\n\t\t1- Cria Lista Encadeada");
	printf("\n\t\t2- Insere Elementos na Lista Encadeada");
	printf("\n\t\t3- Imprime a Lista Encadeada");
	printf("\n\t\t4- Pesquisa Elementos na Lista Encadeada");
	printf("\n\t\t5- Retira Elementos da Lista Encadeada");
	printf("\n\t\t6- Pesquisa pelo Elemento Mínimo na Lista Encadeada");
	printf("\n\t\t7- Sair do Programa");
	printf("\n\n\t\tDigite a opcao desejada: ");
}
/* ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
/*     [T?RMINO] Implementa??es das Fun??es da Lista Simplesmente Encadeada [T?RMINO]     */
/* ---------------------------------------------------------------------------------------*/
