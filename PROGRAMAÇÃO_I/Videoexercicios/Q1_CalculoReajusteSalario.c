#include <stdio.h>
#include <conio.h>
#include <locale.h>
/*cálculo do salário */
main()
{	setlocale (LC_ALL, "Portuguese");
	float sm, pr, ns; //sm = salário mensal, pr = percentual de reajuste, ns = novo salário
	printf("\nCálculo do salário do funcionário\n\n");
	printf("\nSalário mensal: R$ ");
	scanf("%f", &sm);
	printf("\nPercentual de reajuste: ");
	scanf("%f", &pr);
	ns = sm + (sm*pr/100);
	printf("\n\nNovo Salário: R$ $.2f\n", ns);
	getche
}
