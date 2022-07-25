#include<stdio.h>

int main(){
	
	FILE *fp;
	char nome_arquivo[100], caractere, str[1000];
	int cont=0;
	
	printf("Digite o nome do arquivo: \n");
	gets(nome_arquivo);
	
	fp = fopen(nome_arquivo, "r");
	
	if(fp!=NULL){
		while(!feof(fp)){
			fscanf(fp, "%c", &caractere);
			if((caractere >= 'A' and caractere <= 'Z') or (caractere >= 'a' and caractere <= 'z') or caractere== ' '){
				str[cont]=caractere;
				cont++;
			}
		}
		
		str[cont-1]= '\0';
		fclose(fp);

		fp = fopen ("Destino-Q.2.txt","w");
		fprintf(fp, "%s", str);
		fclose(fp);
	}else{
		printf("Arquivo invalido.");
	}
	
	
	
	
	
	
} 
