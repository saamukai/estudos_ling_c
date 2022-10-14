/* Dados três números inteiros digitados pelo usuário diga qual é o maior e o
menor entre eles. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int numeros[3];
    int menor =0, maior=0;

    for(int i=0; i<3; i++) {
        printf("Digite o %do valor: ",i+1);
        scanf("%d", &numeros[i]);
        if(i==0) {
            menor = numeros[i];
            maior = numeros[i];
        }   
        if (i>0){
            if(numeros[i]>maior)
                maior=numeros[i];
            else if (numeros[i]<menor)
                menor=numeros[i];
        }
    }

    printf("O menor valor digitado eh: %d\n", menor);
    printf("O maior elemento digitado eh: %d\n", maior);

    return 0;
}