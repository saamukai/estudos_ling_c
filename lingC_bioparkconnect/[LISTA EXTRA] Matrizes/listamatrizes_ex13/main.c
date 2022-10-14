/* Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ao onde se encon- ˜
tram o maior e o menor valor */

#include <stdio.h>
#include <stdlib.h>

int main (){
    float vet[5];
    float maior = 0, menor = 0;
    int posMaior = 0, posMenor = 0;

    for (int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%f", &vet[i]);

        if (i==0)
        {
            maior = vet[i];
            menor = vet[i];
        }

        if (vet[i] > maior)
            posMaior = i;
        if (vet[i] < menor)
            posMenor = i;
    }
    printf("A posicao do maior elemento eh %d\n", posMaior);
    printf("A posicao do menor elemento eh %d\n", posMenor);

    return 0;
}