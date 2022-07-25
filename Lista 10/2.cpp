#include<stdio.h> //Renato Ribeiro Altoé
#include<string.h> 

struct aluno{
	char nome[50];
	int idade;
};

int main(){
	
	struct aluno aluno[10];
	int i;
	
	for(i=0;i<=9;i++){
		printf("Digite o nome do aluno: \n");
		gets(aluno[i].nome);
		printf("Digite a idade desse aluno: \n");
		scanf("%i", &aluno[i].idade);
		getchar();
	}
	
	for(i=0;i<=9;i++){
		printf("\n\nAluno: %s\nIdade: %i anos", aluno[i].nome, aluno[i].idade);
	}
	
	return 0;
	
}
