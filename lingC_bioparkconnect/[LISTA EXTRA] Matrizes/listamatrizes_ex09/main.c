/*  Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores ˆ
lidos na ordem inversa. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int vetPar[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o %do elemento: ", i+1);
        scanf("%d", &vetPar[i]);
        if (vetPar[i]%2 != 0){
            printf("Digite um numero par\n");
            i--;
        }
    }

    printf("Vetor Invertido: [ ");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d ", vetPar[i]);
    }
    printf("]");

    return 0;
}