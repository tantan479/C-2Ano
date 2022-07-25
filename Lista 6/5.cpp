#include<stdio.h>
#include<string.h>

int main(){
	
	int i;
	char nome[100];
	
	printf("Insira seu nome: \n");
	gets(nome);
	
	for(i=0; i<strlen(nome); i++){
		
		
		if(i==0)
		printf("%c.", nome[i]);
		
		if(nome[i] == ' ')
		printf("%c.", nome[i+1]);
			
		
		
	}
	
	return 0;
	
}
