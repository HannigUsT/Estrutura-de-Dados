#include <stdio.h>

int main()
{
    int valor;
    printf("Digite sua idade para saber em qual categoria de natacao se encontra \n");
    scanf("%d", &valor);
    if (valor <= 4)
    {
        printf("Não se encaixa em uma categoria");
    }
    else if (valor >= 5 && valor <= 7)
    {
        printf("Categoria Infantil \n");
    }
    else if (valor >= 8 && valor <= 10)
    {
        printf("Categoria Juvenil \n");
    }
    else if (valor >= 11 && valor <= 15)
    {
        printf("Categoria Adolescente \n");
    }
    else if (valor >= 16 && valor <= 30)
    {
        printf("Categoria Adulto \n");
    }
    else
    {
        printf("Categoria Sênior");
    }
    return 0;
}