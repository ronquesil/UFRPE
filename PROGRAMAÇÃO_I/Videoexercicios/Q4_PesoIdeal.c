#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//#include <locale.h>
/*c�lculo do peso ideal a partir da altura e orienta��o sexual */
main()
{	
  	//setlocale(LC_ALL, "Portuguese");
	float altura, pesoideal;
	int sexo;
	printf("C�lculo do Peso Ideal\n\n");
	printf("Qual a sua altura em metros(m)? ");
	scanf("%f", &altura);
	printf("\nQual o seu sexo? (Digite 1 - Masculino / 2 - Feminino) ");
	scanf("%d", &sexo);
	if (sexo==1)
		pesoideal = (72.7*altura)-58;
	else
		pesoideal = (62.1*altura)-44.7;
	printf("\n\nO seu peso ideal � %.2f kg \n", pesoideal);
	getche();
}
/*main ()
{	float altura, pesoideal;
	int sexo;
	printf("C�lculo de Peso Ideal\n\n");
	printf("Altura em metros(m): ");
	scanf("%f", &altura);
	printf("\nSexo(1-mas/2-fem): ");
	scanf("%d",&sexo);
	if(sexo==1)
		pesoideal = (72.7*altura)-58;
	else
		pesoideal = (62.1*altura)-44.7;
	printf("\n\nSeu peso ideal: %.2fkg \n", pesoideal);
	getche();
}*/
