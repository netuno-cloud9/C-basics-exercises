
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Declara��o da fun��o
void hello (void);
void world (void);

//Fun��o principal
main()
{
	setlocale(LC_ALL,"portuguese_Brazil");
	printf("\n A fun��o ser� executada\n");
	hello(); //Chamamento da fun��o
	world();
		
};

//cria��o e execu��o da fun��o
void hello (void)
{
	printf("\n hello,stranger\n");
	
};

void world (void)
{
	 printf("\n The World is crowded\n ");
};
