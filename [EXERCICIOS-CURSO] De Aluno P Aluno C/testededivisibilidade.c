#include <stdio.h>

int main ()
{
    int num1, num2, resultado;

    printf("\n\n\t TESTE DE DIVISIBILIDADE");
    printf("\nDigite o primeiro numero: ");
    scanf("%i", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%i", &num2);

    if (num2==0)
        printf("Nao eh possivel dividir um numero por zero, digite outro numero");
    else if (num1%num2==0)
        printf("O primeiro numero %i eh divisivel pelo segundo numero %i.", num1, num2);
    else if (num1%num2!=0)
        printf("O primeiro numero %i nao eh divisivel pelo segundo numero %i. e nao da\numa divisao inteira", num1, num2);
        printf("\n\n\n\n\n\n\t\tFIM\n\n\n");
    return 0;
}
