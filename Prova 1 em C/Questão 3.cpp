#include<stdio.h>
#include<string.h>

encontrar_ocorrencias(char string[100], char letra){
	
	int i, ocor=0;
	
	for(i=0; i<strlen(string); i++){
		if(string[i] == letra){
			ocor++;
		}
	}
	
	return ocor;
	
}





int main(){
	
	char string[100], letra;
	int ocorrencias;
	
	printf("Digite a string: \n");
	gets(string);
	
	printf("Digite a letra: \n");
	scanf("%c", &letra);
	
	
	ocorrencias = encontrar_ocorrencias(string, letra);
	
	printf("Ocorrencias: %i", ocorrencias);
	
	return 0;
	
}

