#include<stdio.h>
#include<string.h>
#include<unistd.h>

//Autores: Renato Ribeiro Akoé e Rodrigo Lopes Neves;

struct carro{
	char nome[30];
	char modelo[30];
	int id;
	float temp_em_s_para_100km;
};

void sair_programa(){ //opção 0;
	sleep(1);
	printf("\n\nSaindo do programa...");	
}

void cadastrar_registro(){ //opção 1;
	struct carro carros;
	FILE *fp;
	
	printf("Digite o ID:\n");
	scanf("%i", &carros.id);
	getchar();
	printf("Digite o nome do carro:\n");
	gets(carros.nome);
	printf("Digite o modelo do carro:\n");
	gets(carros.modelo);
	printf("Digite o tempo para chegar a 100km/h neste carro:\n");
	scanf("%f", &carros.temp_em_s_para_100km);
	
	fp = fopen("carro.bin", "ab");
	if(fwrite(&carros, sizeof(struct carro), 1, fp) != 1)
		printf("Erro ao cadastrar");
	fclose(fp);
}

void alterar_registro(int id){ //opção 2;
	struct carro carros;
	FILE *fp;
	int aux = 0;
	
	fp = fopen("carro.bin", "r+b");
	
	while(!feof(fp)){
		fread(&carros, sizeof(struct carro), 1, fp);
		if(carros.id == id){
			aux = 1;
			break;
		}
	}
	
	if(aux == 1){
		printf("\nAtualizando os dados do carro:\n");
		printf("Digite o ID:\n");
		scanf("%i", &carros.id);
		printf("Digite o nome do carro:\n");
		getchar();
		gets(carros.nome);
		printf("Digite o modelo do carro:\n");
		getchar();
		gets(carros.modelo);
		printf("Digite o tempo para chegar a 100km/h neste carro:\n");
		scanf("%f", &carros.temp_em_s_para_100km);
		
		fseek(fp, - sizeof(struct carro), SEEK_CUR);
		fwrite(&carros, sizeof(struct carro), 1, fp);
		fclose(fp);
	}else{
		printf("Produto inexistente\n");
	}
}

void mostrar_todos_os_registros(){ //opção 3;
	struct carro carros;
	FILE *fp;
	printf("\n***Mostrando todos os registros***");

	fp = fopen("carro.bin", "rb");

	if (!fp){
		printf("Cadastro vazio!\n\n");
	}else{
		fread(&carros, sizeof(struct carro), 1,fp);
		do
		{
			printf("\n\nID do carro: %i\n", carros.id);
			printf("Nome do carro: %s\n", carros.nome);
			printf("Modelo do carro: %s\n", carros.modelo);
			printf("Tempo para chegar a 100km/h neste carro: %0.2f\n", carros.temp_em_s_para_100km);
			fread(&carros, sizeof(struct carro), 1, fp);
		}while(!feof(fp));
		fclose(fp);
		system("\n\npause");
		system("cls");
	}
}

void mostrar_todos_pela_condicao(){ //opção 4;
	struct carro carros;
	FILE *fp;
	printf("\n***Escolha um filtro***\n");
	fp = fopen("carro.bin", "rb");
	int x, aux=0;;
	char model[50];
	float time;
	printf("\n1-Modelo do carro \n");
	printf("\n2-Tempo para chegar a 100km/h neste carro \n\n");
	printf("Digite a opcao: ");
	scanf("%i",&x);
		switch (x){
			case 1:
				printf("\nDigite o modelo do carro: \n");
				getchar();
				gets(model);
				fread(&carros, sizeof(struct carro), 1,fp);
				do
				{
					if(strcmp(model, carros.modelo)==0){
					printf("\n\nID do carro: %i\n", carros.id);
					printf("Nome do carro: %s\n", carros.nome);
					printf("Modelo do carro: %s\n", carros.modelo);
					printf("Tempo para chegar a 100km/h neste carro: %0.2f\n", carros.temp_em_s_para_100km);
					aux++;
					}
					fread(&carros, sizeof(struct carro), 1, fp);
				}while(!feof(fp));
				
				if(aux==0){
					printf("Nao ha carro desse modelo.\n");
				}
				aux==0;
				break;
			case 2:
				printf("\nDigite o tempo para percorrer 100Km do carro: ");
				scanf("%f",&time);
				fread(&carros, sizeof(struct carro), 1,fp);
		
				do
				{
					if(carros.temp_em_s_para_100km==time){
					printf("\n\nID do carro: %i\n", carros.id);
					printf("Nome do carro: %s\n", carros.nome);
					printf("Modelo do carro: %s\n", carros.modelo);
					printf("Tempo para chegar a 100km/h neste carro: %0.2f\n", carros.temp_em_s_para_100km);
					aux++;
					}
					fread(&carros, sizeof(struct carro), 1, fp);
				}while(!feof(fp));
				if(aux==0){
					printf("Nao ha carro desse modelo.\n");
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
