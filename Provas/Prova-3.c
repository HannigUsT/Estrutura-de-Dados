#include <stdio.h>

int main(void)
{
    int N, i, fat, cont;
    cont = 0;
    float E;
    printf("Digite um numero postivo e inteiro:");
    scanf("%d", &N);
    for (cont = 0; cont < N; N--)
    {
        fat = fat * N;
        printf("\n%d", N);
    }
    if (N < 0)
    {
        printf("Número negativo");
    }
    if (N > 0)
    {
        for (fat = 1; N > 1; N = N - 1)
        {
            fat = fat * N;
        }
    }
    printf("E = 1 / %d", fat);
    return 0;
}