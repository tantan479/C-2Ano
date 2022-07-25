#include<stdio.h>

int main(){
	
	char frase[255];
	char* pf;
	
	pf = frase;
	
	printf("Digite uma frase:\n");
	gets(frase);
	
	while(*pf != '\0'){
		printf("%c", *pf);
		pf++;
	}
	
	return 0;
	
}
