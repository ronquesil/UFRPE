#include<conio.h>
#include<stdio.h>
#include <locale.h>
main()
{	setlocale(LC_ALL, "Portuguese");
	int i;
	for (i=10; i>=1; i--)
		printf("\n %d", i);
	getche();
}	
