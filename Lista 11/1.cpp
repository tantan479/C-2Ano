#include<stdio.h>
#include<string.h>
#include<unistd.h> // sleep

struct imovel{
	int tipo;
	char endereco[50];
	char bairro[50];
	float valor;
	int situacao;
};


int main(){
	
	int i, situacao, enquadrados=0;
	struct imovel imovel[10];
	
	for(i=0; i<10; i++){
		printf("Digite o tipo\n\nDigite 1: loja\nDigite 2: apartamento\nDigite 3: casa\nDigite 4: kit\n");
		scanf("%i", &imovel[i].tipo);
		printf("Digite o endereco:\n");
		getchar();
		gets(imovel[i].endereco);
		printf("Digite o bairro:\n");
		getchar();
		gets(imovel[i].bairro);
		printf("Digite o valor :\n");
		scanf("%f", &imovel[i].valor);
		printf("Digite a situacao\n\nDigite 1: aluguel\nDigite 2: venda\n");
		scanf("%i", &imovel[i].situacao);
		sleep(1);
		system("cls");
	}
	
	
	printf("Verificar situacao dos imoveis: ");
	printf("\n\nDigite 1: aluguel\nDigite 2: venda\n");
	scanf("%i", &situacao);
	
	for(i=0; i<10; i++){
		if(situacao==imovel[i].situacao)
			enquadrados++;	
	}
	
	if(situacao==1){
		printf("Ha %i imoveis na situacao aluguel", enquadrados);
	}else{
		printf("Ha %i imoveis na situacao venda", enquadrados);	
	}
	
	sleep(3);
	printf("\n\nSaindo do programa...");
	return 0;

	
}
