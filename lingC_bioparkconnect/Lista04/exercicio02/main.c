/* Crie um programa que leia um vetor de 20 posi??es e informe:
a) Quantos n?meros pares existem no vetor
b) Quantos n?meros ?mpares existem no vetor
c) Quantos n?meros maiores do que 50
d) Quantos n?meros menores do que 7 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20];

        // Ler vetor
    for(int i=0; i<20; i++)
    {
        printf("Digite o valor do vetor 1 no indice %d: ", i);
        scanf("%d", &vetor[i]);
    }

        // Imprime numeros pares
    printf("Numeros pares no vetor: ");
    for (int i=0; i<20; i++)
    {
        if((vetor[i]%2)==0)
            printf("%d ", vetor[i]);
    }

        // Imprime numeros impares
    printf("\nNumeros impares no vetor: ");
    for (int i=0; i<20; i++)
    {
        if((vetor[i]%2)!=0)
            printf("%d ", vetor[i]);
    }

        // Imprime numeros maiores que 50
    printf("\nNumeros maiores que 50 no vetor: ");
    for (int i=0; i<20; i++)
    {
        if(vetor[i]>50)
            printf("%d ", vetor[i]);
    }

        // Imprime numeros menores do que 7
    printf("\nNumeros menores do que 7 no vetor: ");
    for (int i=0; i<20; i++)
    {
        if(vetor[i]<7)
            printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
