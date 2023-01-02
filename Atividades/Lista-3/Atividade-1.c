#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;
typedef struct dados_Livro
{
    char titulo[30], autor[25];
    int numeropaginas, ano;
    float preco;
} Livro;

int main(void)
{
    int Cont;
    printf("Insira quantas livros deseja adicionar: ");
    scanf("%d", &Cont);
    Livro L[i];

    for (i = 0; i < Cont; i++)
    {
        strcpy(L[i].titulo, "NULL");
        strcpy(L[i].autor, "NULL");
        (L[i].numeropaginas = 0);
        (L[i].ano = 0);
        (L[i].preco = 0);
    }

    for (i = 0; i < Cont; i++)
    {
        printf("\nDigite o titulo do livro: ");
        fflush(stdin);
        gets(L[i].titulo);
        printf("Digite o autor do livro: ");
        fflush(stdin);
        gets(L[i].autor);
        printf("Digite o numero de paginas: ");
        scanf("%d%*c", &L[i].numeropaginas);
        printf("Digite o ano da publicacao do livro: ");
        scanf("%d%*c", &L[i].ano);
        printf("Digite o preço do livro: ");
        scanf("%f%*c", &L[i].preco);
    }
    for (i = 0; i < Cont; i++)
    {
        printf("\nTitulo do livro: %s\n", L[i].titulo);
        printf("Autor do livro: %s\n", L[i].autor);
        printf("Numero de paginas: %d\n", L[i].numeropaginas);
        printf("Ano de publicacao: %d\n", L[i].ano);
        printf("Preco do livro: %f\n", L[i].preco);
    };
    return 0;
}
