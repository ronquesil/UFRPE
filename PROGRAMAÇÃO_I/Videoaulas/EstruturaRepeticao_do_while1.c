#include <conio.h>
#include <stdio.h>
#include <locale.h>
// Calcula b�nus do Cliente
int main() // Changed 'main()' to 'int main()' to specify return type
{
    setlocale(LC_ALL, "Portuguese");
    float valor;
    int cod, op;
    printf("Loja Compre Tudo\n\n");
    do
    {
        printf("C�digo do Cliente: ");
        scanf("%d", &cod);
        printf("Valor das compras: ");
        scanf("%f", &valor);
        if (valor < 5000)
            printf("\n\nValor do b�nus R$ %.2f\n", valor * 0.1);
        else
            printf("\n\nValor do b�nus R$ %.2f\n", valor * 0.15);
        printf("\n\nDeseja continuar(1-sim / 2-n�o)?: \n\n");
        scanf("%d", &op);
    } while (op == 1); // Added missing semicolon

    return 0; // Return statement added
}

