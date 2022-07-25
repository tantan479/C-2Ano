#include<stdio.h>

int main(){
	
	int i, j, aux0lin=0, aux1lin=0, aux0col=0, aux1col=0, auxcol=0, auxlin=0;
	float A [3][3];
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite um numero [%i][%i]: \n", i, j);
			scanf("%f", &A[i][j]);
		}
	}
	
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(A[i][j]==0){
				aux0lin++;
			}else if(A[i][j]==1){
				aux1lin++;
			}
			
			if(A[j][i]==0){
				aux0col++;
			}else if(A[j][i]==1){
				aux1col++;
			}
		}
		
		if(aux0lin==2 and aux1lin==1){
			auxlin++;
		}
		if(aux0col==2 and aux1col==1){
			auxcol++;
		}
		
		aux0lin=0;
		aux1lin=0;
		aux0col=0;
		aux1col=0;
		
	}
	
	if(auxcol==3 and auxlin==3){
		printf("Essa eh uma matriz de permutacao");
	}else{
		printf("Nao eh uma matriz de permutacao");
	}
	
	return 0;
	
}
