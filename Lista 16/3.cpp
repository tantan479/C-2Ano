#include<stdio.h>

somar(int num[10], int n){
	
	if(n==0){
		return num[n];
	}else{
		return num[n] + somar(num, n-1);
	}
	
}


int main(){
	
	int num[10], i;
	
	for(i=0;i<10;i++){
		printf("Numero vetor[%i]:\n", i);
		scanf("%i", &num[i]);
	}
	
	printf("O vetor digitadato eh:\n");
	
	for(i=0;i<10;i++){
		printf(" %i", i, num[i]);
	}
	
	printf("\nO resultado da soma dos vetores eh: %i", somar(num, 9));
	
	return 0;
		
}
