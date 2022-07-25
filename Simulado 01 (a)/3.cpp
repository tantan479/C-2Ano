#include<stdio.h>
#include<string.h>

int main(){
	
	int i, j;
	char string[30], stringinv[30];
	
	printf("Digite uma string: \n");
	gets(string);
	
	j=strlen(string)-1;
	
	for(i=0;i<strlen(string);i++){
		stringinv[j]=string[i];
		j--;
	}
	
	printf("%s", stringinv);
	
	return 0;
	
}
