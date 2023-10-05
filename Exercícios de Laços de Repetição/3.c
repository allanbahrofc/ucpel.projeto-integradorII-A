#include <stdio.h>
/*
Escreva um algoritmo para ler valores inteiros e imprimir na tela enquanto o usuário não digitar 0 para sair
*/

int main()
{
  int num;

  while (num != 0) {
    printf("Digite um valor: ");
    scanf("%d", &num);
    printf("%d\n", num);
  }

  return 0;
}