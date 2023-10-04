#include <stdio.h>
/*
Fazer um algoritmo que imprima todos os números pares no intervalo 1-100
*/

int main()
{

    int i;
    i = 2;

    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }

        i += 2;
    }

    return 0;
}
