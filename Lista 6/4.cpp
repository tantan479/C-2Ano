#include<stdio.h>
#include<string.h>

void contar_repeticoes(char string1[100], char string2[100]){
	
	int i, contar, aux, k, contaraux, j;
	
	aux=(strlen(string1)/strlen(string2))*strlen(string2);
	
	for(i=0; i<aux; i++){
		for(k=i, j=0; k<(i+strlen(string2)), j<strlen(string2);k++, j++){
			if(string1[k]==string2[j]){
				contaraux++;
			}
		}
		
		if(contaraux==strlen(string2)){
			contar++;
		}
		
		contaraux=0;
			
	}
	
	printf("A string 2 ocorre %i vezes dentro da string 1", contar);
	
}




int main(){
	
	char string1[100], string2[100];
	
	printf("Digite uma string: \n");
	gets(string1);
	
	printf("Digite a segunda string: \n");
	gets(string2);
	
	contar_repeticoes(string1, string2);
	
}

