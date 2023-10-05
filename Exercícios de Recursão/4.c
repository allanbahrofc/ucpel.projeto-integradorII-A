#include <stdio.h>
/*
Implemente de maneira recursiva o método Soma_digitos.
Este método recebe como parâmetro um inteiro e retorna a soma dos dígitos deste inteiro.
Por exemplo: soma_digitos(14) deve retornar 5  (1+4).
*/
int soma_digitos(int n)
{
    int soma = 0;
    while (n > 0)
    {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}
int main()
{
    int n = 14;
    int soma = soma_digitos(n);
    printf("soma_digitos(%d) = %d\n", n, soma);
    return 0;
}