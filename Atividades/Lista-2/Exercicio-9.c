#include <stdio.h>

int parametro()
{
    int Numero, Numero1, Numero2, Numero3, Numero4, Numero5;
    printf("Digite um número inteiro de 5 digitos: ");
    scanf("%d", &Numero);

    Numero1 = Numero / 10000;

    Numero2 = Numero - Numero1 * 10000;
    Numero2 = Numero2 / 1000;

    Numero3 = Numero - Numero1 * 10000;
    Numero3 = Numero3 - Numero2 * 1000;
    Numero3 = Numero3 / 100;

    Numero4 = Numero - Numero1 * 10000;
    Numero4 = Numero4 - Numero2 * 1000;
    Numero4 = Numero4 - Numero3 * 100;
    Numero4 = Numero4 / 10;

    Numero5 = Numero - Numero1 * 10000;
    Numero5 = Numero5 - Numero2 * 1000;
    Numero5 = Numero5 - Numero3 * 100;
    Numero5 = Numero5 - Numero4 * 10;

    printf("%d   %d   %d   %d   %d", Numero1, Numero2, Numero3, Numero4, Numero5);
    return 0;
}

int main(void)
{
    parametro();
    return 0;
}