#include <stdio.h>

int potencial(int x, int n)
{
    if (n == 0)
        return (1);
    else if (n > 0)
    {
        return (x * potencial(x, n - 1));
    }
}

int main(void)
{
    int x, n;
    printf("Digete o valor da base: ");
    scanf("%d", &x);
    printf("Digete o valor que deseja elevar: ");
    scanf("%d", &n);
    int potencial(int x, int n);
    printf("A potencia de %d elevado a %d é: %d", x, n, potencial(x, n));
    return 0;
}