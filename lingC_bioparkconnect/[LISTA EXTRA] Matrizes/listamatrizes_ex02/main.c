/* Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[6];

    for (int i=0; i<6; i++)
    {
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("Os valores lidos foram: ");
    for (int i=0; i<6; i++)
    {
        if(i==5)
        {
            printf("%d.\n", vet[i]);
            break;
        }
        printf("%d, ", vet[i]);
    }


    return 0;
}
