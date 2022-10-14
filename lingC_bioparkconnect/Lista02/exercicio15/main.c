#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cargo;
    float salario, newSalario, diferenca;

    printf("Digite o cargo do funcionario:\n");
    printf("101 - Gerente\n102 - Engenheiro\n103 - Tecnico\n100 - Outro cargo que nao esta na tabela\n");
    printf("Digite o cargo: ");
    scanf("%d", &cargo);
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if (cargo==101)
    {
        newSalario=salario+(salario*0.1);
        diferenca=newSalario-salario;
        printf("O salario antigo dos gerentes eh: %.2f reais\n", salario);
        printf("O novo salario dos gerentes eh de %.2f reais\n", newSalario);
        printf("A diferenca entre os dois salario eh de %.2f reais\n", diferenca);
    }

    else if (cargo==102)
    {
        newSalario=salario+(salario*0.2);
        diferenca=newSalario-salario;
        printf("O salario antigo dos engenheiros eh: %.2f reais\n", salario);
        printf("O novo salario dos engenheiros eh de %.2f reais\n", newSalario);
        printf("A diferenca entre os dois salario eh de %.2f reais\n", diferenca);
    }

    else if (cargo==103)
    {
        newSalario=salario+(salario*0.3);
        diferenca=newSalario-salario;
        printf("O salario antigo dos tecnicos eh: %.2f reais\n", salario);
        printf("O novo salario dos tecnicos eh de %.2f reais\n", newSalario);
        printf("A diferenca entre os dois salario eh de %.2f reais\n", diferenca);
    }

    else
    {
        newSalario=salario+(salario*0.4);
        diferenca=newSalario-salario;
        printf("O salario antigo desse funcionario eh: %.2f reais\n", salario);
        printf("O novo salario desse funcionario eh de %.2f reais\n", newSalario);
        printf("A diferenca entre os dois salario eh de %.2f reais\n", diferenca);
    }

    return 0;
}
