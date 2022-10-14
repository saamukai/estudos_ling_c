#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0, fatorial=1;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero!=0)
    {
        fatorial*=numero;
        numero--;
    }

    printf("O Fatorial do numero digitado eh: %d\n", fatorial);

    return 0;
}
