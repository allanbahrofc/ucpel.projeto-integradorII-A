#include <stdio.h>
/*
Criar um algoritmo que imprima a soma de todos os números de 1 até 100.
Isto é, calcular o valor de S na expressão S = 1+2+3+...+100
*/

int main()
{

    int i, soma = 0;

    for (i = 1; i <= 100; i++)
    {
        soma += i;
    }

    printf("A soma de todos os números de 1 até 100 é %d\n", soma);

    return 0;
}
