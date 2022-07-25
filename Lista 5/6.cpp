#include<stdio.h>


void inserir_alunos (float alt[10], int sex[10]){
	
	int i, confirmador=1;
	
	for(i=0; i<10; i++){
		printf("\nAluno %i:\n", i+1);
		printf("Insira a altura do aluno: \n");
		scanf("%f", &alt[i]);
		
		while(confirmador==1){
			printf("Insira o sexo do aluno: \nMasculino(1)\nFeminino(2)\n\n");
			scanf("%i", &sex[i]);
			if(sex[i]==1 or sex[i]==2){
				confirmador=0;
			}
		
		}
		
		confirmador=1;
	}
	
}

void maior_menor_alturas(float alt[10]){
	
	int i;
	float maior, menor;
	
	for(i=0;i<10;i++){
		if(i==0){
			maior=alt[i];
			menor=alt[i];
		}
		if(alt[i]>maior){
			maior=alt[i];
		}
		if(alt[i]<menor){
			menor=alt[i];
		}
	}
	
	printf("Maior: %.2f\nMenor:%.2f\n\n", maior, menor);
}

void altura_mulher_media(float alt[10], int sex[10]){
	
	int i;
	float soma=0.0, cont=0.0, media;
	
	for(i=0;i<10;i++){
		if(sex[i]==2){
			soma+=alt[i];
			cont++;
		}
	}
	
	media=soma/cont;
	
		for(i=0;i<10;i++){
		if(sex[i]==2){
			if(alt[i]>media){
				printf("%.2f\n\n", alt[i]);
			}
		}
	}

}

void altura_abaixo(float alt[10]){
	
	int i;
	float soma=0.0, cont=0.0, media;
	
	for(i=0;i<10;i++){
		soma+=alt[i];
		cont++;
	}
	
	media=soma/cont;
	
	for(i=0;i<10;i++){
		if(alt[i]<media){
			printf("%.2f\n", alt[i]);
		}
	}
	
}




main(){
	
	float alt[10];
	int sex[10], opcao;
	
	do{
		printf("Escolha uma opcao: ");
		printf("Inserir alunos(1)\nA maior e a menor altura da turma(2)\nAltura de mulheres acima da media das mulheres(3)\nAltura abaixo da media(4)\nSair(5)\n");
		
		scanf("%i", &opcao);
		
		switch(opcao){
			case 1:
				inserir_alunos(alt, sex);
				break;
			case 2:
				maior_menor_alturas(alt);
				break;
			case 3:
				altura_mulher_media(alt, sex);
				break;
			case 4:
				altura_abaixo(alt);
				break;
			case 5:
				printf("Saindo...");
				break;
			default:
				printf("Opcao invalida");
				break;
		}
	}while(opcao!=5);
	
	return 0;
	
}
