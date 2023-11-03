#include<conio.h>
#include<stdio.h>
#include <locale.h>
//Calcula bônus do Cliente
main()
{	setlocale(LC_ALL, "Portuguese");
	float valor;
	int cod, cont;
	printf("Loja Compre Tudo\n\n");
	cont = 1;
	while (cont<=5)
	{	printf("Código do Cliente %d: ", cont);
	scanf("%d", &cod);
	printf("Valor das compras: ");
	scanf("%f", &valor);
	if (valor<5000)
		printf("\n\nValor do bônus R$ %.f\n", valor*0.1);
	else
		printf("\n\nValor do bônus R$ %.2f\n", valor*0.15);
	printf("\n\nTecle ENTER para continuar...\n\n");
	getche();
	cont++;
	}
}
