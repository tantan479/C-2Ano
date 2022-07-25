#include<stdio.h>

int main(){
	
	int i, j, A[3][3], soma_geral=0, soma_diag_prin=0, soma_diag_secun=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite um numero para preencher [%i][%i]:\n", i, j);
			scanf("%i", &A[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			soma_geral+=A[i][j];
			if(i==j){
			soma_diag_prin+=A[i][j];
			}
			if(i+j==3-1){
			soma_diag_secun+=A[i][j];
			}
		}
	}
	
	if(soma_diag_prin==soma_diag_secun and soma_geral/soma_diag_prin==3){
		printf("A matriz digitada eh um quadrado magico.");
	}else{
		printf("A matriz digitada nao eh um quadrado magico.");
	}
	
	return 0;
	
}
