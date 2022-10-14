/* Escreva uma função chamada teste que recebe um valor inteiro positivo n como parâmetro. Sua
função deve retornar um valor inteiro b tal que b^k = n para algum inteiro k, e b seja o menor possível. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int teste(int n);

int main () {

    int vlr = 0;

    printf("Digite um valor inteiro: ");
    scanf("%d", &vlr);
    printf("\nO RESULTADO EH %d\n", teste(vlr));

    return 0;
}

int teste (int n) {
    int b = 2, k = 0, res = 0;

    while (b<n) {
        for (k=1; k<n;k++)
        {
            if ((pow(b, k) == n) && b<n)
                return b;
        }
        b++;
    }
}