#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if ((numero%2)==0)
        printf("O numero digitado eh par");
    else
        printf("O numero informado eh impar");

    return 0;
}
