//Bibliotecas
#include<stdio.h>// lib de inputs and outputs
#include<locale.h> // lib de idiomas
#include<stdlib.h> // recursos do sistema
#include<math.h> // biblioteca de funções matematicas

// \t é para centralizar, pow ta dentro da biblioteca de funções matematicas

/* Função principal */
main()
{
	
    //variaveis
    int (op);
    float peso,altura,imc;
    float n1,n2;
    int base, expoente, res;
    
    setlocale(LC_ALL,"portuguese");
    do{
    	system("cls");
    	printf("\n----------------------------------\n");
    	printf("CALCULADORA");
        printf("\n----------------------------------\n");
        printf("");
         printf("[1] - SOMA \n");
      	 printf("[2] - SUBTRAÇÂO \n");
      	 printf("[3] - MULTIPLICAÇÃO \n");
    	 printf("[4] - DIVISÃO \n");
      	 printf("[5] - POTÊNCIA\n");
      	 printf("[6] - IMC \n");
	     printf("[7] - SAIR \n");
	     scanf("%i",&op);
	     switch(op){
	     	
	     	case 1:
	     		system("cls");
	     		printf("\n----------------------------------");
	     		printf("\n\tCALCULADORA");
	     		printf("\n----------------------------------");
	     		printf("\nDigite o 1 número\n");
	     		scanf("%f",&n1);
	     		printf("\nDigite o 2 número\n");
	     		scanf("%f",&n2);
	     		printf("\n\nO resultado é %.2f \n", n1+n2);
	     		system("pause");
	
	     break;
		 case 2:	
		 	system("cls");
		 		printf("\n----------------------------------");
    	        printf("CALCULADORA");
                printf("\n----------------------------------");
                printf("\nDigite o 1 número\n");
	     		scanf("%f",&n1);
	     		printf("\nDigite o 2 número\n");
	     		scanf("%f",&n2);
	     		printf("\n\nO resultado é %.2f \n", n1-n2);
	     		system("pause");
	     		
	        break;
			case 3:
			system("cls");
		 		printf("\n----------------------------------");
    	        printf("CALCULADORA");
                printf("\n----------------------------------");
                printf("\nDigite o 1 número\n");
	     		scanf("%f",&n1);
	     		printf("\nDigite o 2 número\n");
	     		scanf("%f",&n2);
	     		printf("\n\nO resultado é %.2f \n", n1*n2);
	     		system("pause");
			
			 break;
			 case 4:
		 		system("cls");
		 		printf("\n----------------------------------");
    	        printf("CALCULADORA");
                printf("\n----------------------------------");
                printf("\nDigite o 1 número\n");
	     		scanf("%f",&n1);
	     		printf("\nDigite o 2 número\n");
	     		scanf("%f",&n2);
	     		if (op == 0){
				 printf("\n \n ERRO! DIVISÃO POR ZERO");
				system("pause");
				      }
				      else{
				      		printf("\n\nO resultado é %.2f \n", n1/n2);
	     		            system("pause");
	     		   		  }
	     	 
			 break;
			case 5:
					system("cls");
		 		printf("\n----------------------------------");
    	        printf("CALCULADORA");
                printf("\n----------------------------------");
                printf("\nDigite a base\n");
	     		scanf("%i",&base);
	         	printf("\nDigite o expoente\n");
	     		scanf("%i",&expoente);
	     		res=pow(base, expoente);
				 printf("\n \n ERRO! DIVISÃO POR ZERO");
				system("pause");
	     		printf("\nO o resultado é %i\n\n", res);
	     		system("pause");
			
			 break;
			case 6:
					system("cls");
		 		printf("\n----------------------------------");
    	        printf("CALCULADORA");
                printf("\n----------------------------------");
                printf("\nDigite o seu peso \n");
	     		scanf("%f",&peso);
	     		printf("\nDigite a sua altura \n");
	     		scanf("%f",&altura);
	     		imc = peso/(altura*altura);
	     		printf(" O imc é : \n", n1*n2);
	     		system("pause");
				
			 break;
			case 7:
					system("cls");
                printf("Até logo...");
                
                break;
    
             	default:
					printf("\n opção invalida");
				system("pause");		    
            }
        
			
		 }while(op!=7);
		 
         	return 0;
     
	}
