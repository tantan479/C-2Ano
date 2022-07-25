#include<stdio.h>
#include<string.h>

int replace(char string[100]){
	
	int subs=0, i;
	
	for(i=0;i<strlen(string);i++){
		if(string[i]==' '){
			string[i]='-';
			subs++;
		}
	}
	
	return subs;
	
	
}






int main(){

	int subs;
	char string[100];
	
	printf("Digite uma string: \n");
	gets(string);
	
	subs=replace(string);
	
	printf("Numero de modificacoes: %i\n\n", subs);
	printf("String: %s", string);
	
	return 0;

}
