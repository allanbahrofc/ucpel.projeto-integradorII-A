#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa em C que representa uma calculadora utilizando funções e a leitura de dados do teclado.
- Tratar denominador = 0 na operação de divisão
- Tratar valores fora do intervalo de escolha
- Adicionar o resto na operação da divisão
- Adicionar a operação de exponenciação
- Crie a possibilidade do usuário fazer mais e uma operação dentro da mesma execução
- Possibilidade do usuário entrar com um novo valor quando o denominador da divisão for igual a zero
- Contagem do número de vezes que a calculadora foi utilizada

*/

#include <stdio.h>
#include <stdlib.h>

int tratar_denominador_zero(int a, int b)
{
    if (b == 0)
    {
        printf("Erro: denominador não pode ser igual a zero.\n");
        return -1;
    }
    return 0;
}

int tratar_valores_fora_do_intervalo(int a, int b)
{
    if (a < 1 || a > 10 || b < 1 || b > 10)
    {
        printf("Erro: valores devem estar entre 1 e 10.\n");
        return -1;
    }
    return 0;
}

int calcular_resto(int a, int b)
{
    return a % b;
}

int calcular_exponenciacao(int a, int b)
{
    return pow(a, b);
}

int main()
{
    int a, b, opcao, contador = 0;

    do
    {
        printf("Escolha uma operação:\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Exponenciação\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        if (opcao < 0 || opcao > 5)
        {
            printf("Opção inválida.\n");
            continue;
        }

        printf("Digite o primeiro valor: ");
        scanf("%d", &a);
        printf("Digite o segundo valor: ");
        scanf("%d", &b);

        if (tratar_valores_fora_do_intervalo(a, b) == -1)
        {
            continue;
        }

        // Calcular o resultado da operação
        int resultado = 0;
        switch (opcao)
        {
        case 1:
            resultado = a + b;
            break;
        case 2:
            resultado = a - b;
            break;
        case 3:
            resultado = a * b;
            break;
        case 4:
            if (tratar_denominador_zero(a, b) == -1)
            {
                continue;
            }
            resultado = a / b;
            break;
        case 5:
            resultado = calcular_exponenciacao(a, b);
            break;
        }

        printf("Resultado: %d\n", resultado);

        contador++;

        printf("Deseja fazer mais uma operação? (1 - Sim | 0 - Não)\n");
        scanf("%d", &opcao);
    } while (opcao != 0);

    printf("A calculadora foi utilizada %d vezes.\n", contador);

    return 0;
}