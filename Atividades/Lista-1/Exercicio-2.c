#include <stdio.h>

int main(void)
{
    int i, A[] = {1, 0, 5, -2, -5, 7}, Soma;
    for (i = 0; i <= 5; i++)
    {
        Soma = A[0] + A[1] + A[5];
        printf("A[%d] = %d\n", i, A[i]);
    }
    A[4] = A[3] + 102;
    printf("Soma dos vetores A[0] A[1] e A[5] = %d\n", Soma);
    printf("Novo valor do A[3] = [%d]", A[4]);
    return 0;
}