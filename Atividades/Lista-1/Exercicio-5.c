#include <stdio.h>

int main()
{
    int vetor[15], auxiliar, controle, posicaomenor, somapares, mediapares;
    int i = 0, j = 0, menor = 999;
    printf("\n");
    for (i = 0; i < 15; i++)
    {
        vetor[i] = -99999;
    }
    for (i = 0; i < 15; i++)
    {
        printf("Na posicação (%d) digite números inteiros e dinstintos: ", i);
        scanf("%d", &auxiliar);
        controle = 1;
        for (j = 0; j < 15; j++)
        {
            if (vetor[j] == auxiliar)
            {
                controle = -1;
            }
        }
        if (controle == -1)
        {
            printf("Esse valor não é dinstinto, digite um valor dinstinto.\n");
            i--;
        }
        else
        {
            vetor[i] = auxiliar;
        }
    }
    for (i = 0; i < 15; i++)
    {
        if (vetor[i] == 0)
        {
            menor = vetor[i];
            i++;
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    for (i = 0; i < 15; i++)
    {
        if (vetor[i] == menor)
        {
            posicaomenor = i;
        }
    }
    printf("\nO Menor número é: %d", menor);
    printf("\n");
    printf("\nNa posição %d tem o valor %d", posicaomenor, menor);
    printf("\n");
    printf("\nNúmeros pares: ");
    for (i = 0; i < 15; i++)
    {
        if (vetor[i] % 2)
        {
        }
        else
        {
            printf("|%d|", vetor[i]);
            somapares += vetor[i];
            mediapares = somapares / vetor[i];
        }
    }
    printf("\n");
    printf("\nNúmeros digitados e posições: ");
    for (i = 0; i < 15; i++)
    {
        printf("|%d|", vetor[i]);
    }
    printf("\n");
    printf("\nSoma dos números pares digitados: %d ", somapares);
    printf("\n");
    printf("\nMédia dos números pares digitados: %d ", mediapares);
    return 0;
}