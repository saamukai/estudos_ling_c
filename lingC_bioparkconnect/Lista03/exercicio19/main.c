#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura=0, maiorAltura=0;
    float menorAltura=200;

    for (int i=1; i<=15; i++)
    {
        printf("Digite a altura da %d pessoa (em metros): ", i);
        scanf("%f", &altura);

        if(altura<menorAltura)
        {
            menorAltura=altura;
        }
        else if (altura>maiorAltura)
        {
            maiorAltura=altura;
        }
    }

    printf("A maior altura eh: %.2f metros\n", maiorAltura);
    printf("A menor altura eh: %.2f metros\n", menorAltura);

    return 0;
}
