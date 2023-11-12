#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*cálculo do peso ideal a partir da altura e orientação sexual */
main()
{	
  	//setlocale(LC_ALL, "Portuguese");
	float altura, pesoideal;
	int sexo;
	printf("Cálculo do Peso Ideal\n\n");
	printf("Qual a sua altura em metros(m)? ");
	scanf("%f", &altura);
	printf("\nQual o seu sexo? (Digite 1 - Masculino / 2 - Feminino) ");
	scanf("%d", &sexo);
	switch(sexo)		
	{
		case 1: pesoideal = (72.7*altura)-58; break;
		case 2:	pesoideal = (62.1*altura)-44.7; break;
	}
	printf("\n\nO seu peso ideal é %.2f kg \n", pesoideal);
	getche();
}
