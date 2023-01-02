#include <stdio.h>
#include <math.h>

int A, B, AB;
void funcaodoisparametros(x, y)
{
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    A = x;
    B = y;
    AB = x + y;
    x = AB;
}

int main(void)
{
    funcaodoisparametros(0, 0);
    printf("O resultado e: %d %d", AB, B);
    return 0;
}