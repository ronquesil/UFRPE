#include <stdio.h>
#include <conio.h>
main()
{ int quant = 3;
float media = 4.5678;
printf("A quantidade de alunos eh %d!\n\n", quant);
printf("A quantidade de aluno eh %4d!\n\n", quant);
printf("A media da turma = %.2f\n\n", media);
printf("R$ %.2f!\n\n", 1234.5678);
printf("R$ %10.2f!\n\n", 12345.5678);
printf("R$ %-10.2f!\n\n", 1234.5678);
getche();
}
