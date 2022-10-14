#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if ((numero%2)==0)
    {
        printf("O numero digitado eh par\n");
        printf("O numero %d + 5 = %d\n", numero, numero+5);
    }
    else
    {
        printf("O numero informado eh impar\n");
        printf("O numero %d + 8 = %d\n", numero, numero+8);
    }

    return 0;
}
