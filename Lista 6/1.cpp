#include<stdio.h>
#include<string.h>

int main(){
	
	char p1[100], p2[100];
	
	printf("Digite uma palavra: \n");
	gets(p1);
	printf("Digite uma palavra: \n");
	gets(p2);
	
	if(strcmp(p1,p2)==0){
		printf("As palavras sao identicas\n");
	}else{
		if(strlen(p1)==strlen(p2)){
			printf("Palavrs diferentes, mas de mesmo comprimento.\n");
		}else if(strlen(p1)>strlen(p2)){
			printf("Palavras diferentes, sendo a 1 maior que a 2\n");
		}else{
			printf("Palavras diferentes, sendo a 2 maior que a 1\n");
		}
	}
	
	
	return 0;
	
	
}
