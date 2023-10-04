#include <stdio.h>
/*
Faça um programa em C que leia 10 valores inteiros (utilize a estrutura for e vetores) e:
* Encontre e mostre o maior valor
* Encontre e mostre o menor valor
* Calcule e mostre a média dos números lidos
*/

int main()
{
    int numeros[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o número %d\n", i + 1);
        scanf("%d", &numeros[i]);
    }

    int maior = numeros[0];
    int menor = numeros[0];
    float media = 0;

    for (int i = 1; i < 10; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        else if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        media += numeros[i];
    }
    media /= 10;

    printf("O maior valor é %d\n", maior);
    printf("O menor valor é %d\n", menor);
    printf("A média dos números é %.2f\n", media);

    return 0;
}
