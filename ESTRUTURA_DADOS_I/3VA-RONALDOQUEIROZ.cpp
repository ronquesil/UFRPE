#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
#include <string.h> 

//programa Base 3VA - Lista dinâmica Ordenada - ordenação por média 

typedef struct tipo_aluno {  int mat, serie;
                             char nome[20];
                             float media;
                             struct tipo_aluno *prox; 
                           } TAluno;

    TAluno *inicio = NULL;  
    TAluno *noatual;        
    int op, qa;   


void linha()
{ int i;
  for (i=1;i<=80;i++)
     printf("_");
  printf("\n");
}

void cabec()
{ system("cls");
  printf("UFRPE - Lista Dinamica Ordenada\n");
  linha();
}  

void inserir ()
{   TAluno *novono, *antinserido;
    int i, matl,seriel, continuar;
    char nomel[20];
    float medial;
    do{ cabec();
        printf("\nInserir novo aluno\n\n");
        printf("\n\tMatricula: ");
        scanf("%d",&matl);
        fflush(stdin);
        printf("\n\tNome.....: ");
        gets(nomel);
        printf("\n\tSerie....: ");
        scanf("%d",&seriel);
        printf("\n\tMedia....: ");
        scanf("%f",&medial);
        qa++;
       //Aloca memoria para o novo aluno e coloca os dados 
        novono = (TAluno *) malloc(sizeof(TAluno));
        novono->mat = matl;
        strcpy(novono->nome,nomel);
        novono->media = medial;
        novono->serie = seriel;
        antinserido = NULL;
        // Inserir novono na lista de alunos
        if (inicio == NULL)   
        {  inicio = novono;
           novono->prox = NULL;
        }
        else 
        {   noatual = inicio;
            if (noatual->media >= medial) 
            { novono->prox = inicio;
              inicio = novono;
            }
            else 
            {   while(noatual != NULL)
                {  if (noatual->media <= medial) 
                   { antinserido = noatual;
                     noatual = noatual->prox;
                   }
                   else  
                     noatual = NULL;
                }
                novono->prox = antinserido->prox;
                antinserido->prox = novono;
            }
        }
        printf("\n\nInserido com Sucesso!\n");
        printf("\nContinuar inserindo (1-sim/2-nao)? ");
        scanf("%d",&continuar);
     }while (continuar == 1); 
} 

void removerserie() {
    int serieParaRemover;
    TAluno *temp;
    cabec();
    printf("\nRemover Alunos de uma Serie\n\n");
    printf("Digite a serie para remover todos os alunos: ");
    scanf("%d", &serieParaRemover);

    while (inicio != NULL && inicio->serie == serieParaRemover) {
        temp = inicio;
        inicio = inicio->prox;
        free(temp);
        qa--;
    }

    noatual = inicio;
    while (noatual != NULL && noatual->prox != NULL) {
        if (noatual->prox->serie == serieParaRemover) {
            temp = noatual->prox;
            noatual->prox = noatual->prox->prox;
            free(temp);
            qa--;
        } else {
            noatual = noatual->prox;
        }
    }

    printf("\nAlunos da serie %d removidos com sucesso.\n", serieParaRemover);
    printf("\nTecle enter para voltar para o menu...");
    getche();
}

void alterarmedia() {
    int matricula;
    float novaMedia;
    TAluno *aluno, *anterior = NULL, *temp;

    cabec();
    printf("\nAlterar Media do Aluno\n\n");
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    aluno = inicio;
    while (aluno != NULL && aluno->mat != matricula) {
        anterior = aluno;
        aluno = aluno->prox;
    }

    if (aluno == NULL) {
        printf("\nAluno nao encontrado.\n");
    } else {
        printf("Aluno encontrado: %s\n", aluno->nome);
        printf("Nova media: ");
        scanf("%f", &novaMedia);

        if (novaMedia != aluno->media) {
            aluno->media = novaMedia;
            if (anterior != NULL) {
                anterior->prox = aluno->prox;
            } else {
                inicio = aluno->prox;
            }
            if (inicio == NULL || inicio->media >= novaMedia) {
                aluno->prox = inicio;
                inicio = aluno;
            } else {
                temp = inicio;
                while (temp->prox != NULL && temp->prox->media < novaMedia) {
                    temp = temp->prox;
                }
                aluno->prox = temp->prox;
                temp->prox = aluno;
            }
        }
    }

    printf("\nMedia alterada com sucesso.\n");
    printf("\nTecle enter para voltar para o menu...");
    getche();
}
         

void listagemintervalo() {
    float limInferior, limSuperior;
    cabec();
    printf("\nListagem por Intervalo de Media\n\n");
    printf("Digite o limite inferior da media: ");
    scanf("%f", &limInferior);
    printf("Digite o limite superior da media: ");
    scanf("%f", &limSuperior);

    noatual = inicio;
    if (noatual != NULL) {
        printf("\nMatricula     Nome                     Serie     Media\n");
        linha();
        while (noatual != NULL) {
            if (noatual->media >= limInferior && noatual->media <= limSuperior) {
                printf("%9d     %-20s     %5d     %5.1f\n", noatual->mat, noatual->nome, noatual->serie, noatual->media);
            }
            noatual = noatual->prox;
        }
        linha();
    } else {
        printf("\nNao tem alunos nesse intervalo de media.\n");
    }
    printf("\nTecle enter para voltar para o menu...");
    getche();
}

void listagemgeral()
{   noatual = inicio; 
    cabec();
    printf("\nListagem de Alunos\n\n");
    if (noatual!=NULL) 
    {  printf("\nMatricula     Nome                     Serie     Media\n");   
       linha();
       while( noatual != NULL)  
       { printf("%9d     %-20s     %5d     %5.1f\n", noatual->mat, noatual->nome, noatual->serie,noatual->media);
         noatual = noatual->prox; 
       }
       linha();
       printf("Quantidade de Alunos: %d\n",qa);
    }
    else
      printf("\n\nNao tem nenhum aluno cadastrado.");
    printf("\n\nTecle enter para voltar para o menu...");
    getche();
}

void limpalista()
{  noatual = inicio;
   while (noatual != NULL)
   {  inicio = noatual->prox;
      free(noatual);
      noatual = inicio;
   }
}

// Programa principal
main()
{   qa = 0;
    do { cabec();
         printf("\nOpcoes: \n\n");
         printf("   1 - Inserir novo aluno\n\n");
         printf("   2 - Remover todos alunos de uma serie\n\n");
         printf("   3 - Alterar media do aluno\n\n");
         printf("   4 - Listagem por intervalo de media\n\n");
         printf("   5 - Listar todos os alunos\n\n");
         printf("   0 - para sair \n\n");
         linha();
         printf("Entre com a sua opcao: ");
         scanf("%d", &op);    
         switch(op) 
         {  case 1: inserir(); break;
            case 2: removerserie();break;
            case 3: alterarmedia();break;
            case 4: listagemintervalo(); break;
            case 5: listagemgeral(); break;
            case 0: limpalista(); break; 
            default: printf("\n\n Opcao invalida"); getche(); break;
         }
    } while (op != 0);
}

