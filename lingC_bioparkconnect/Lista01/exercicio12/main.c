/**  Fa?a um algoritmo para ler o sal?rio de um funcion?rio e aument?-Io em 15%. Ap?s o aumento, desconte 8%
de impostos. Imprima o sal?rio inicial, o sal?rio com o aumento e o sal?rio final. **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario=0;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    printf("\nO salario incial do funcionario eh: %.2f", salario);
    salario += salario*0.15;
    printf("\nO salario (com aumento de 15%%) do funcionario eh: %.2f", salario);
    salario -= salario*0.08;
    printf("\nO salario (com impostos descontados em 8%%) do funcionario eh: %.2f\n", salario);

    return 0;
}
