#include <stdio.h>
/*
Um endocrinologista deseja controlar a saúde de seus pacientes e, para isso, utiliza a fórmula do Índice de Massa Corporal (IMC). Sabendo que o IMC é calculado por meio da seguinte fórmula:
IMC = massa/altura²
Onde a massa é dada em kg e a altura em metros
Elabore um algoritmo em C que, dadas a massa e altura de uma pessoa, apresente sua faixa de risco, baseando-se na seguinte tabela:
IMC 			FAIXA DE RISCO
Abaixo de 20 		Abaixo do peso
De 20 até 25 		Normal
De 25 até 30 		Excesso de peso
De 30 até 35 		Obesidade
Acima de 35 		Obesidade mórbida
*/
int main()
{
    float massa, altura, imc;

    printf("Digite o seu peso\n");
    scanf("%f", &massa);

    printf("Digite a sua altura\n");
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    if (imc < 20)
    {
        printf("Abaixo do peso\n");
    }
    else if (imc <= 25)
    {
        printf("Normal\n");
    }
    else if (imc <= 30)
    {
        printf("Excesso de peso\n");
    }
    else if (imc <= 35)
    {
        printf("Obesidade\n");
    }
    else
    {
        printf("Obesidade mórbida\n");
    }
    return 0;
}
