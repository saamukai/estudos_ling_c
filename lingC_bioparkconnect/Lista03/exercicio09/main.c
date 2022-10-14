#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, contador;

    for (int i=1; i<=20; i++)
    {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if(numero>8)
            contador++;
    }

    printf("Dentre os numeros digitados, %d sao maiores que oito\n", contador);

    return 0;
}
