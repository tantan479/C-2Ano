#include<stdio.h>

int calcular(int ano){
	
	if(ano%400==0){
		return 1;
	}else if(ano%4==0 and ano%100!=0){
		return 1;
	}else{
		return 0;
	}
	
}


int main(){
	
	int ano, bissexto;
	
	printf("Digite um ano: \n");
	scanf("%i", &ano);
	
	bissexto=calcular(ano);
	
	if(bissexto==1){
		printf("%i eh um ano bissexto.", ano);
	}else{
		printf("%i nao eh um ano bissexto.", ano);
	}
	
	return 0;
	
}
