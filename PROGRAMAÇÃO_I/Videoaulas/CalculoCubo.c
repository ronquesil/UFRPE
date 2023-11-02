#include <stdio.h>
#include <conio.h>
//calculo do cubo de um numero inteiro
main()
{	int num, c;
	printf("\nCubo de um numero\n\n");
	printf("Digite o numero: ");
	scanf("%d", &num);
	c = num*num*num;
	printf("\nCubo de %d = %d",num, c);
	getche();
}
