#include<stdio.h>
#include<locale.h>

 main()
{		
	//habilita o idioma pt-br
	setlocale(LC_ALL, "portuguese");
	
	float saldofinal,sal;
	int tempo;
	char nome[50];
	
	printf("Digite seu nome: \n");
	gets(nome);
	printf("Infome o seu salario atual: \n");
	scanf("%f",&sal);
	printf("Digite seu tempo de servico: \n");
	scanf("%i",&tempo);
	if(sal>1200 && tempo>= 2)
	{
	                          saldofinal = sal + (sal/100)*5;
	                          printf( nome ," n" );
							  printf("Você teve um aumento de 5% % \n");	
							  printf("VALOR FINAL: R$ %.2f \n",saldofinal);	                                         
	}
	else
	{
		                      saldofinal = sal - (sal/100)*8;
		                       printf(nome);
							  printf("Você teve um desconto de 8% % \n");	
							  printf("VALOR FINAL: R$ %.2f \n",saldofinal);	 
	}
}	
