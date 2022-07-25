#include<stdio.h>
#include<string.h>
#include<unistd.h>

//Autores: Renato Ribeiro Akoé e Rodrigo Lopes Neves;

struct betoneira{
	char nome[30];
	float capacidade;
	int id;
	float velocidade_rotacao;
};

void sair_programa(){ //opção 0;
	sleep(1);
	printf("\n\nSaindo do programa...");	
}

void cadastrar_registro(){ //opção 1;
	struct betoneira betoneiras;
	FILE *fp;
	
	printf("Digite o ID:\n");
	scanf("%i", &betoneiras.id);
	getchar();
	printf("Digite o nome da betoneira:\n");
	gets(betoneiras.nome);
	printf("Digite a capacidade da betoneira em litros:\n");
	scanf("%f", &betoneiras.capacidade);
	printf("Digite a velocidade de rotação desta betoneira:\n");
	scanf("%f", &betoneiras.velocidade_rotacao);
	
	fp = fopen("betoneira.bin", "ab");
	if(fwrite(&betoneiras, sizeof(struct betoneira), 1, fp) != 1)
		printf("Erro ao cadastrar");
	fclose(fp);
}

void alterar_registro(int id){ //opção 2;
	struct betoneira betoneiras;
	FILE *fp;
	int aux = 0;
	
	fp = fopen("betoneira.bin", "r+b");
	
	while(!feof(fp)){
		fread(&betoneiras, sizeof(struct betoneira), 1, fp);
		if(betoneiras.id == id){
			aux = 1;
			break;
		}
	}
	
	if(aux == 1){
		printf("\nAtualizando os dados da betoneira:\n");
		printf("Digite o ID:\n");
		scanf("%i", &betoneiras.id);
		printf("Digite o nome da betoneira:\n");
		getchar();
		gets(betoneiras.nome);
		printf("Digite a capacidade da betoneira:\n");
		scanf("%f", &betoneiras.capacidade);
		printf("Digite a velocidade de rotação desta betoneira:\n");
		scanf("%f", &betoneiras.velocidade_rotacao);
		
		fseek(fp, - sizeof(struct betoneira), SEEK_CUR);
		fwrite(&betoneiras, sizeof(struct betoneira), 1, fp);
		fclose(fp);
	}else{
		printf("Produto inexistente\n");
	}
}

void mostrar_todos_os_registros(){ //opção 3;
	struct betoneira betoneiras;
	FILE *fp;
	printf("\n***Mostrando todos os registros***");

	fp = fopen("betoneira.bin", "rb");

	if (!fp){
		printf("Cadastro vazio!\n\n");
	}else{
		fread(&betoneiras, sizeof(struct betoneira), 1,fp);
		do
		{
			printf("\n\nID da betoneira: %i\n", betoneiras.id);
			printf("Nome da betoneira: %s\n", betoneiras.nome[0]);
			printf("Modelo do carro: %.2f\n", betoneiras.capacidade);
			printf("Velocidade de rotação da betoneira: %0.2f\n", betoneiras.velocidade_rotacao);
			fread(&betoneiras, sizeof(struct betoneira), 1, fp);
		}while(!feof(fp));
		fclose(fp);
		system("\n\npause");
		system("cls");
	}
}

void mostrar_todos_pela_condicao(){ //opção 4;
	struct betoneira betoneiras;
	FILE *fp;
	printf("\n***Escolha um filtro***\n");
	fp = fopen("betoneira.bin", "rb");
	int x, aux=0;;
	char nome[50];
	float velocidade;
	printf("\n1-Nome da betoneira \n");
	printf("\n2-Velocidade de rotação da betoneira \n\n");
	printf("Digite a opcao: ");
	scanf("%i",&x);
		switch (x){
			case 1:
				printf("\nDigite o nome da betoneira: \n");
				getchar();
				gets(nome);
				fread(&betoneiras, sizeof(struct betoneira), 1,fp);
				do
				{
					if(strcmp(nome, betoneiras.nome)==0){
					printf("\n\nID da betoneira: %i\n", betoneiras.id);
					printf("Nome do carro: %s\n", betoneiras.nome);
					printf("Capacidade da betoneira: %.2f\n", betoneiras.capacidade);
					printf("Velocidade de rotação: %0.2f\n", betoneiras.velocidade_rotacao);
					aux++;
					}
					fread(&betoneiras, sizeof(struct betoneira), 1, fp);
				}while(!feof(fp));
				
				if(aux==0){
					printf("Nao ha betoneira desse modelo.\n");
				}
				aux==0;
				break;
			case 2:
				printf("\nDigite a velocidade de rotacao: ");
				scanf("%f",&velocidade);
				fread(&betoneiras, sizeof(struct betoneira), 1,fp);
		
				do
				{
					if(betoneiras.velocidade_rotacao==velocidade){
					printf("\n\nID da betoneira: %i\n", betoneiras.id);
					printf("Nome do carro: %s\n", betoneiras.nome);
					printf("Capacidade da betoneira: %.2f\n", betoneiras.capacidade);
					printf("Velocidade de rotação: %0.2f\n", betoneiras.velocidade_rotacao);
					aux++;
					}
					fread(&betoneiras, sizeof(struct betoneira), 1, fp);
				}while(!feof(fp));
				if(aux==0){
					printf("Nao ha betoneira desse modelo.\n");
				}
				aux==0;	
				break;
			default:
				printf("Opcao invalida!");
				sleep(1);
				system("cls");
		};	
		
	fclose(fp);
	system("\n\npause");
	system("cls");
}



int main(){
	
	int op, id;
	
	do{
		
		printf("------------------------------------------------------------------------------\n");
		printf("1 - Cadastrar Registro\n");
		printf("2 - Alterar registro\n");
		printf("3 - Mostrar Todos os Registros\n");
		printf("4 - Mostrar Todos os Registros por filtros\n");
		printf("0 - Sair do programa\n");
		printf("------------------------------------------------------------------------------\n");
		printf("Escolha: ");
		scanf("%i", &op);
		
		switch (op){
			case 1:
				cadastrar_registro();
				system("cls");
				break;
			case 2:
				printf("Digite o identificador:\n");
				scanf("%i", &id);
				alterar_registro(id);
				sleep(1);
				system("cls");
				break;
			case 3:
				mostrar_todos_os_registros();
				break;
			case 4:
				mostrar_todos_pela_condicao();
				break;
			case 0:
				op=0;
				sair_programa(); 
				break;
			default:
				printf("Opcao invalida!");
				sleep(1);
				system("cls");
		};		
	}while(op!=0);
	
	return 0;
	
}
