#include <stdio.h>
#include <math.h>
int main()
{
    int vetor[50], auxiliar, controle, posicaomenor, somapares, mediapares, verificador, divisor, limite;
    int i = 0, j = 0, menor = 999;
    printf("\n");
    for (i = 0; i < 50; i++)
    {
        vetor[i] = -99999;
    }
    for (i = 0; i < 50; i++)
    {
        printf("Na posicação (%d) digite números inteiros e dinstintos: ", i);
        scanf("%d", &auxiliar);
        controle = 1;
        for (j = 0; j < 50; j++)
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
    for (i = 0; i < 50; i++)
    {
        if (vetor[i] > controle)
        {
            divisor = 2;
            verificador = 1;
            limite = sqrt(vetor[i]);
            while (verificador && divisor <= limite)
            {
                if (vetor[i] % divisor == 0)
                {
                    verificador = 0;
                }
                divisor++;
            }
            if (verificador == 1)
                printf("\n");
            printf("O número %d é primo.", vetor[i]);
        }
    }
    return 0;
}