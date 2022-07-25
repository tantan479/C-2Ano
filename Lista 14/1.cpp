#include<stdio.h>

int main(){
	
	char str[1000];
	FILE *fp;
	int cont=0;
	char nome_arquivo[100];
	
	
	printf("Digite o nome do arquivo: \n");
	gets(nome_arquivo);
	
	fp = fopen(nome_arquivo, "r");
	
	if(fp != NULL){
		while(!feof(fp)){
			fscanf(fp, "%c", &str[cont]);
			cont++;
		}
		
		str[cont-1]= '\0';
		
		printf("\nA string lida eh: %s \n\n", str);
		fclose(fp);
	}else{
		printf("Arquivo invalido");
	}
	
	return 0;
	
}
