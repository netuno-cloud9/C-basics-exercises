#include<stdio.h>
#include<locale.h>

 main()
{		
	//habilita o idioma pt-br
	setlocale(LC_ALL, "portuguese");
	
	
	printf("Digite seu nome: \n");
	scanf("%f",&sal);
	printf("Digite seu tempo de servico: \n");
	scanf("%i",&tempo);
	if(sal>1200 && tempo>= 2)
	{
	                          sf = sal + (sal/100)*5;
							  printf("Você teve um aumento de 5% \n");	
							  printf("VALOR FINAL: R$ %.2f \n",sf);	                                         
	}
	else
	{
		                      sf = sal - (sal/100)*8;
							  printf("Você teve um desconto de 8% \n");	
							  printf("VALOR FINAL: R$ %.2f \n",sf);	 
	}
}
