#include <stdio.h>

int fatorial(int n)
{
    if (n <= 1)
        return (1);
    else
        return (n * fatorial(n - 1));
}

int main(void)
{
    int n;
    printf("Digite o valor de n:");
    scanf("%d", &n);
    int fatorial(int n);
    printf("Fatorial de n: %d", fatorial(n));
    return 0;
}