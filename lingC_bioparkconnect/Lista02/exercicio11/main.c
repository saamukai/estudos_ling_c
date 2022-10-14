#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nivel, horas;
    float salario;

    printf("Digite o nivel do professor (1 2 ou 3): ");
    scanf("%d", &nivel);
    printf("Digite quantas horas o professor fez essa semana: ");
    scanf("%d", &horas);



    if (nivel==1)
    {
        salario=12*horas*4.5;
        printf("\nO salario do professor eh: %.2f reais\n", salario);
    }

    else if (nivel==2)
    {
        salario=17*horas*4.5;
        printf("\nO salario do professor eh: %.2f reais\n", salario);
    }

    else if (nivel==3)
    {
        salario=25*horas*4.5;
        printf("\nO salario do professor eh: %.2f reais\n", salario);
    }

    else
        printf("\nDigite um nivel existente\n");

    return 0;
}
