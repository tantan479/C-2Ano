#include<stdio.h>
#include <stdlib.h>//Para usar a fun??o que limpa a tela e pausa

typedef struct{
	char classe; // A ou B
	int fileira; // Colunas da Matriz
	int numero;  // Linhas da Matriz
	int status;  // 1 - Ocupada; 0 - Vazia
}poltrona;

void preencher_vaga(poltrona poltronas[6][20]){
	poltrona p;
	
	printf("\nPreenchendo a Vaga ...\n");
	printf("Digite o numero da fileira (0 - 19): ");
	scanf("%d", &p.fileira);
	printf("Digite o numero da poltrona (0 - 5): ");
	scanf("%d", &p.numero);
	getchar();
	printf("Digite a classe (A ou B): ");
	scanf("%c", &p.classe);
	
	if (((p.classe == 'A') && (p.fileira > 4)) || ((p.classe == 'B') && (p.fileira < 5))){
		printf("A fileira nao corresponde a classe!\n");
	}else if((p.fileira < 0) || (p.fileira > 19)){
		printf("A fileira informada esta fora dos limites (0 - 19)!\n");
	}else if((p.numero < 0) || (p.numero > 5)){
		printf("O numero informado esta fora dos limites (0 - 5)!\n");
	}else if((p.classe == 'A') && ((p.numero == 2)||(p.numero == 3))){
		printf("O numero de poltrona informado nao existe para a Classe A!");
	}else{
		p.status = 1;
		poltronas[p.numero][p.fileira] = p;
	}
}

void imprimir_poltronas(poltrona poltronas[6][20]){
	int i, j;
	for(i=0; i<6; i++){
		printf("\n");
		for(j=0; j<20; j++){
			if(((i==2)&&(j<5)) || ((i==3)&&(j<5))){ // Para n?o imprimir numero 2 e 3 das fileiras classe A
				printf("  ");
			}else{
				
				if(poltronas[i][j].status == 1){
					printf("X ");
				}else{
					printf("0 ");
				}
			}
		}
	}
	printf("\nA A A A A B B B B B B B B B B B B B B B\n\n");
}

void mostrar_fileiras_vazias(poltrona poltronas[6][20]){
	
	int i, j, aux=0;
	
	printf("Fileira vazia: ");
	
	for(i=0;i<20;i++){
		for(j=0;j<6;j++){
			if(poltronas[j][i].status==1){
				aux++;
			}
		}
		
		if(aux>0){
			aux=0;
		}else{
			printf("%i ", i);
		}
	}
	
}

float calcular_porc_janelas_vazias(poltrona poltronas[6][20]){
	
	int i,j, janelas_vazias=0;
	float porcentagem;
	
	janelas_vazias=0;
	
	for(i=0;i<6;i++){
		for(j=0;j<20;j++){
			if(i==0 || i==5){
				if(poltronas[i][j].status !=1){
					janelas_vazias++;
				}
			}
		}
	}
	
	porcentagem = (100*janelas_vazias)/40.0;
	return porcentagem;
	
}

int calcular_arrecadacao(poltrona poltronas[6][20]){
	
	int i, j, classeA=0, classeB=0, arrecadacao;
	
	for(i=0;i<6;i++){
		for(j=0;j<20;j++){
			if(poltronas[i][j].status == 1){
				if(poltronas[i][j].classe == 'A'){
					classeA++;
				}else{
					classeB++;
				}
			}
		}
	}
	
	arrecadacao = classeA*1000 + classeB*500;
	return arrecadacao;
	
}

int main(){
	poltrona poltronas[6][20];
	int opcao;
	float porcentagem, arrecadacao;

	do{
		printf("|-------------------MENU----------------------|\n");
		printf("| 1 Preencher Vaga                            |\n");
		printf("| 2 Imprimir Poltronas                        |\n");
		printf("| 3 Mostrar Fileiras Vazias                   |\n");
		printf("| 4 Calcular %%  de Poltronas de Janelas Vazias|\n");
		printf("| 5 Calcular Arrecadacao Total                |\n");
		printf("| 0 Sair do Programa                          |\n");
		printf("|---------------------------------------------|\n\n");

		printf("Digite a opcao: ");
		scanf("%d", &opcao);

		switch (opcao){
			case 1:
				preencher_vaga(poltronas);
				printf("\n\n");
				system("pause");//Apenas para pausar a tela
				system("cls");//Apenas para limpar a tela
				break;
			case 2:
				imprimir_poltronas(poltronas);
				printf("\n\n");
				system("pause");//Apenas para pausar a tela
				system("cls");//Apenas para limpar a tela
				break;
			case 3:
				mostrar_fileiras_vazias(poltronas);
				printf("\n\n");
				system("pause");//Apenas para pausar a tela
				system("cls");//Apenas para limpar a tela
				break;
			case 4:
				porcentagem = calcular_porc_janelas_vazias(poltronas);
				printf("A porcentagem de janelas vazias: %.2f %%", porcentagem);
				printf("\n\n");
				printf("\n\n");
				system("pause");//Apenas para pausar a tela
				system("cls");//Apenas para limpar a tela
				break;
			case 5:
				arrecadacao = calcular_arrecadacao(poltronas);
				printf("A arrecadacao total: R$ %.2f %", arrecadacao);
				printf("\n\n");
				system("pause");//Apenas para pausar a tela
				system("cls");//Apenas para limpar a tela
				break;
		}
	}while(opcao != 0);

	printf("\n\n");

}
