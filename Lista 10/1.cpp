#include<stdio.h>
#include<string.h>


struct aluno{
	char nome[50];
	int idade;
};

int main(){
	
	struct aluno aluno;
	
	printf("Digite o nome do aluno: \n");
	gets(aluno.nome);
	printf("Digite a idade desse aluno: \n");
	scanf("%i", &aluno.idade);
	
	printf("\n\nAluno: %s\nIdade: %i anos", aluno.nome, aluno.idade);
	
	return 0;
	
}
