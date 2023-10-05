#include <stdio.h>
/*
Implemente de maneira iterativa E recursiva a operação Soma_elementos.
Esse método deve receber como parâmetro um vetor contendo números
e retorna a soma dos elementos desta lista. Ou seja:

Se v = {1, 2, 3, 10} a função Soma_elementos(v) deve retornar 16

*/
int soma_elementos(int *v, int tamanho) {
  int soma = 0;
  for (int i = 0; i < tamanho; i++) {
    soma += v[i];
  }
  return soma;
}
int main()
{
    int vetor[] = {1,4,2,5,2};
    soma_elementos(vetor, 5);
}