#include<conio.h>
#include<stdio.h>
#include <locale.h>

main()
{	setlocale(LC_ALL, "Portuguese");
	float med;
	printf("Caderneta de Notas\n\n");
	printf("Média do Aluno: ");
	scanf("%f", &med);
	if (med>=7)
		printf("\n\nAluno aprovado com média %.1f\n",med);
	else
		printf("\n\nAluno reprovado com média %.1f",med);
	getche();
}
