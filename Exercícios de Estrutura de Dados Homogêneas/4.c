#include <stdio.h>
/*
Faça um algoritmo para ler 6 números inteiros, colocando-os em um vetor. Crie dois outros vetores,
um deles onde você deve armazenar apenas os números positivos (maiores ou iguais a zero)
e outro onde você deve armazenar apenas os números negativos. Coloque os números positivos no vetor de positivos
e os números negativos no vetor de negativos. Mostre na tela como ficaram os três vetores.
*/

int main()
{

    int numeros[6], positivos[6], negativos[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o valor %d\n", i + 1);
        scanf("%d", &numeros[i]);
    }

    int j = 0;
    for (int i = 0; i < 6; i++)
    {
        if (numeros[i] >= 0)
        {
            positivos[j] = numeros[i];
            j++;
        }
    }

    int k = 0;
    for (int i = 0; i < 6; i++)
    {
        if (numeros[i] < 0)
        {
            negativos[k] = numeros[i];
            k++;
        }
    }

    printf("\nVetor\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\nVetor de números positivos\n");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", positivos[i]);
    }

    printf("\nVetor de números negativos\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", negativos[i]);
    }

    return 0;
}
