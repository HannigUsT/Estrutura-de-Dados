#include <stdio.h>

int main()
{

    int A[11], B[11], C[11], contador, contador2, somaA, somaB, subtracaoAB;

    for (contador = 1; contador < 11; contador++)
    {
        printf("Digite o arranjo A:\n");
        scanf("%d", &A[contador]);
    }

    for (contador2 = 1; contador2 < 11; contador2++)
    {
        printf("Digite o arranjo B:\n");
        scanf("%d", &B[contador2]);
    }

    C[1] = A[1] - B[1];
    C[2] = A[2] - B[2];
    C[3] = A[3] - B[3];
    C[4] = A[4] - B[4];
    C[5] = A[5] - B[5];
    C[6] = A[6] - B[6];
    C[7] = A[7] - B[7];
    C[8] = A[8] - B[8];
    C[9] = A[9] - B[9];
    C[10] = A[10] - B[10];

    printf("A subtracao de A[1] por B[1] é %d\n", C[1]);
    printf("A subtracao de A[2] por B[2] é %d\n", C[2]);
    printf("A subtracao de A[3] por B[3] é %d\n", C[3]);
    printf("A subtracao de A[4] por B[4] é %d\n", C[4]);
    printf("A subtracao de A[5] por B[5] é %d\n", C[5]);
    printf("A subtracao de A[6] por B[6] é %d\n", C[6]);
    printf("A subtracao de A[7] por B[7] é %d\n", C[7]);
    printf("A subtracao de A[8] por B[8] é %d\n", C[8]);
    printf("A subtracao de A[9] por B[9] é %d\n", C[9]);
    printf("A subtracao de A[10] por B[10] é %d\n", C[10]);

    return 0;
}