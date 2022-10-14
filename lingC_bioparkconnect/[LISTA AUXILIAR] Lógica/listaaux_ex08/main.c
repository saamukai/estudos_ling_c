/* . Escreva uma função chamada teste que recebe um valor inteiro n (positivo ou negativo) como parâmetro. Sua função deve imprimir todos os valores a e b (inclusive negativos) tais que a ∗ b = n. */

#include <stdio.h>
#include <stdlib.h>

int teste(int n);

int main () {

    int vlr = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &vlr);
    teste(vlr);

    return 0;
}

int teste (int n) {

    for (int i=-n; i<=n;i++)
    {
        for (int j = -n; j <= n; j++)
        {
            if(i*j==n)
            {   
                printf("%d x %d = %d\n", i, j, n);
            }
        }
    }
}

