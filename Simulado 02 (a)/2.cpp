struct produto{
	int nome[50];
	float preco;
};

void procedimento(struct produto produtos[100]){
	
	int i, produtos_a;
	float soma_valor, media_valor; 
	
	for(i=0;i<100;i++){
		soma_valor+=produtos[i].preco;
	}
	
	media_valor=soma_valor/100.0;
	
	for(i=0;i<100;i++){
		if(produtos[i].preco < media_valor and produtos[i].nome[0]=='a'){
			printf("%s ", produtos[i].nome);
		}
	}
	
}
