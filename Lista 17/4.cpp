#include<stdio.h>

void dec2bin(int n){
	
	if(n==1){
		printf("1");
	}else{
		dec2bin(n/2);
		printf("%i", n%2);
	}
	
}


int main(){
	
	int n;
	
	printf("Digite o numero ao qual quer conventer para binario:\n");
	scanf("%i", &n);
	
	dec2bin(n);
	
	return 0;
	
}
