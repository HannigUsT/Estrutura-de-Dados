// Bibliotecas utilizadas.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição de valores para facilitar o código e a apresentação do trabalho.
#define sair 0
#define cadastrar 1
#define consultar 2
#define remover 3
#define inscricao 0
#define renovacao 1
#define trancamento 2

// Função para imprimir as funções do programa na tela(Sair, Cadastrar e Imrpimir.)
int getOpcaoFuncoes(void)
{
    int Opcao;
    printf(" \nFunções:\n%d - Sair \n%d - Cadastrar\n%d - Consultar\n%d - Remover\n", sair, cadastrar, consultar, remover);
    printf("Opção: ");
    scanf("%d", &Opcao);
    return Opcao;
}

// Função para imprimir as Prioridades na tela.(Inscrição, Renovação e Trancamento.)
int getOpcaoPrioridade(void)
{
    printf(" \n%d - Inscrição\n%d - Renovação\n%d - Trancamento\n ", inscricao, renovacao, trancamento);
    return 0;
}

// Definindo a estrutura cadastro, onde vamos colher cpd,  tipo da prioridade e o nome. Ex: Cpd: 53158, Nome: Gustavo, Prioridade: Renovação.
typedef struct cadastroEncadeado
{
    int cpd;
    char tipodepropriedade[45];
    char nome[45];
} cadastro;

// Definindo a estrutura pilha, onde vamos colher a info e apontar para o proximo.
typedef struct pilhaEncadeada
{
    struct cadastroEncadeado informacao;
    struct pilhaEncadeada *proximo;
} pilha;

// Aloca um nó na estruct, se o no tiver valor 0 será comentado que está cheio, caso não entre nessa condinção: define a informação no nó alocado, define o ponteiro proximo para apontar para o topo, atualiza o ponteiro topo com valor do nó.
void empilha(pilha **topo, cadastro cadastro)
{
    pilha *no = NULL;
    no = (pilha *)malloc(sizeof(pilha));
    if (no == 0)
    {
        printf("\n Pilha Cheia!");
    }
    no->informacao = cadastro;
    no->proximo = *topo;
    *topo = no;
}

// Função que vai verificar se a pilha está vazia (onde Null = topo), e imprimir as informações do aluno (Prioridade, Cpd e Nome.)
void empilhaTopo(pilha *topo)
{
    if (topo == NULL)
    {
        printf("Essa pilha está vazia!\n");
    }
    printf("%s\n", topo->informacao.tipodepropriedade);
    printf("CPD: %d\n", topo->informacao.cpd);
    printf("Nome: %.5s\n", topo->informacao.nome);
}

// Função de empilhar as prioridades, Inscricação.
void empilhaPrioridade(pilha *topo[inscricao], cadastro cadastro)
{
    printf("\nCPD: ");
    scanf("%d", &cadastro.cpd);
    printf("Nome: ");
    getchar();
    scanf("%[^\n]s", cadastro.nome);
    strcpy(cadastro.tipodepropriedade, "Inscrição");
    empilha(&topo[inscricao], cadastro);
}

// Função de empilhar as prioridades, Renovação.
void empilhaRenovacao(pilha *topo[renovacao], cadastro cadastro)
{
    printf("\nCPD: ");
    scanf("%d", &cadastro.cpd);
    printf("Nome: ");
    getchar();
    scanf("%[^\n]s", cadastro.nome);
    strcpy(cadastro.tipodepropriedade, "Renovação");
    empilha(&topo[renovacao], cadastro);
}

// Função de empilhar as prioridades, Trancamento.
void empilhaTrancamento(pilha *topo[trancamento], cadastro cadastro)
{
    printf("\nCPD: ");
    scanf("%d", &cadastro.cpd);
    printf("Nome: ");
    getchar();
    scanf("%[^\n]s", cadastro.nome);
    strcpy(cadastro.tipodepropriedade, "Trancamento");
    empilha(&topo[trancamento], cadastro);
}

