#include <stdio.h>
/* 	Programador: Ronaldo Queiroz
	Data: 02/11/2023
	Programa para calcular o cubo de um número */
main()
{ 
int num,c; // C guarda o cubo do número
printf("Cubo de um numero\n\n"); 
printf("Digite o numero: "); 
scanf("%d",&num); 
c = num*num*num; 
printf("\nCubo de %d = %d",num,c); 
getche(); 
}
