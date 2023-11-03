#include<conio.h>
#include<stdio.h>
#include <locale.h>
//Calcula bônus do Cliente
main()
{	setlocale(LC_ALL, "Portuguese");
	float valor;
	int cod, op;
	printf("Loja Compre Tudo\n\n");
	do
	{	printf("Código do Cliente: ");
		scanf("%d", &cod);
		printf("Valor das compras: ");
		scanf("%f", &valor);
	if (valor<5000)
		printf("\n\nValor do bônus R$ %.2f\n", valor*0.1);
	else
		printf("\n\nValor do bônus R$ %.2f\n", valor*0.15);
		printf("\n\nDeseja continuar(1-sim / 2-não)?:");
		scanf("%d",&op);
	} while (op==1)
	getche();
}
