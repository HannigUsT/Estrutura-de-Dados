#include <stdio.h>

int main(void)
{
    int vetor[10], i, vetormenos2;
    for (i = 1; i <= 10; i++)
    {
        vetormenos2 = i - 2;
        printf("Vetor[%d] = %d\n", i, vetormenos2);
    }
    return 0;
}