#include <stdio.h>

int main(){
	
	FILE *fp2, *fp3;
	int num1, num2, num3;
	
	fp2 = fopen("duas_colunas-Q.3.txt", "r");
	fp3 = fopen("tres_colunas-Q.3.txt", "w");
	
	if(fp2 != NULL){
		while(!feof(fp2)){
			fscanf(fp2, "%i %i", &num1, &num2);
			num3 = num1 + num2;
			fprintf(fp3, "%i %i %i\n", num1, num2, num3);
		}
		
		fclose(fp2);
		fclose(fp3);
	}else{
		printf("Arquivo nao abriu!");
	}
	
	return 0;
	
}
