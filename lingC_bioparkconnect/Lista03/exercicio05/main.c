#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma, numero;

    for (int i=1; i<=10; i++)
    {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);
        soma+=numero;
    }

    printf("A soma dos numeros digitados eh: %d\n", soma);

    return 0;
}
