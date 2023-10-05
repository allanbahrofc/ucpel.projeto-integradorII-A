#include <stdio.h>
/*
Implemente de maneira iterativa E recursiva o método fatorial. Esse método recebe como parâmetro um inteiro
e retorna como resposta o fatorial destes elementos. Por exemplo: fatorial(6) deve retornar 720 .
*/

int fatorial(int n)
{
    int fat = 1;
    for (int i = 2; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}

int main()
{
    int fat = fatorial(6);
    printf("O fatorial(6) é: %d", fat);
}