#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, contador;

    for (int i=1; i<=20; i++)
    {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if((numero%2)==0)
            contador++;
    }

    printf("Dentre os numeros digitados, %d sao pares\n", contador);

    return 0;
}
