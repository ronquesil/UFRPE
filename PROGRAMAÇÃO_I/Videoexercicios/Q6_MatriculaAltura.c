#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//Pares de número (matrícula e altura)
main()
{
	int matricula, i, matmaior,matmenor;
	float altura, maior, menor;
	maior = 0;
	menor = 300;
	for (i=1; i<=5; i++)
	{	system("cls");
		printf("Matrícula e Altura do Aluno\n\n");
		printf("\n\nDigite o número de matricula do aluno %d: ", i);
		scanf("%d",&matricula);
		printf("\nDigite a Altura do Aluno em cm: ");
		scanf("%f",&altura);
		if (altura > maior)
		{	maior = altura;
			matmaior = matricula;
		}
		if (altura < menor)
		{	menor = altura;
			matmenor = matricula;
		}
	}
	system("cls");
	printf("Resultados\n\n");
	printf("O aluno mais baixo -> matricula %d e altura %.2f cm\n", matmenor, menor);
	printf("O aluno mais alto -> matricula %d e altura %.2f cm\n", matmaior, maior);
	getche();
}
