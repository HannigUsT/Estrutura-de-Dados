#include <stdio.h>

int main()
{

    int elementos, i, ele[i], numeros[elementos], maior, menor, somapar, numero, contpar, numpar[i], soma;
    i = 0;
    maior = 0;
    menor = 999;
    somapar = 0;
    float somaNumeros, mediaE, mediaP;
    mediaE = 0;
    mediaP = 0;

    printf("Digite a quantidade de numeros que deseja inserir:");
    scanf("%d", &elementos);

    for (i = 0; i < elementos; i++)
    {
        printf("Escreva um número:\n");
        scanf("%d", &numeros[i]);
        somaNumeros = numeros[i] + numeros[i];
        mediaE = (mediaE + numeros[i]);
        if (numeros[i] == 0)
        {
            maior = numeros[i];
            menor = numeros[i];
            i++;
        }
        if (numeros[i] == -1)
        {
            break;
        }
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
        if (numeros[i] % 2)
        {
            contpar++;
            numpar[i] = numeros[i];
            soma = soma + numeros[i];
        }
    }
    mediaP = soma / contpar;
    mediaE = mediaE / elementos;
    printf("--------------------------------------------------------------------------\n");
    printf("(a) A soma dos numeros digitados: %.1f\n", somaNumeros);
    printf("(b) Quantidade de numeros digitado: %d\n", elementos);
    printf("(c) A media dos numeros digitados: %.1f\n", mediaE);
    printf("(d) O maior numero digitado: %d\n", maior);
    printf("(e) O menor numero digitado: %d\n", menor);
    printf("(f) Media dos numeros pares: %1f\n", mediaP + 1);
    printf("--------------------------------------------------------------------------\n");
    return 0;
}