#include <stdio.h>
/*
Faça um programa em C que leia o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.
Sabendo-se que o vendedor recebe uma comissão de 3% sobre o total das vendas até R$ 1.500
mais 5% sobre o que ultrapassar este valor,
calcular e escrever o seu salário total.
*/
int main()
{
    float salario_fixo, vendas, comissao_1500, comissao_extra, salario_total;

    printf("Digite o salário fixo do vendedor\n");
    scanf("%f", &salario_fixo);

    printf("Digite o valor das vendas efetuadas pelo vendedor\n");
    scanf("%f", &vendas);

    comissao_1500 = vendas * 0.03;

    if (vendas > 1500)
    {
        comissao_extra = (vendas - 1500) * 0.05;
    }
    else
    {
        comissao_extra = 0;
    }

    salario_total = salario_fixo + comissao_1500 + comissao_extra;

    printf("O salário total do vendedor é R$ %.2f\n", salario_total);

    return 0;
}
