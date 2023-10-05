#include <stdio.h>
/*
Implemente de maneira recursiva o cálculo de Fibonacci.
Esse método recebe como parâmetro um inteiro e retorna como resposta a sequência de Fibonacci até este valor.
Por exemplo: Fibonacci(6) deve retornar 8.
*/
int fibonacci_recursivo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci_recursivo(n - 1) + fibonacci_recursivo(n - 2);
    }
}
int main()
{
    int num = 6;
    int fin = fibonacci_recursivo(num);
    printf("Fibonaci(6): %d", fin);
}