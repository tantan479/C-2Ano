#include<stdio.h>

void dividir_2_5(int num, char* div2, char * div5){
	
	if(num%2==0){
		*div2='S';
	}else{
		*div2='N';
	}
	
	if(num%5==0){
		*div5='S';
	}else{
		*div5='N';
	}
	
}

int main(){
	
	int num; 
	char div2, div5;
	
	printf("Digite um numero:\n");
	scanf("%i", &num);
	
	dividir_2_5(num, &div2, &div5);
	
	printf("div2: %c\ndiv5: %c", div2, div5);
	
	return 0;
	
}
