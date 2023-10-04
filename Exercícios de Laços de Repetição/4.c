#include <stdio.h>
/*
Escreva um algoritmo para ler valores inteiros e imprimir na tela enquanto o usuário não digitar 0 para sair.
- O algoritmo deve mostrar o maior valor digitado
- O algoritmo deve mostrar o menor valor digitado
*/

int main()
{
    int aux;
    int counter = 0;
    int numbers[] = {};
    do
    {
        printf("> ");
        scanf("%d", &aux);
        printf("> number: %d", aux);
        numbers[counter] = aux;
        counter++;
    } while (aux < 0 || aux > 0);
}