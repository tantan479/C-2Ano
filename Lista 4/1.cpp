#include<stdio.h>

 int calcular_fatorial(int num){
 	
 	int i, fat=1;
 	
 	
	if(num>0){
	
		for(i=1; i<num; i++){
 			fat+=fat*i;
		 }
		 return fat;
	}else{
		return -1;
	}	
 	
 	
 	
 	
 }
 
 main(){
 	
 	int n;
	 
	printf("Digite um numero para calcular sua fatorial: \n");
 	scanf("%i", &n);
 	
	printf("A fatorial eh: %i", calcular_fatorial(n));
 	
 	
 	
 }
 
 
 
