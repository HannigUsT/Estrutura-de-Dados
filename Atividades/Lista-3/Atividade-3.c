#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dados_Endereco
{
    char rua[20], bairro[20], cidade[20], estado[2];
    int cep;
} Endereco;

typedef struct dados_Cadastro
{
    char nome[30], estadocivil[10], sexo[2];
    int identidade, cpf, telefone, idade;
    Endereco E;
} Cadastro;

Cadastro maiorIdade(Cadastro *c, int quant)
{
    int maiorIdade = c[0].idade;
    Cadastro temporario;
    for (int i = 0; i < quant; i++)
    {
        if (c[i].idade > maiorIdade)
        {
            temporario = c[i];
            maiorIdade = c[i].idade;
        }
    }
    return temporario;
}

void sexoMasculino(Cadastro *c, int quant)
{
    for (int i = 0; i < quant; i++)
    {
        if (strcmp(c[i].sexo, "Masculino") == 0)
        {
            printf("%s é do sexo Masculino", c[i].nome);
        }
    }
}

int main(void)
{
    int i, cont;
    printf("Entre com a quantidade de registros: ");
    scanf("%d", &cont);
    Cadastro C[cont];

    for (i = 0; i < cont; i++)
    {
        strcpy(C[i].nome, "NULL");
        strcpy(C[i].estadocivil, "NULL");
        strcpy(C[i].sexo, "NULL");
        (C[i].identidade = 0);
        (C[i].cpf = 0);
        (C[i].telefone = 0);
        (C[i].idade = 0);
        strcpy(C[i].E.rua, "NULL");
        strcpy(C[i].E.bairro, "NULL");
        strcpy(C[i].E.cidade, "NULL");
        strcpy(C[i].E.estado, "NULL");
        (C[i].E.cep = 0);
    }
    for (i = 0; i < cont; i++)
    {
        printf("\nCadastro: ");
        printf("\nDigite o nome do cliente: ");
        fflush(stdin);
        scanf("%s", C[i].nome);
        printf("Digite o estado civil do cliente: ");
        fflush(stdin);
        scanf("%s", C[i].estadocivil);
        printf("Digite o sexo do cliente: ");
        fflush(stdin);
        scanf("%s", C[i].sexo);
        printf("Digite o rg do cliente: ");
        scanf("%d", &C[i].identidade);
        printf("Digite o cpf do cliente: ");
        scanf("%d", &C[i].cpf);
        printf("Digite o telefone do cliente: ");
        scanf("%d", &C[i].telefone);
        printf("Digite a idade do cliente: ");
        scanf("%d", &C[i].idade);
        printf("Digite o cep do endereco: ");
        scanf("%d", &C[i].E.cep);
        printf("Digite a rua do endereco: ");
        fflush(stdin);
        scanf("%s", C[i].E.rua);
        printf("Digite o bairro do endereco: ");
        fflush(stdin);
        scanf("%s", C[i].E.bairro);
        printf("Digite a cidade do endereco: ");
        fflush(stdin);
        scanf("%s", C[i].E.cidade);
        printf("Digite o estado do endereco: ");
        fflush(stdin);
        scanf("%s", C[i].E.estado);
        fflush(stdin);
    }

    for (i = 0; i < cont; i++)
    {
        printf("\nEndereço:");
        printf("\nNome do cliente: %s", C[i].nome);
        printf("\nEstado Civil do cliente: %s", C[i].estadocivil);
        printf("\nSexo do cliente: %s", C[i].sexo);
        printf("\nRg do cliente: %d", C[i].identidade);
        printf("\nCPF do cliente: %d", C[i].cpf);
        printf("\nTelefone do cliente: %d", C[i].telefone);
        printf("\nIdade do cliente: %d", C[i].idade);
        printf("\nRua do cliente: %s", C[i].E.rua);
        printf("\nBairro do cliente: %s", C[i].E.bairro);
        printf("\nCidade do cliente: %s", C[i].E.cidade);
        printf("\nEstado do cliente: %s", C[i].E.estado);
        printf("\nCep do cliente: %d\n", C[i].E.cep);
    }

    Cadastro maiorIdade2 = maiorIdade(C, cont);
    printf("Quem tem a maior idade é %s", maiorIdade2.nome);
    sexoMasculino(C, cont);

    return 0;
}