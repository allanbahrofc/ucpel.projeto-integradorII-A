#include <stdio.h>
/*
Implemente e execute o programa para ler uma temperatura em graus Celsius
e apresente-a convertida em graus Farenheit.
A fórmula de conversão é: F = (9 * C + 160) / 5,
sendo F a temperatura em Farenheit e C a temperatura em Celsius.
*/
int main()
{
    int aux; // Auxiliar para pausar programa.
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("A temperatura em graus Fahrenheit é: %.2f°F\n", fahrenheit);
    scanf("%d", &aux);
}