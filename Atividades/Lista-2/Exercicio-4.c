#include <stdio.h>
void funcao()
{
    int x, z, i;
    printf("Digite o valor de x e z\n");
    scanf("%d", &x);
    scanf("%d", &z);
    x = x * z;
    printf("xz= %d", i);
}

int main(void)
{
    funcao();
    return 0;
}