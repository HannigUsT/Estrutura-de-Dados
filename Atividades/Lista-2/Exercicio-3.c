#include <stdio.h>

int i, j, x;
void test()
{
    int a, b, c;
    printf("Digite 3 numeros e veja o dobro deles: \n");
    scanf("%d %d %d", &i, &j, &x);
    a = i + i;
    b = j + j;
    c = x + x;
    printf("%d %d %d", a, b, c);
}

int main(void)
{
    int result;
    test();
    return 0;
}