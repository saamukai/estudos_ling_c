/**  Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8%
de impostos. Imprima o salário inicial, o salário com o aumento e o salário final. **/

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
