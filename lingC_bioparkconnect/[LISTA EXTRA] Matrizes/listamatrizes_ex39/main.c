/* Escreva um programa que leia um numero inteiro positivo ´ n e em seguida imprima n
linhas do chamado Triangulo de Pascal: */

#include <stdio.h>
#include <stdlib.h>

int main () {   
    int num=0;
    printf("Digite um numero n: ");
    scanf("%d", &num);

    int matriz[num][num];

    // zera matriz
    for (int i=0; i<num; i++) {
        for (int j=0; j<num; j++) {
            matriz[i][j]=0;
        }
    }

    // coloca 1 no começo de cada linha
    for (int i=0; i<num; i++){
        matriz[i][0]= 1;
    }

    // coloca 1 no 'final' de cada linha
    for (int i=0; i<num; i++){
        matriz[i][i]=1;
    }

    // calcula os outros elementos
    for(int i=2; i<num; i++) {
        for(int j=1; j<num-1; j++)
        {
            matriz[i][j] = matriz[i-1][j] + matriz[i-1][j-1];
        }
    }

    // imprime a matriz
    for (int i=0; i<num; i++) {
        for (int j=0; j<num; j++) {
            if (matriz[i][j]!=0)
                printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}