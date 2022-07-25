#include<stdio.h>

int main(){
	
	int i;
	float massa;
	
	printf("Digite a massa: \n");
	scanf("%f", &massa);
	
	for(i=0; massa>=0.5;i++){
		massa=massa/2.0;
	}
	
	printf("%i segundos", i);
	
	return 0;

}
