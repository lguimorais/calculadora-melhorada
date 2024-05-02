#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int operacao, valor1, valor2, resultado;

void menucalculadora()
{
    printf("+--------------------------------+\n");
    printf("|      calculadora simples       |\n");
    printf("+================================+\n");
    printf("|  1-soma       |    2-subtrair  |\n");
    printf("+--------------------------------+\n");
    printf("| 3-multiplicar |    4-dividir   |\n");
    printf("+================================+\n");
    printf("informe a operacao desejada ou aperte 5 para sair\n");
    scanf("%D", &operacao);
}
void entrada()
{
    printf("informe o primeiro valor\n");
    scanf("%d", &valor1);
    printf("informe o segundo valor\n");
    scanf("%d", &valor2);
}
void soma()
{
    resultado = valor1 + valor2;
}
void subtracao()
{
    resultado = valor1 - valor2;
}
void multiplicacao()
{
    resultado = valor1 * valor2;
}
void divisao()
{
    resultado = valor1 / valor2;
}
void saida()
{
    printf("o resultado da operacao e :%d\n", resultado);
}
int main()
{
    do
    {
        menucalculadora();
        switch (operacao)
        {
        case 1:
            entrada();
            soma();
            saida();
            break;
        case 2:
            entrada();
            subtracao();
            saida();
            break;
        case 3:
            entrada();
            multiplicacao();
            saida();
            break;
        case 4:
            entrada();
            divisao();
            saida();
            break;
        }
    } while (operacao != 5);
}