// Definir o valor do topo das pilhas como null para deixa-las vazia e sem lixo, e após isso começar a inserir dados nas pilhas.
void defineNull(pilha *topo[3])
{
    topo[inscricao] = NULL;
    topo[renovacao] = NULL;
    topo[trancamento] = NULL;
}

// A função remove pilha puxa a função pilha ponteiro nó, verifica se está vazia na função esta vázia, após, atualiza o ponteiro topo para o proximo nó, e no fim libera espaço na mémoria.
void removePilha(pilha **topo)
{
    pilha *no;
    if (topo == NULL)
    {
        printf("\nPilha está vazia");
    }
    else if (topo != NULL)
    {
        no = *topo;
        *topo = (*topo)->proximo;
        free(no);
    }
}

int main(int argc, char **argv)
{
    cadastro cadastro;
    // Puxando a struct cadastro para a main.
    struct pilhaEncadeada *topo[3];
    // Definindo um struct na main da pilha apontando para o topo com o tamanho do arranjo.
    int opcao, opcao2;
    // Atribuindo variaveis.
    void defineNull();
    // Definindo os valores Null para o topo das pilhas.

    while ((opcao = getOpcaoFuncoes()) != sair)
    {
        // Enquanto a opção for = a função getOpção e for diferente de sair, entra no switch case.
        switch (opcao)
        {
        case cadastrar:
            // Puxa a função Prioridade e imprime as prioridades.
            getOpcaoPrioridade();
            printf("\nOpção:");
            scanf("%d", &opcao2);
            // Recebe o valor da prioridade na opção2.
            // Se opção2 == 0 == Inscrição, então insere na função empilhaPriorida o tipo de prioridade.
            // Se opção2 == 1 == Cadastro, então insere na função empilhaPriorida o tipo de prioridade.
            // Se opção2 == 2 == Trancamento, então insere na função empilhaPriorida o tipo de prioridade.
            if (opcao2 == inscricao)
            {
                empilhaPrioridade(&topo[inscricao], cadastro);
            }
            else if (opcao2 == renovacao)
            {
                empilhaPrioridade(&topo[renovacao], cadastro);
            }
            else if (opcao2 == trancamento)
            {
                empilhaPrioridade(&topo[trancamento], cadastro);
            }
            break;

        case consultar:
            // Puxa a função Prioridade e imprime as prioridades.
            getOpcaoPrioridade();
            printf("\nOpção:");
            scanf("%d", &opcao2);
            printf("\n");
            // Recebe o valor da prioridade na opção2.
            // Se opção2 = 0 = inscricao, então consulta o topo da pilha da inscrição.
            // Se opção2 = 1 = renovacao, então consulta o topo da pilha da renovacao.
            // Se opção2 = 2 = trancamento, então consulta o topo da pilha da trancamento.
            if (opcao2 == inscricao)
            {
                empilhaTopo(topo[inscricao]);
            }
            else if (opcao2 == renovacao)
            {
                empilhaTopo(topo[renovacao]);
            }
            else if (opcao2 == trancamento)
            {
                empilhaTopo(topo[trancamento]);
            }
            break;

        case remover:
            getOpcaoPrioridade();
            printf("\nOpção:");
            scanf("%d", &opcao2);
            printf("\n");
            // Recebe o valor da prioridade na opção2.
            // Se opção2 = 0 = inscricao, então remove o topo da pilha da inscrição.
            // Se opção2 = 1 = renovacao, então remove o topo da pilha da renovacao.
            // Se opção2 = 2 = trancamento, então remove o topo da pilha da trancamento.
            if (opcao2 == inscricao)
            {
                removePilha(&topo[inscricao]);
            }
            else if (opcao2 == renovacao)
            {
                removePilha(&topo[renovacao]);
            }
            else if (opcao2 == trancamento)
            {
                removePilha(&topo[trancamento]);
            }
            break;
        }
    }
}