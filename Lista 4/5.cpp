#include<stdio.h>

int ler_numeros(int n){
	
	int i, par=0, impar=0, num;
	
	for(i=0; i<n; i++){
		printf("Insira o numero %i: \n", i+1);
		scanf("%i", &num);
		
		if(num%2==0){
			par++;
		}else{
			impar++;
		}
	}
	
	if(par!=0 & impar!=0){
		return -1;
	}else if(par!=0){
		return 0;
	}else{
		return 1;
	}
}


main(){
	
	int n;
	
	printf("Insira quantos numeros voce quer que sejam lidos: \n");
	scanf("%i", &n);
	
	printf("Valor de saida: %i", ler_numeros(n));
	
	
	
}
