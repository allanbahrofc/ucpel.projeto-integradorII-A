#include <stdio.h>
/*
Faça um programa em C que receba 6 valores inteiros (utilize a estrutura for e vetores) e mostre:
Os números pares digitados
A soma dos números pares digitados
Os números ímpares digitados
A quantidade de números ímpares digitados
Dado um valor, contar quantas vezes ele aparece no vetor
*/

int main()
{
    int num[6];
    int i, par = 0, impar = 0, soma = 0;
    int valor;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o valor %d\n", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 6; i++)
    {
        if (num[i] % 2 == 0)
        {
            par++;
            soma += num[i];
        }
        else
        {
            impar++;
        }
    }

    if (par > 0)
    {
        printf("Números pares digitados\n");
        for (i = 0; i < 6; i++)
        {
            if (num[i] % 2 == 0)
            {
                printf("%d", num[i]);
            }
        }
        printf("\n");
    }

    if (par > 0)
    {
        printf("Soma dos números pares digitados\n%d", soma);
    }

    if (impar > 0)
    {
        printf("\nNúmeros ímpares digitados\n");
        for (i = 0; i < 6; i++)
        {
            if (num[i] % 2 != 0)
            {
                printf("%d", num[i]);
            }
        }
        printf("\n");
    }

    printf("Digite um valor para contar quantas vezes ele aparece no vetor\n");
    scanf("%d", &valor);
    for (i = 0; i < 6; i++)
    {
        if (num[i] == valor)
        {
            break;
        }
    }

    printf("O valor %d aparece %d vezes no vetor\n", valor, i);

    return 0;
}
