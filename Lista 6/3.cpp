#include<stdio.h>
#include<string.h>

int contar_vogais(char string[100]){
	
	int i, cont;
	
	for(i=0; i<strlen(string); i++){
		if(string[i]=='A' or string[i]=='E' or string[i]=='I' or string[i]=='O' or string[i]=='U' or string[i]=='a' or string[i]=='e' or string[i]=='i' or string[i]=='o' or string[i]=='u'){
			cont++;
		}
	}
	
	return cont;
	
}





int main(){
	
	int vogais;
	char string[100];
	
	printf("Digite uma string: \n");
	gets(string);
	
	vogais = contar_vogais(string);
	
	printf("A palavra tem %i vogais.", vogais);
	
	return 0;
		
}
