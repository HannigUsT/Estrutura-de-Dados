// Trabalho Incompleto
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>

#define sair 0
#define cadastrar 1
#define remover 2
#define consultar 3
#define alterar 4
#define PRIORIDADE1 1
#define PRIORIDADE2 2
#define PRIORIDADE3 3

int getOpcao(void)
{
    int Opcao;
    printf(" \nFunções:\n%d - Sair \n%d - Cadastrar\n%d - Remover\n%d - Consultar\n", sair, cadastrar, remover, consultar);
    printf("Opcao: ");
    scanf("%d", &Opcao);
    return Opcao;
}

int getPrioridade(void)
{
    int Prioridade;
    printf(" \n%d - Maiores de 60 anos, Deficientes ou Gestantes\n%d - Aluno \n%d - Visitante - Professor\n", PRIORIDADE1, PRIORIDADE2, PRIORIDADE3);
    printf("Prioridade: ");
    return 0;
}

typedef struct
{
    int chave;
} objeto;

typedef struct filaencadeada *filaprioridade;

typedef struct nodefila *ptrnodefila;

typedef struct nodefila
{
    objeto valor;
    ptrnodefila proximo;
} nodefila;

typedef struct
{
    ptrnodefila inicio;
    ptrnodefila fim;
    int contador;
} filaencadeada;

typedef struct
{
    int pri;
    filaencadeada fila;
} prioridade[2];

void iniciaFila(filaencadeada *fila)
{
    fila->contador = 0;
    fila->fim = NULL;
    fila->inicio = NULL;
}

int verificaVazia(filaencadeada *fila)
{
    return (fila->inicio == NULL);
}

void imprimeFila(filaencadeada *fila)
{
    printf("\n[ ");
    ptrnodefila ptr;
    for (ptr = fila->inicio; ptr != NULL; ptr = ptr->proximo)
    {
        printf("%d ", ptr->valor.chave);
    }
    printf("]\n");
}

void enfileiraComPrioridade(objeto num, filaencadeada *fila, int prio)
{
    ptrnodefila aux;
    aux = (ptrnodefila)malloc(sizeof(nodefila));
    aux->valor = num;
    aux->proximo = NULL;

    if (verificaVazia(fila))
    {

        fila->fim = fila->inicio = aux;
    }
    else if (prio == 1)
    {

        fila->fim->proximo = aux;
        fila->fim = fila->fim->proximo;
    }
    else if (prio == 2)
    {

        fila->fim->proximo = aux;
        fila->fim = fila->fim->proximo;
    }
    else if (prio == 3)
    {

        fila->fim->proximo = aux;
        fila->fim = fila->fim->proximo;
    }

    imprimeFila(fila);
}

objeto desenfileiraFila(filaencadeada *fila)
{
    ptrnodefila aux;
    objeto valor;
    if (!verificaVazia(fila))
    {
        aux = fila->inicio;
        valor = aux->valor;
        fila->inicio = fila->inicio->proximo;
        free(aux);
        fila->contador--;
    }
    else
    {
        printf("\n\tERRO!\n\nNão Remove\n");
        valor.chave = -1;
    }
    imprimeFila(fila);
    return (valor);
}

void destroiFila(filaencadeada *fila)
{
    free(fila);
}

int main(int argc, char **argv)
{
    int Opcao, prio;
    filaencadeada fila;
    objeto valor;
    iniciaFila(&fila);

    while ((Opcao = getOpcao()) != sair)
    {
        switch (Opcao)
        {
        case cadastrar:
            getPrioridade();
            scanf("%d", &prio);
            if (prio < 1 || prio > 3)
            {
                printf("\nPrioridade não corresponde.\n");
                break;
            }
            printf("\nDigite o valor desejado: ");
            scanf("%d", &valor.chave);
            enfileiraComPrioridade(valor, &fila, prio);
            break;

        case remover:
            desenfileiraFila(&fila);
            break;

        case consultar:
            imprimeFila(&fila);
            break;
        }
    }
    destroiFila(&fila);
}