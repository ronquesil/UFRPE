#include <stdio.h>
#include <conio.h>
#include <locale.h>
/*c�lculo do sal�rio */
main()
{	setlocale (LC_ALL, "Portuguese");
	float sm, pr, ns; //sm = sal�rio mensal, pr = percentual de reajuste, ns = novo sal�rio
	printf("\nC�lculo do sal�rio do funcion�rio\n\n");
	printf("\nSal�rio mensal: R$ ");
	scanf("%f", &sm);
	printf("\nPercentual de reajuste: ");
	scanf("%f", &pr);
	ns = sm + (sm*pr/100);
	printf("\n\nNovo Sal�rio: R$ $.2f\n", ns);
	getche
}
