#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    printf("Digite dois numperos separados por espaço (12 13): ");
    scanf("%f %f", &num1, &num2);

    if (num1>num2)
        printf("O primeiro numero digitado: %.2f eh maior que o segundo %f", num1,num2);
    else if (num1<num2)
        printf("O primeiro numero digitado: %.2f eh menor que o segundo %f", num1,num2);
    else
        printf("Os dois numeros sao iguais");

    return 0;
}
