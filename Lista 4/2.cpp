#include<stdio.h>

void achar_maior_menor(int a, int b, int c, int *maior, int *menor){
	
			
	if(a>b & a>c){
		*maior=a;
	}else if(b>a & b>c){
		*maior=b;
	}else {
		*maior=c;
	}
	
			
	if(a<b & a<c){
		*menor=a;
	}else if(b<a & b<c){
		*menor=b;
	}else {
		*menor=c;
	}
	
}

main(){
	
	int a, b, c, maior, menor;
	
	printf("Digite um valor A: \n");
	scanf("%i", &a);
	printf("Digite um valor B: \n");
	scanf("%i", &b);
	printf("Digite um valor C: \n");
	scanf("%i", &c);
	
	achar_maior_menor(a, b, c, &maior, &menor);
	
	printf("Maior: %i\nMenor: %i", maior, menor);
	
	
	
	
	
}
