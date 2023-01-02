#include <stdio.h>
#include <stdlib.h>

int Funcao(char x, int y)
{
    printf("Digite o carecter: ");
    scanf("%c", &x);
    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &y);
    int Coluna, Linha;
    Coluna = y;
    Linha = y;
    for (Coluna = 0; Coluna < y; Coluna++)
    {
        for (Linha = 0; Linha < y; Linha++)
        {
            printf(" %c ", x);
        }
        printf("\n");
    }
    return 0;
}

int main(void)
{
    Funcao(0, 0);
    return 0;
}