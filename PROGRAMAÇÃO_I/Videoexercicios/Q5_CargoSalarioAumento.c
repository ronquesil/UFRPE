#include <stdio.h>
#include <conio.h>
//Cálculo de Aumento de Salário 
main()
{
	int cargo;
	float sal, nsal;
	printf("Empresa Legal\n\n");
	printf("Cargo(1-Gerente / 2-Engenheiro / 3-Tecnico / 4-Auxiliar): ");
	scanf("%d",&cargo);
	printf("Salario atual: ");
	scanf("%f",&sal);
	switch(cargo)
	{
		case 1: nsal=sal*1.1; break;
		case 2: nsal=sal*1.15; break;
		case 3: nsal=sal*1.2; break;
		case 4: nsal=sal*1.25; break;
		default: printf("\n\nCargo Invalido\n"); break;
	}
	if ((cargo>=1) && (cargo<=4))
	{
		printf("\n\nResultados\n");
		printf("\nSalario Antigo = R$ %.2f \n", sal);
		printf("\nSalario Novo = R$ %.2f \n", nsal);
		printf("\nDiferenca de Salarios = R$ %.2f \n", nsal-sal);
	}
	getche();
}
