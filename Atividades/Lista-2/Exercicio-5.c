#include <stdio.h>

void funcao(int num)
{
    int cont, cont2;
    cont = 0;
    for (cont = 1; cont <= num; cont++)
    {
        for (cont2 = 0; cont2 < cont; cont2++)
        {
            printf("!");
        }
        printf("\n");
    }
}

int main(void)
{
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    funcao(num);
    return 0;
}