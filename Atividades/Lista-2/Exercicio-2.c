#include <stdio.h>
#include <math.h>

int funcaoQuadrado(x, x1, y, y1)
{
    int Dist, A, B, A1, B1, SomaAB;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de x1: ");
    scanf("%d", &x1);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de y1: ");
    scanf("%d", &y1);
    A = (x - x1);
    B = (y - y1);
    A1 = pow(A, 2);
    B1 = pow(B, 2);
    SomaAB = A1 + B1;
    Dist = sqrt(SomaAB);
    return Dist;
}

int main(void)
{
    printf("O resultado da equacao e: %d", funcaoQuadrado(0, 0, 0, 0));
    return 0;
}