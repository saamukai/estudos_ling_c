#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero>=0)
        printf("O numero e positivo, portanto o seu dobro eh: %.2f\n", numero*2);
    else
        printf("O numero eh negativo, portanto o seu triplo eh: %.2f\n", numero*3);

    return 0;
}
