#include<stdio.h>
#include<string.h>
#include<unistd.h>

int voos_cadastrados=0;


struct voo{
	int codigo;
	char horario[100];
	int qtd_passageiros;
	float valor;
	char origem[100];
	char destino[100];
};

void cadastrar_voo(struct voo voos[]){
	
	printf("Digite o codigo:\n");
	scanf("%i", &voos[voos_cadastrados].codigo);
	printf("Digite o horario da partida:\n");
	getchar();
	gets(voos[voos_cadastrados].horario);
	printf("Digite a quantidade de passageiros:\n");
	scanf("%i", &voos[voos_cadastrados].qtd_passageiros);
	printf("Digite o valor:\n");
	scanf("%f", &voos[voos_cadastrados].valor);
	printf("Digite a origem:\n");
	getchar();
	gets(voos[voos_cadastrados].origem);
	printf("Digite o destino:\n");
	gets(voos[voos_cadastrados].destino);
	printf("Salvando...");
	sleep(1);
	system("cls");
	voos_cadastrados++;
	
}

void mostrar_voos_origem(struct voo voos[], char origem[]){
	
	int i;
	
	for(i=0;i<voos_cadastrados;i++){
		if(strcmp(voos[i].origem, origem) == 0){
			printf("\nCodigo: %i\n", voos[i].codigo);
			printf("Horario: ");
			puts(voos[i].horario);
			printf("Valor: %.2f\n", voos[i].valor);
			printf("Destino: ");
			puts(voos[i].destino);
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
	struct voo voos[100];
	char origem[100];
	
	do{
		printf("------------------------------\n");
		printf("1 - Cadastrar voo\n");
		printf("2 - Mostrar voos por origem\n");
		printf("0 - Sair do programa\n");
		printf("------------------------------\n");
		printf("\nEscolha: ");
		scanf("%i", &a);
		
		switch (a){
			case 1:
				cadastrar_voo(voos);
				break;
			case 2:
				printf("Digite a origem:\n");
				getchar();
				gets(origem);
				mostrar_voos_origem(voos, origem);
				break;
			case 0:
				aux=1;
				sair_programa();
				break;
			default:
				printf("Opcao invalida!");
				sleep(1);
				system("cls");
		}
		
	}while(aux==0);
	
	return 0;
	
}
