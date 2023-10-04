#include <stdio.h>
/*
Implementar um algoritmo que imprima os 10 primeiros termos da série de Fibonacci.
Observação: os dois primeiros termos desta série são 0 e 1 e os demais são gerados a partir da soma dos dois anteriores

Termos: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811,
*/

int main()
{

    int a = 0, b = 1, c;
    int i;

    printf("%d\n%d\n", a, b);

    for (i = 2; i <= 10; i++)
    {
        c = a + b;
        printf("%d\n", c);

        a = b;
        b = c;
    }

    return 0;
}
