#include<stdio.h>

main(){
	
	int n, i, maior, maior2, maior3;
	
	for(i=0; i<=4; i++){
		
		printf("Numero %i: \n", i+1);
		scanf("%i", &n);
		
		
		if(n>maior){
			maior2=maior;
			maior=n;
		}else if(n>maior2){
			maior2=n;
		}
		
		
	}
	
	printf("Maior: %i\n2 Maior: %i", maior, maior2);
	
	
	
	
	
	
	
	
	
}
