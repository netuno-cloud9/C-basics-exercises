
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Declaração da função
void hello (void);
void world (void);

//Função principal
main()
{
	setlocale(LC_ALL,"portuguese_Brazil");
	printf("\n A função será executada\n");
	hello(); //Chamamento da função
	world();
		
};

//criação e execução da função
void hello (void)
{
	printf("\n hello,stranger\n");
	
};

void world (void)
{
	 printf("\n The World is crowded\n ");
};
