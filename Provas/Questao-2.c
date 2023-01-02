#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct info_Professor
{
    char nome[40], email[40];
    int cpf;
} Professor;

typedef struct info_Diciplinas
{
    char nome[50];
    int creditos;
    Professor P;
} Diciplinas;

void MinhasDisciplinas(int quant)
{

    int i;
    Diciplinas D[quant];

    for (i = 0; i < quant; i++)
    {
        strcpy(D[i].nome, "NULL");
        (D[i].creditos = 0);
        strcpy(D[i].P.nome, "NULL");
        strcpy(D[i].P.email, "NULL");
        (D[i].P.cpf = 0);
    }

    for (i = 0; i < quant; i++)
    {
        printf("\nDados diciplinas: ");
        printf("\nNome da diciplina: ");
        fflush(stdin);
        scanf("%[^\n]", D[i].nome);
        printf("Creditos da diciplina: ");
        scanf("%d", &D[i].creditos);
        printf("Nome do Professor: ");
        fflush(stdin);
        scanf("%[^\n]", D[i].P.nome);
        printf("Email Professor: ");
        fflush(stdin);
        scanf("%[^\n]", D[i].P.email);
        printf("CPF Professor: ");
        scanf("%d", &D[i].P.cpf);
    }

    for (i = 0; i < quant; i++)
    {
        printf("\n\nDados: ");
        printf("\nNome da Diciplina: %s ", D[i].nome);
        printf("\nCreditos da Diciplina : %d ", D[i].creditos);
        printf("\nNome do Professor: %s ", D[i].P.nome);
        printf("\nEmail do Professor: %s ", D[i].P.email);
        printf("\nCpf do Professor : %d ", D[i].P.cpf);
    }
}

int main()
{
    int quant;
    printf("Digite a quantidade de Diciplinas: ");
    scanf("%d", &quant);
    MinhasDisciplinas(quant);
    return 0;
}