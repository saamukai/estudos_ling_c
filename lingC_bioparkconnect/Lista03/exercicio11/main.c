#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, contador;

    for (int i=1; i<=20; i++)
    {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if(numero>0 && numero<100)
            contador++;
    }

    printf("Dentre os numeros digitados, %d estao entre 0 e 100\n", contador);

    return 0;
}
