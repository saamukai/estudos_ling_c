#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero=0, soma=0;

    do {
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if(numero<0)
    {
        printf("Voce digitou um numero negativo\nO programa sera encerrado\n");
        break;
    }
    soma+=numero;
    printf("A soma dos numeros digitado eh %.2f\n\n", soma);

    } while (numero>0);

    return 0;
}
