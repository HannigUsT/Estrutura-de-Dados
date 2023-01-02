#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dados_Alunos
{
    char nomealuno[50], matricula[10];
    float nota[3];
} Alunos;

int main(void)
{
    Alunos A[5];
    int i, maiornota_a, maiormedia_a, menormedia_a;
    float media[5], maiornota, maiormedia, menormedia;
    maiornota = 0;
    maiormedia = 0;
    menormedia = 0;

    for (i = 0; i < 5; i++)
    {
        strcpy(A[i].nomealuno, "NULL");
        strcpy(A[i].matricula, "NULL");
        (A[i].nota[0] = 0);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite:\n");
        printf("Matricula do Aluno %d: ", i + 1);
        fflush(stdin);
        gets(A[i].matricula);
        printf("Nome do Aluno %d: ", i + 1);
        fflush(stdin);
        gets(A[i].nomealuno);
        printf("Nota 1 do Aluno %d: ", i + 1);
        scanf("%f%*c", &A[i].nota[0]);
        printf("Nota 2 do Aluno %d: ", i + 1);
        scanf("%f%*c", &A[i].nota[1]);
        printf("Nota 3 do Aluno %d: ", i + 1);
        scanf("%f%*c", &A[i].nota[2]);

        media[i] = A[i].nota[0] + A[i].nota[1] + A[i].nota[2];

        if (maiornota < A[i].nota[0])
        {
            maiornota = A[i].nota[0];
            maiornota_a = i;
        }
        if (media[i] > maiormedia)
        {
            maiormedia = media[i];
            maiormedia_a = i;
        }
        if (maiornota < A[i].nota[0])
        {
            menormedia = media[i];
            menormedia_a = i;
        }
    }

    printf("\nAluno com maior Nota : %s", A[maiornota_a].nomealuno);
    printf("\nAluno com maior Media: %s", A[maiormedia_a].nomealuno);
    printf("\nAluno com menor Media: %s", A[menormedia_a].nomealuno);

    return 0;
}