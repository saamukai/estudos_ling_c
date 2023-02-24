/* Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec¸o de cada posic¸ao dessa matriz.  */

#include <stdio.h>
#include <stdlib.h>

int main () {
    float mat[3][3];
    float *p;
    float *p2;

    for (int i = 0; i < 3; i++){
        p = mat[i];
        printf("Linha %d: %d ~> ", i, p);
        for (int j = 0; j < 3; j++){
            p2 = &mat[i][j];
            printf("Coluna %d: %d / ", j, p2);
        }
        printf("\n");
    }

    return 0;
}