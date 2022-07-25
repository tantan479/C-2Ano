#include<stdio.h>
#include<math.h>

int main(){
	
	int N, M=0, i, soma=0;
	
	printf("Digite N: \n");
	scanf("%i", &N);
	
	for(i=1; soma<N; i++){
		
		if(i%2!=0){
			soma+=i;
			M++;
		}
		
	}
	
	
	if(M==sqrt(N)){
		printf("Eh quadrado perfeito.");
		}else{
			printf("Nao eh quadrado perfeito.");
		}
	
	
	return 0;
	
}
