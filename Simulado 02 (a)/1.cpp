int verificar_vencedor(char matriz[100][100]){
	
	int i, j, x=0, o0=0;
	
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			if(matriz[i][j] == 'x'){
				x++;
			}else if(matriz[i][j] == '0'){
				o0++;
			}
		}
		
		if(x==100 || o0==100){
			return 1;
		}
		x=0;
		o0=0;
	}
	
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			if(matriz[j][i] == 'x'){
				x++;
			}else if(matriz[j][i] == '0'){
				o0++;
			}
		}
		
		if(x==100 || o0==100){
			return 1;
		}
		x=0;
		o0=0;
	}
	
	return 0;
	
}
