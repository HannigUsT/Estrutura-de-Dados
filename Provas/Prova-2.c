#include <stdio.h>

int main(void)
{
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    int cont, cont2, c = 0;
    cont = 0;
    for (cont = 1; cont <= num; cont++)
    {
        for (cont2 = 0; cont2 < cont; cont2++)
        {
            c++;
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}