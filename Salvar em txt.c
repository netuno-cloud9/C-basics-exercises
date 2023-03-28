#include<stdio.h>
#include<locale.h>
#include<math.h>

main(){
	setlocale(LC_ALL,"portuguese");
	//o TIPO file É UM TIPO DE VARIÁVEL
	
	FILE *arquivo;
	char nome[50];
	int idade;
	char tel[50];
		
	arquivo = fopen("cadastro.txt","a");
	if(arquivo == NULL){
	
	           printf("Erro ao criar ou abrir o arquivo");  
	       }else{
	       	
	       	
		fprintf(arquivo,"pedro\n");
	    fprintf(arquivo,"50\n");
	    fprintf(arquivo,"3232-3232\n");
	    
        fclose(arquivo);	  
	 
                }

	
	printf("Dados gravados com sucesso! \n");
	
	
	}

