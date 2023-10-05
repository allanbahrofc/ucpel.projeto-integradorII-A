#include <stdio.h>
/*
Escreva um algoritmo para ler valores inteiros e imprimir na tela enquanto o usuário não digitar 0 para sair.
- O algoritmo deve mostrar o maior valor digitado
- O algoritmo deve mostrar o menor valor digitado
*/

int main()
{
    int aux, valor, maior = 0, menor = 0;

    do
    {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (valor > maior)
        {
            maior = valor;
        }

        if (valor < menor)
        {
            menor = valor;
        }

    } while (valor != 0);

    printf("O maior valor digitado foi %d\n", maior);
    printf("O menor valor digitado foi %d\n", menor);

    scanf("%d", aux);
    return 0;
}