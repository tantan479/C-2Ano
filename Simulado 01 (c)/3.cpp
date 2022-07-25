#include<stdio.h>
#include<string.h>

int funcao(char string1[100], char string2[100]){
	
	int i, diferente=0;
	
	
	for(i=0; i<strlen(string1); i++){
		if(string1[i]!=string2[i]){
			diferente++;
		}
	}
	
	if(diferente==1){
		return 1;
	}else{
		return 0;
	}
	
}




int main(){
	
	char string1[100], string2[100];
	
	printf("Digite a string 1: ");
	gets(string1);
	
	printf("Digite a string 2: ");
	gets(string2);
	
	printf("%i", funcao(string1, string2));
	
	return 0;
	
}
