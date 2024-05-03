#include <stdlib.h>
#include <stdio.h>

int operacao, valor1, valor2, resultado;

/* Funcao para exibir o menu da calculadora */
void menucalculadora()
{
    printf("+--------------------------------+\n");
    printf("|      Calculadora Simples       |\n");
    printf("+================================+\n");
    printf("|  1-Soma       |    2-Subtrair  |\n");
    printf("+--------------------------------+\n");
    printf("| 3-Multiplicar |    4-Dividir   |\n");
    printf("+================================+\n");
    printf("Informe a operacao desejada ou aperte 5 para sair\n");
    scanf("%d", &operacao);
}

/* Funcao para entrada dos valores a serem calculados */
void entrada()
{
    printf("Informe o primeiro valor\n");
    scanf("%d", &valor1);
    printf("Informe o segundo valor\n");
    scanf("%d", &valor2);
}

/* Funcao para realizar a operacao de soma */
void soma()
{
    resultado = valor1 + valor2;
}

/* Funcao para realizar a operacao de subtracao */
void subtracao()
{
    resultado = valor1 - valor2;
}

/* Funcao para realizar a operacao de multiplicacao */
void multiplicacao()
{
    resultado = valor1 * valor2;
}

/* Funcao para realizar a operacao de divisao */
void divisao()
{
    if (valor2,valor1 != 0)
    {
        resultado = valor1 / valor2;
    }
    else
    {
        printf("Erro: divisao por zero!\n");
        resultado = 0;
    }
}

/* Funcao para exibir o resultado da operacao */
void saida()
{
    if (valor2,valor1 != 0)
    {
        printf("O resultado da operacao e: %d\n", resultado);
    }
    else
    {
        printf("Erro: divisao por zero!\n");
    }
}

int main()
{
    do
    {
        menucalculadora(); // Chama a funcao para exibir o menu e obter a operacao desejada
        switch (operacao)
        {
        case 1:
            entrada(); // Chama a funcao para obter os valores de entrada
            soma();    // Chama a funcao para realizar a soma
            saida();   // Chama a funcao para exibir o resultado
            break;
        case 2:
            entrada();   // Chama a funcao para obter os valores de entrada
            subtracao(); // Chama a funcao para realizar a subtracao
            saida();     // Chama a funcao para exibir o resultado
            break;
        case 3:
            entrada();       // Chama a funcao para obter os valores de entrada
            multiplicacao(); // Chama a funcao para realizar a multiplicacao
            saida();         // Chama a funcao para exibir o resultado
            break;
        case 4:
            entrada(); // Chama a funcao para obter os valores de entrada
            divisao(); // Chama a funcao para realizar a divisao
            saida();   // Chama a funcao para exibir o resultado
            break;
        }
    } while (operacao != 5); // Loop ate a operacao 5 (sair) ser escolhida
    return 0;
}
