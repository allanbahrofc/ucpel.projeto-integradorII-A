#include <stdio.h>
/*
Faça um programa em C que leia diferentes números inteiros e classifique-os como:
a) Positivo ou negativo
b) Par ou ímpar
*/

int main()
{
    int number, aux;
    printf("Digite o número:\n");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("O número %d - Positivo.\n", number);
    }
    else
    {
        printf("O número %d - Negativo\n", number);
    }

    if (number % 2 == 0)
    {
        printf("O número %d - Par\n", number);
    }
    else
    {
        printf("O número %d - Impar\n", number);
    }

    scanf("%d", &aux);
}