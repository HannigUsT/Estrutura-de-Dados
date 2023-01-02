#include <stdio.h>
int main(void)
{
    int x, Pessoas, contador, cont, contM, contH, N, contP, Num, controle, Numero, Elementos, maior, menor;
    float Dividendo, Divisor, Divisão, y, MediaI, mediaSexoM, mediaSexoH, Idade[Pessoas], Numeros[Elementos], MediaE;
    char sexo[Pessoas];

    // Primeiramente o programa vai printar na tela as escolhas do usúario, que após isso vão entrar no switch X com o valor de 1 a 7 e logo assim entrando nos cases.

    printf("--------------------------------------------------------------------------\n");
    printf("Escolha a opção de 1 a 7. Para dar saída digite 7\n");
    printf("(1) Divisão dos números digitados.\n");
    printf("(2) Faixa Etária das pessoas.\n");
    printf("(3) Números primos.\n");
    printf("(4) Retornar o maior, menor e média.\n");
    printf("(5) Código Morse.\n");
    printf("(6) Mudança de base.\n");
    printf("(7) Sair\n");
    printf("--------------------------------------------------------------------------\n");
    do
    {
        scanf("%d", &x);
        contador = 0;
        cont = 0;
        contM = 0;
        contH = 0;
        MediaI = 0;
        contP = 0;
        maior = 0;
        menor = 999;
        MediaE = 0;
        switch (x)
        {
        case 1:
            // O usuário vai entrar com o Divisor e o Dividendo, o programa vai fazer o calcúlo e imprimir na tela o resultado da Divisão.
            printf("Para efetuar a divisão, digite o dividendo e o divisor:\n");
            printf("Dividendo:\n");
            scanf("%f", &Dividendo);
            printf("Divisor:\n");
            scanf("%f", &Divisor);
            Divisão = Dividendo / Divisor;
            printf("--------------------------------------------------------------------------\n");
            printf("O resultado da divisão é %f\n", Divisão);
            printf("--------------------------------------------------------------------------\n");
            break;

        case 2:
            // Primeiramente o usúario vai entrar com quantas pessoas ele deseja para calcular a faixa etária, após isso Ele vai digitar a idade e o sexo de cada pessoa, sendo H para homem e M para mulher, com todos os dados coletados o programa vai fazer o calcúlo da média de idade de todas as pessoas, e também a média para cada sexo, e após os calcúlos vai imprimir todas as médias na tela.
            printf("Quantindade de pessoas para o cálculo da faixa etária:\n");
            scanf("%d", &Pessoas);

            for (int i = 1; i <= Pessoas; i++)
            {
                printf("Digite a idade de cada pessoa:\n");
                scanf("%f", &Idade[i]);
                printf("Digite o sexo da pessoa, H para homem, M para mulher:\n");
                scanf("%s", &sexo[i]);
                printf("Sexo(%d):%c\n", i, sexo[i]);
                printf("Idade(%d):%f\n", i, Idade[i]);
            }
            for (int i = 1; i <= Pessoas; i++)
            {
                MediaI = (MediaI + Idade[i]);
                if (sexo[i] == 'M')
                {
                    printf("");
                    mediaSexoM = mediaSexoM + Idade[i];
                    contM++;
                }
                else
                {
                    printf("");
                    mediaSexoH = mediaSexoH + Idade[i];
                    contH++;
                }
            }
            MediaI = (MediaI / Pessoas);
            mediaSexoM = (mediaSexoM / contM);
            mediaSexoH = (mediaSexoH / contH);
            printf("--------------------------------------------------------------------------\n");
            printf("A média da Idade de Pessoas é:(%f).\n", MediaI);
            printf("A média de Idade das Mulheres é:(%f)\n", mediaSexoM);
            printf("A média de Idade dos Homens é:(%f)\n", mediaSexoH);
            printf("--------------------------------------------------------------------------\n");
            break;

        case 3:
            printf("--------------------------------------------------------------------------\n");
            printf("Escreva um número que deseja saber a soma de todos os números primos até ele:\n");
            printf("--------------------------------------------------------------------------\n");
            scanf("%d", &Num);
            printf("--------------------------------------------------------------------------\n");
            for (int i = 2; i <= Num; i++)
            {
                controle = 1;
                for (int j = i - 1; j > 1; j--)
                {
                    if (i % j == 0)
                    {
                        controle = 0;
                        break;
                    }
                }
                if (controle == 1)
                {
                    printf("%d\n", i);
                    contP = contP + i;
                }
            }
            printf("--------------------------------------------------------------------------\n");
            printf("A soma de todos os números primos até %d é %d.\n", Num, contP);
            printf("--------------------------------------------------------------------------\n");

        case 4:
            printf("--------------------------------------------------------------------------\n");
            printf("Quantindade de Elementos que deseja inserir:\n");
            scanf("%d", &Elementos);

            for (int i = 1; i <= Elementos; i++)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("Escreva um número:\n");
                scanf("%f", &Numeros[i]);
                MediaE = (MediaE + Numeros[i]);
                if (Numeros[i] == 0)
                {
                    maior = Numeros[i];
                    menor = Numeros[i];
                    i++;
                }
                if (Numeros[i] == -1)
                {
                    break;
                }
                if (Numeros[i] > maior)
                {
                    maior = Numeros[i];
                }
                if (Numeros[i] < menor)
                {
                    menor = Numeros[i];
                }
            }
            MediaE = (MediaE / Elementos);
            printf("--------------------------------------------------------------------------\n");
            printf("O Menor número é: %d e o Maior número é: %d.\n", menor, maior);
            printf("A média de Elementos é: %f.\n", MediaE);
            printf("--------------------------------------------------------------------------\n");
            break;
            break;

        case 5:
            printf("--------------------------------------------------------------------------\n");
            printf("Digite de 1 a 20 para saber o número em código morse.\n");
            printf("--------------------------------------------------------------------------\n");
            scanf("%d", &Numero);
            if (Numero <= 0 || Numero > 20)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número é inferior a 1 ou maior que 20.\n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 1)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 1 em código morse é: .---- \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 2)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 2 em código morse é: ..--- \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 3)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 3 em código morse é: ...-- \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 4)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 4 em código morse é: ....- \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 5)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 5 em código morse é: ..... \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 6)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 6 em código morse é: -.... \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 7)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 7 em código morse é: --... \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 8)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 8 em código morse é: ---.. \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 9)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 9 em código morse é: ----. \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 10)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 10 em código morse é: .--------- \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 11)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 11 em código morse é: .----.---- \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 12)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 12 em código morse é: .----..--- \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 13)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 13 em código morse é: .----...-- \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 14)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 14 em código morse é: .----....- \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 15)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 15 em código morse é: .----..... \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 16)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 16 em código morse é: .-----.... \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 17)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 17 em código morse é: .------... \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 18)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 18 em código morse é: .-------.. \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 19)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 19 em código morse é: .--------. \n");
                printf("--------------------------------------------------------------------------\n");
            }
            if (Numero == 20)
            {
                printf("--------------------------------------------------------------------------\n");
                printf("O número 20 em código morse é: ..-------- \n");
                printf("--------------------------------------------------------------------------\n");
            }
            break;
        }
    } while (x != 7);
}