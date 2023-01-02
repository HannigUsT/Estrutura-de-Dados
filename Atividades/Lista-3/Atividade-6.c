#include <stdio.h>

int deAte(int i)
{
    printf("%d\n", i);
    if (i >= 10)
    {
        return (10);
    }
    else
        return i = (i + 10) - i;
}

int main(void)
{
    int i;
    printf("Digite um número:");
    scanf("%d", &i);
    int deAte(int i);
    printf("%d", deAte(i));
    return 0;
}
