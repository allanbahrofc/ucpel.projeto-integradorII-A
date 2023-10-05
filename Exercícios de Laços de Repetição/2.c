#include <stdio.h>
/*
Escreva um algoritmo para ler 100 valores inteiros e imprimir na tela a soma de todos os valores digitados
*/

int main()
{
    int valor, soma = 0;

    for (int i = 0; i < 100; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        soma += valor;
    }

    printf("A soma dos valores é %d\n", soma);

    return 0;
}