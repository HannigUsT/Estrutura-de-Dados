#include <stdio.h>

int main()
{
    int vetor[15], auxiliar, controle, posicaomenor;
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
    printf("\n");
    printf("\nO Menor número é: %d", menor);
    printf("\n");
    printf("\nNa posição %d tem o valor %d", posicaomenor, menor);
    for (i = 0; i < 15; i++)
    {
        printf("|%d|", vetor[i]);
    }

    return 0;
}