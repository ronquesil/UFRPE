#include <conio.h>
#include <stdio.h>
#include <locale.h>
/*c�lculo do peso ideal a partir da altura e orienta��o sexual */
main()
{	setlocale(LC_ALL, "Portuguese");
	float altura, pesoideal;
	int sexo;
	printf("C�lculo do Peso Ideal\n\n");
	printf("Qual a sua altura em metros? ");
	scanf("%f",&altura);
	printf("\nQual o seu sexo? (Digite 1 - Masculino / 2 - Feminino) ");
	scanf("%d",&sexo);
	if (sexo==1)
		pesoideal = (72.7*altura)-58;
	else
		pesoideal = (62.1*altura)-44.7;
	printf("\n\nO seu peso ideal � %f.2 kg \n", pesoideal);
	getche();
}
