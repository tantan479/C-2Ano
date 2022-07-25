#include<stdio.h>

void recursao(){
	
	float num;
	
	printf("Digite um numero:\n");
	scanf("%f", &num);
	
	if(num<0){
		printf("Negativo");
	}else{
		printf("%.2f\n", num);
		recursao();
	}
	
}


int main(){
	
	recursao();
	
	return 0;
	
}
