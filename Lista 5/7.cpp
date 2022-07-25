#include<stdio.h>

int main(){
	
	int ORD[10], i, aux, k;
	
	for(i=0; i<10;i++){
		printf("Numero %i: \n", i+1);
		scanf("%i", &ORD[i]);
	}
	
	for(i=0; k<9;k++){ // metodo da bolha
			for(i=0; i<9;i++){
				if(ORD[i]>ORD[i+1]){
					aux=ORD[i+1];
					ORD[i+1]=ORD[i];
					ORD[i]=aux;
			}
		}
	}
	
	for(i=0; i<10;i++){
		printf("Vetor %i: %i\n", i, ORD[i]);
	}
	
	return 0;
	
}
