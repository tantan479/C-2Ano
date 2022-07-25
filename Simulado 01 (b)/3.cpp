#include<stdio.h>
#include<string.h>

int main(){
	
	int i, espacos=0;
	char frase[51];
	
	printf("Digite uma frase: \n");
	gets(frase);
	
	for(i=0;i<strlen(frase);i++){
		if(frase[i]==' '){
			espacos++;
		}else{
			printf("%c", frase[i]);
		}
	}
	
	printf("\nQuantidade de espacos em branco: %i", espacos);
	
	return 0;
	
}


