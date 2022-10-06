/*   Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array.  */

#include <stdio.h>
#include <stdlib.h>

int main () {
    float vet[10];
    float *p = vet;


    for (int i = 0; i<10; i++){
        printf("%d\n", &p[i]);
    }

        return 0; 
}