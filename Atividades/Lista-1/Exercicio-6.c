#include <stdio.h>

int main()
{
    int matriz[5][5], contA, contB;
    for (contA = 0; contA < 5; contA++)
    {
        for (contB = 0; contB < 5; contB++)
        {
            printf("Na posição (%d | %d) digite o número desejado: ", contA, contB);
            scanf("%d", &matriz[contA][contB]);
        }
    }
    printf("\n");
    for (contA = 0; contA <= 4; contA++)
    {
        for (contB = 0; contB <= 4; contB++)
        {
            printf(" |%d| ", matriz[contA][contB]);
        }
        printf("\n");
    }
    printf("\n Diagonal principal: ");
    for (contA = 0; contA < 5; contA++)
    {
        printf("%d ", matriz[contA][contA]);
    }

    printf("\n Diagonal secundaria: ");
    for (contA = 0; contA < 5; contA++)
    {
        printf("%d ", matriz[contA][5 - 1 - contA]);
    }
    return 0;
}