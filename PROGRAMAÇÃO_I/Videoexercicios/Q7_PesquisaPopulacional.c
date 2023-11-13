#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//Pesquisa populacional
main()
{
	float sal, somasal;
	int idade, sexo, maior, menor, qp, qm1200, cont; //qp quantidade de pessoas = ; qm1200 = mulheres que ganham até 1200
	maior = 0;
	menor = 100;
	somasal = 0;
	qp = 0;
	qm1200 = 0;
	do
	{
		system("cls");
		printf("Pesquisa Estatistica\n\n");
		printf("Entrada de Dados\n\n");
		printf("\nIdade: ");
		scanf("%d",&idade);
		printf("\nSexo (1-mas/2-fem): ");
		scanf("%d",&sexo);
		printf("\nSalario: ");
		scanf("%f",&sal);
		somasal = somasal + sal;
		qp = qp + 1;
		if	(idade > maior)
			maior = idade;
		if (idade < menor)
			menor = idade;
		if ((sexo == 2) && (sal <=1200))
			qm1200 = qm1200 + 1;
		printf("\n\nDeseja cadastra outro (1-sim / 2-nao)?");
		scanf("%d",&cont);
	}	while (cont==1);
	system ("cls");
	printf("Pesquisa Estatistica\n\n");
	printf("Resultados\n\n");
	printf("Maior idade: %d\n", maior);
	printf("Menor idade: %d\n", menor);
	printf("Média do salario do grupo: %.2f\n", somasal/qp);
	printf("Quantidade de mulheres com salario ate R$1200,00: %d\n", qm1200);
	getche();
}
