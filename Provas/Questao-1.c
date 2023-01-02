#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dados_Registro
{
    char nome[40];
    int matricula;
} Registro;

int main(void)
{

    int i, cont;
    int *v;
    printf("Entre com a quantidade de Registros: ");
    scanf("%d", &cont);
    v = (int *)malloc(cont * sizeof(int));
    cont = cont + 3;
    v = (int *)realloc(v, cont * sizeof(int));
    Registro R[cont];

    for (i = 0; i < cont; i++)
    {
        strcpy(R[i].nome, "NULL");
        (R[i].matricula = 0);
    }

    for (i = 0; i < cont; i++)
    {
        printf("\nRegistro Empregado: ");
        printf("\nNome do empregado: ");
        fflush(stdin);
        scanf("%[^\n]", R[i].nome);
        printf("Matricula do empregado: ");
        scanf("%d", &R[i].matricula);
    }

    for (i = 0; i < cont; i++)
    {
        printf("\n\nRegistro: ");
        printf("\nNome do empregado: %s ", R[i].nome);
        printf("\nMatricula do empregado: %d", R[i].matricula);
    }
    free(v);
}