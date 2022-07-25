#include<stdio.h>

void troca(int* a, int* b){
	
	int aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
	
}


int main(){
	
	int a=2, b=3;
	
	troca(&a, &b);
	
	printf("a:%i\nb:%i", a, b);
	
	return 0;
	
}
