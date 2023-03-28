#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //Biblioteca de regionalização
#include <math.h> //Biblioteca de funções matemáticas // struct é sempre antes da função principal. técnica de encapsulamento

struct calcula{
	float n1;
	float n2;
};
//cria um apelido para o tipo struct
typedef calcula soma;
main(){
	
		int i,op; 
		soma operacao; 
		int res = 0;
			
	setlocale(LC_ALL,"portuguese");	
		system("cls");
		printf("\n------------------------------------\n");	
		printf("CALCULADORA");	
		printf("\n------------------------------------\n");	
		printf("");
		printf("[1] SOMA \n");	
		printf("[2] SUBTRAÇÃO \n");
		printf("[3] MULTIPLICAÇÃO \n");
		printf("[4] DIVISÃO \n");
		printf("[5] POTÊNCIA \n");
		printf("[6] SAIR \n");
		scanf("%i",&op);
		switch(op){
		
		case 1:
					system("cls");
						printf("\n------------------------------------\n");	
						printf("\n\tCALCULADORA");	
						printf("\n------------------------------------\n");	
						
	
	    soma operacao; //operacao é o nome da variavel que é do tipo soma dentro de uma estrutura chamada calcula
	    
	    printf("Digite o primeiro número \n");
	    scanf("%f",&operacao.n1);
	     printf("Digite o segundo número \n");
	    scanf("%f",&operacao.n2);
	    
	    printf(" %.2f + %.2f = %.2f",operacao.n1,operacao.n2,operacao.n1+operacao.n2);
	    
	    break;
	    case 2:
	    
	    		system("cls");
						printf("\n------------------------------------\n");	
						printf("\n\tCALCULADORA");	
						printf("\n------------------------------------\n");	
						
	
	    
	    
	    printf("Digite o primeiro número \n");
	    scanf("%f",&operacao.n1);
	     printf("Digite o segundo número \n");
	    scanf("%f",&operacao.n2);
	    
	    printf(" %.2f + %.2f = %.2f",operacao.n1,operacao.n2,operacao.n1-operacao.n2);
	    
	    break;
	    case 3:
	    
	    		system("cls");
						printf("\n------------------------------------\n");	
						printf("\n\tCALCULADORA");	
						printf("\n------------------------------------\n");	
						
	

	    
	    printf("Digite o primeiro número \n");
	    scanf("%f",&operacao.n1);
	     printf("Digite o segundo número \n");
	    scanf("%f",&operacao.n2);
	    
	    printf(" %.2f + %.2f = %.2f",operacao.n1,operacao.n2,operacao.n1+operacao.n2);
	    
	    break;
	    case 4:
	    
	    		system("cls");
						printf("\n------------------------------------\n");	
						printf("\n\tCALCULADORA");	
						printf("\n------------------------------------\n");	
						
	
	    
	    
	    printf("Digite o primeiro número \n");
	    scanf("%f",&operacao.n1);
	     printf("Digite o segundo número \n");
	    scanf("%f",&operacao.n2);
	    
	    printf(" %.2f + %.2f = %.2f",operacao.n1,operacao.n2,operacao.n1+operacao.n2);
	    
	    break;
	    case 5:
	    		system("cls");
						printf("\n------------------------------------\n");	
						printf("\n\tCALCULADORA");	
						printf("\n------------------------------------\n");	
						
	

	    printf("Digite o primeiro número \n");
	    scanf("%f",&operacao.n1);
	     printf("Digite o segundo número \n");
	    scanf("%f",&operacao.n2);
	    
	    res = pow(operacao.n1,operacao.n2);
	    
	    printf(" %.2f ^ %.2f = %.2f",res);
	    
	    break;
	    case 6:
	    printf("Saindo...");
	    
	    break;
	}
	    
}
