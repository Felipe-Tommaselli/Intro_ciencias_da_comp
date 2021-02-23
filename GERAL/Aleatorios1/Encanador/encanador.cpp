


#include <stdio.h>

int main()
{
    int n_dias, valor_dia;
    float imposto, valor_liq, valor_bruto, valor_perd;

    valor_dia = 20;
    imposto = 8;
    printf("informe o numero de dias\n \n=");
    scanf("%d", &n_dias);

    valor_bruto = valor_dia * n_dias;

    printf("Valor Bruto= %f\n", valor_bruto);

    valor_liq = valor_bruto * (100 - imposto) / 100;

    printf("Valor Liquido= %f\n", valor_liq);

    valor_perd = valor_bruto - valor_liq;

    printf("Valor Perdido= %f", valor_perd);

    getchar();

    return 0;
}