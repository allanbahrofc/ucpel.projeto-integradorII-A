#include <stdio.h>
/*
Faça um algoritmo que crie um vetor de inteiros de 6 posições,
leia os valores deste vetor e exiba o vetor na tela de trás para frente
(na ordem inversa na qual os dados foram fornecidos).
Faça um algoritmo onde o vetor possa ser facilmente alterado de 10 posições para 30 posições, por exemplo.

*/

int main()
{

    int vetor[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o valor %d\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 5; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
