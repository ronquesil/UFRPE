#include<conio.h>
#include<stdio.h>
#include <locale.h>

main()
{	setlocale(LC_ALL, "Portuguese");
	float med;
	printf("Caderneta de Notas\n\n");
	printf("M�dia do Aluno: ");
	scanf("%f", &med);
	if (med>=7)
		printf("\n\nAluno aprovado com m�dia %.1f\n",med);
	else
		printf("\n\nAluno reprovado com m�dia %.1f",med);
	getche();
}
