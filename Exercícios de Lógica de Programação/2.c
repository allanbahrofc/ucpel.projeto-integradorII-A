#include <stdio.h>
/*
Elabore um programa em C que receba dois valores. No primeiro momento deve-se verificar se os valores formam um retângulo ou um quadrado.
a) Caso formem um quadrado:
Imprima a palavra “quadrado”.
b) Caso seja um retângulo:
Mostre o perímetro (soma de todos os lados) e a área (base vezes a altura).
*/
int main()
{
    int valor_1, valor_2, perimetro, area;

    printf("Digite o primeiro valor \n");
    scanf("%d", &valor_1);

    printf("Digite o segundo valor \n");

    scanf("%d", &valor_2);

    if (valor_1 == valor_2)
    {
        printf("Os valores formam um quadrado \n");
    }
    else
    {
        perimetro = 2 * (valor_1 + valor_2);
        area = valor_1 * valor_2;

        printf("Os valores formam um retângulo \n");
        printf("Perímetro %d\nÁrea %d\n", perimetro, area);
    }

    return 0;
}
