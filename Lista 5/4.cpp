#include<stdio.h>

ler_numeros(int vet[10]){
	
	int i;
	
	for(i=0;i<10;i++){
		printf("Numero %i:", i+1);
		scanf("%i", &vet[i]);
	}	
	
}

imprimir_resultados(int vet[10]){
	
	int i, maiorpar, maiorimpar, contpar=0, contimpar=0;
	float mediapar, mediaimpar, somapar=0, somaimpar=0;
	
	for(i=0;i<10;i++){ 
		
		if(vet[i]%2==0){ // pares
			if(contpar==0){
				maiorpar=vet[i];
			}
			
			if(vet[i] > maiorpar){
				maiorpar=vet[i];
			}
			
			contpar++;
			somapar+=vet[i];
		}
		
		if(vet[i]%2!=0){ // impares
			if(contimpar==0){
				maiorimpar=vet[i];
			}
			
			if(vet[i] > maiorimpar){
				maiorimpar=vet[i];
			}
			
			contimpar++;
			somaimpar+=vet[i];
		}
	}
	
	mediapar=somapar/contpar;
	mediaimpar=somaimpar/contimpar;
	
	printf("Media par:%.2f\nMedia impar:%.2f", mediapar, mediaimpar);
	printf("\nMaior par:%i", maiorpar);
	printf("\nMaior impar:%i", maiorimpar);
	
}




main(){
	
	int vet[10];
	
	ler_numeros(vet);
	
	imprimir_resultados(vet);
	
	return 0;
	
}
