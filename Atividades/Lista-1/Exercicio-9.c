#include <stdio.h>

int main()
{
    int vetor[7][4], auxiliar, controle, posicaomenor;
    int i = 0, j = 0, x = 0, h = 0, menor = 999;

    printf("\n");
    for (i = 0; i < 7; i++)
    {
        for (x = 0; x < 4; x++)
        {
            printf("Na posição (%d | %d) digite o número desejado: ", i, x);
            scanf("%d", &auxiliar);
            controle = 1;
        }
    }
    for (j = 0; j < 7; j++)
    {
        for (h = 0; h < 4; h++)
        {
            if (vetor[j][h] == auxiliar)
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
            vetor[i][x] = auxiliar;
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (x = 0; x < 4; x++)
        {
            if (vetor[i][x] == 0)
            {
                menor = vetor[i][x];
                i++;
            }
            if (vetor[i][x] < menor)
            {
                menor = vetor[i][x];
            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (x = 0; x < 4; x++)
        {
            if (vetor[i][x] == menor)
            {
                posicaomenor = i;
            }
        }
    }
    printf("\n");
    printf("\nO Menor número é: %d", menor);
    printf("\n");
    printf("\nNa posição %d tem o valor %d", posicaomenor, menor);
    for (i = 0; i < 7; i++)
    {
        for (x = 0; x < 4; x++)
        {
            printf("|%d|", vetor[i][x]);
        }
    }

    return 0;
}