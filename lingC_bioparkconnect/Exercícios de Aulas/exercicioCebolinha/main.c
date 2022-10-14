/* Cebolinha é um personagem de história em quadrinhos que quando falava, trocava o "r" pelo "l" (problema conhecido como dislalia).

Faça um programa que gera uma versão de um texto fornecido com todos "r" e "rr" trocados por "l", 
exceto no caso em que o "r" ocorre no final de uma palavra. . */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char frase[150];

    printf("Digite a frase: ");
    gets(frase);
    fflush(stdin);

    int tamFrase = strlen(frase)-1;

    for (int i = 0; i < tamFrase; i++) {
        if ((frase[i] == 'r') && (frase[i + 1]=='r')) {
            frase[i] = 'l';
            for (int j = i; j<tamFrase; j++) {
                frase[j+1] = frase[j + 2];
            }
        }

        else if ((frase[i]=='r' && frase[i+1]=='l') || (frase[i]=='r' && frase[i+1]=='t'))
            frase[i] = 'u';

        else if (frase[i]=='r' && frase[i+1]==' ')
            continue;

        else if (frase[i] == 'r' && (frase[i+1] >= 'a' && frase[i+1] <= 'z')){
            frase[i] = 'l';
        }
    }

    for (int i = 0; i <= tamFrase; i++) {
        printf("%c", frase[i]);
    }

    return 0;
}