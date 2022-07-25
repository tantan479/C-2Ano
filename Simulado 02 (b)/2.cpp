struct aluno{
	char nome[50];
	char sexo;
	int idade;
	float nota;
	
};

void(struct aluno alunos[8000000]){
	
	int i, M=0, F=0;
	float somaM=0, somaF=0, mediaF, mediaM;
	
	for(i=0; i<8000000;i++){
		if(alunos[i].sexo=='M'){
			M++;
			somaM+=alunos[i].nota;
		}
		if(alunos[i].sexo=='F'){
			F++;
			somaF+=alunos[i].nota;
		}
		
	}
	
	mediaF = somaF/F;
	mediaM = somaM/M;
	
	printf("Media feminima: %.2f", mediaF);
	printf("Media masculina: %.2f", mediaM);
}
