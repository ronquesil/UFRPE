#include <stdio.h>
#include <conio.h>
/*	Calcular o volume de uma esfera de raio R,
	onde R ser� fornecido pelo usu�rio.	*/
main()
{	float v, r;
	printf("Volume de uma Esfera\n\n");
	printf("\nRaio da Esfera: ");
	scanf("%f", &r);
	v = (4*3.1415*r*r*r)/3;
	printf("\n\nVolume da Esfera = %.2f", v);
	getche();
}
