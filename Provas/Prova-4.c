#include <stdio.h>  //biblioteca padrao
#include <stdlib.h> // biblioteca padrao

int main()
{
    int n, i, res, s;            // declarando as variaveis inteiras
    printf("Digite um valor: "); // mensagem para o usuario inserir um valor
    scanf("%d%*c", &n);          // guardar o valor
    if (n <= 0)
    {
        printf("O número não é postivo");
    }
    if (n > 1) // condicao
    {
        for (i = 1; i < n; i++) // repeticao
        {
            if (n % i == 0) // condicao
            {
                res = n / i;                                    // conta do resultado
                s = s + res;                                    // conta da soma
                printf("\nO resultado de %d/%d=%d", n, i, res); // essa linha é pra você entender como funciona na pratica
            }
        }
        printf("\n\nSoma: %d", s); // mensagem final imprimindo o resultado da soma
    }
    return 0; // retorna o sistema desde o inicio
}