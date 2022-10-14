#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0, contador=0, contador2=0, contador3=0;

    for (int i=1; i<=20; i++)
    {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if((numero>0) && (numero<100))
        {
            contador++;
        }
        else if((numero>101) && (numero<200))
        {
            contador2++;
        }
        else if (numero>200)
            contador3++;
    }

    printf("Dentre os numeros digitados, %d estao entre 0 e 100\n", contador);
    printf("Dentre os numeros digitados, %d estao entre 101 e 200\n", contador2);
    printf("Dentre os numeros digitados, %d estao maiores que 200\n", contador3);

    return 0;
}
