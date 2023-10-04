#include <stdio.h>
/*
Crie um programa em C que representa uma calculadora utilizando funções e a leitura de dados do teclado.
Tratar denominador = 0 na operação de divisão
Tratar valores fora do intervalo de escolha
Adicionar o resto na operação da divisão
Adicionar a operação de exponenciação

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num_1, num_2, operacao, resto, resultado;

    printf("Digite o primeiro número\n");
    scanf("%d", &num_1);

    printf("Digite o segundo número\n");
    scanf("%d", &num_2);

    printf("Escolha a operação desejada\n1.Soma\n2.Subtração\n3.Multiplicação\n4.Divisão\n5.Exponenciação\n");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        resultado = num_1 + num_2;
        printf("1.Soma %d\n", resultado);
        break;
    case 2:
        resultado = num_1 - num_2;
        printf("2.Subtração %d\n", resultado);
        break;
    case 3:
        resultado = num_1 * num_2;
        printf("3.Multiplicação %d\n", resultado);
    case 4:
        if (num_2 == 0)
        {
            printf("Divisão não é possível");
        }
        else
        {
            resultado = num_1 / num_2;
            resto = num_1 % num_2;
            printf("4.Divisão %d Resto %d\n", resultado, resto);
        }
        break;
    case 5:
        resultado = pow(num_1, num_2);
        printf("5.Exponenciação %d\n", resultado);
        break;
    default:
        printf("Operação inválida\n");
    }

    return 0;
}
