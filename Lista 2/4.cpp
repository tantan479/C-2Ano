#include<stdio.h>

main(){
	
	int n, i=0;
	
	printf("Insira um numero: \n");
	scanf("%i", &n);
	
	if(n%2==0 and n%5==0){
		printf("O numero eh divisivel por 5 e por 2.");
	}else if(n%2==0){
		printf("O numero eh divisivel por 2.");
	}else if(n%5==0){
		printf("O numero eh divisivel por 5.");
	}else{
		printf("O numero nao eh divisivel por 5 nem por 2.");
	}
	

	
	
	
	
	
	
	
}
