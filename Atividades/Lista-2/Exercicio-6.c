#include <stdio.h>

int a, b;

void funcao()
{
    printf("Digite o valor de a:");
    scanf("%d", &a);
    printf("Digite o valor de b:");
    scanf("%d", &b);
    int x, y;
    x = (a + a) * 2;
    a = x;
    y = (b + b) * 2;
    b = y;
    printf("A=%d B=%d\n", a, b);
}

int main(void)
{
    int a, b;
    funcao();
    return 0;
}