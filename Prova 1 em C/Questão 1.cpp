#include<stdio.h>

int main(){
	
	int n, i, j;
	
	printf("Digite um numero: \n");
	scanf("%i", &n);

	printf("\n");
	
	for(i=0;i<n; i++){
		
			if(i!=0){
			 printf("\n");
			for(j=0; j<i; j++){
				printf("   ");
			}
	 }
		
		
		
		printf("%i\n", i+1);
		
	}
	
	return 0;
	
	
	
}

