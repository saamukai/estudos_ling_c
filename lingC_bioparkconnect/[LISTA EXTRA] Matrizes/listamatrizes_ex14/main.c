/* Fac¸a um programa que leia um vetor de 10 posic¸oes e verifique se existem valores iguais ˜
e os escreva na tela. */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet[10], iguais[10], posIguais[10], posIguais2[10];
    int contaIguais = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &vet[i]); 
    }

    printf("Vetor Digitado: [ ");
    for (int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
    printf("]\n");

    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j <= 9; j++)
        {
            if (vet[i]==vet[j])
            {
                iguais[contaIguais] = vet[i];
                posIguais[contaIguais] = i;
                posIguais2[contaIguais] = j;
                contaIguais++;
            }
            else
                continue;
        }
    }    

    printf("Existem %d valores iguais no vetor\n", contaIguais);
    for (int i = 0; i < contaIguais; i++)
    {
        printf("O numero %d na posicoes %d e %d\n", iguais[i], posIguais[i], posIguais2[i]);
    }

    return 0;
}