#include <stdio.h>

int main()
{
    int matriz[3][3], contA, contB, somaAB[3];
    for (contA = 0; contA < 3; contA++)
    {
        for (contB = 0; contB < 3; contB++)
        {
            printf("Na posição (%d | %d) digite o número desejado: ", contA, contB);
            scanf("%d", &matriz[contA][contB]);
        }
        somaAB[contA] = 0;
    }
    for (contA = 0; contA < 3; contA++)
    {
        for (contB = 0; contB < 3; contB++)
        {
            somaAB[contB] = somaAB[contB] + matriz[contA][contB];
        }
    }
    printf("\n");
    for (contA = 0; contA <= 2; contA++)
    {
        for (contB = 0; contB <= 2; contB++)
        {
            printf("|%d|", matriz[contA][contB]);
        }
        printf("\n");
    }
    for (contA = 0; contA < 3; contA++)
    {
        printf(" %d ", somaAB[contA]);
    }
    printf("É a soma do eixo y dos números acima.");
    return 0;
}