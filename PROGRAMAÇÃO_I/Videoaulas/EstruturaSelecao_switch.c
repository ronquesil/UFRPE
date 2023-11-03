#include<conio.h>
#include<stdio.h>
#include <locale.h>
main()
{	setlocale(LC_ALL, "Portuguese");
	int cod, quant;
	printf("Supermercado Boa Compra\n\n");
	printf("Código do Produto: ");
	scanf("%d", &cod);
	printf("Quantidade: ");
	scanf("%d", &quant);
	switch(cod)
	{	case 102: printf("\n\nTotal a pagar: R$%.2f\n", quant*5.3);break;
		case 103: printf("\n\nTotal a pagar: R$%.2f\n", quant*6.0);break;
		case 104: printf("\n\nTotal a pagar: R$%.2f\n", quant*3.2);break;
		case 105: printf("\n\nTotal a pagar: R$%.2f\n", quant*2.5);break;
		default: printf("\n\nCódigo de produto inválido!\n");break;
	}
	getche();
}
