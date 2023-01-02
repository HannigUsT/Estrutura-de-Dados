#include <stdio.h>
#include <stdlib.h>

float menorRecursivo(float vetor[], int z)
{
    if (z == 1)
    {
        return vetor[0];
    }
    else
    {
        float menor;
        menor = menorRecursivo(vetor, z - 1);
        if (menor < menorRecursivo(vetor, z - 1))
        {
            return menor;
        }
        else
        {
            return vetor[z - 1];
        }
    }
}

float menorInterativo(float vetor[], int z)
{
    int i;
    float menor;
    for (i = 0; i < z; i++)
    {
        if (i == 0)
        {
            menor = vetor[i];
        }
        else
        {
            menor = vetor[i] < menor ? vetor[i] : menor;
        }
    }
    return menor;
}

int main()
{
    int i, z;
    printf("Digite o tamanho de vetor: ");
    scanf("%d", &z);
    float vetor[z];

    for (i = 0; i < z; i++)
    {
        printf("Digite o valor do numero: ");
        scanf("%f", &vetor[i]);
    }

    printf("Menor numero : %.2f\n", menorInterativo(vetor, z));
    printf("Maior numero : %.2f", menorRecursivo(vetor, z));
}