#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, resultado;

    printf("Digite o primeiro (menor) numero do intervalo: ");
    scanf("%d", &num1);
    printf("Digite o segundo (maior) numero do intervalo: ");
    scanf("%d", &num2);

    for (;num1<=num2; num1++)
    {
        resultado+=num1;
    }

    printf("O resultado eh: %d", resultado);

    return 0;
}
