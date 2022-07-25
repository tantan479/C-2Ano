void procedimento(char onibus[4][9]){
	
	int i,j, janela, corredor, ocupadas, vazias;
	
	printf("Relatorio\n123456789\n")
	
	for(i=0;i<4;i++){
		for(j=0;j<9;j++){
			printf("%c", onibus[i][j]);
			
			if(onibus[i][j] == 'x'){
				ocupadas++;
			}else{
				vazias++;
			}
			
			if(i==0 || i==3){
				if(onibus[i][j] == 'x')
				janela++;
			}
			
			if(i==1 || i==2){
				if(onibus[i][j] == 'x')
				corredor++;
			}
			
		}
		printf("\n");
	}
	
	printf("Pessoas na Janela: %i\n", janela);
	printf("Pessoas no Corredor: %i\n", corredor);
	printf("Total Ocupadas: %i\n", ocupadas);
	printf("Total Vazias: %i", vazias);
	
}
