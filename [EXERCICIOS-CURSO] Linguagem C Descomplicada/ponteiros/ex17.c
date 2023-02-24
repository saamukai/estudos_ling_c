/* Escreva uma func¸ao que dado um n ˜ umero real passado como par ´ ametro, retorne a parte ˆ
inteira e a parte fracionaria deste n ´ umero. Escreva um programa que chama esta func¸ ´ ao. ˜
Prototipo: ´
void frac(float num, int* inteiro, float* frac); */

#include <stdio.h>
#include <stdlib.h>

void frac(float num, int* inteiro, float* frac);

int main () {
    float numero = 2.50;
    int partInt=0;
    float partFrac=0;
    
    frac(numero, &partInt, &partFrac);
    printf("Parte inteira: %d\n", partInt);
    printf("Parte fracionaria: %f\n", partFrac);

    return 0;
}

void frac(float num, int *inteiro, float *frac){
    *inteiro = (int)num;
    *frac = num - *inteiro;
}