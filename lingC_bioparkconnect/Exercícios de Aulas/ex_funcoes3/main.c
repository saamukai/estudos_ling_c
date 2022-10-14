/* Cria uma funcao que ler o vetor, uma funcao outra que imprima o vetor, outra que zere o vetor e outras que retorne o maior elemento, o menor elemento
e a media dos elementos do vetor */

#include <stdio.h>
#include <stdlib.h>

void leVetor (int vet[], int n)
{

    for (int i=0; i<n; i++) // LER O VETOR
    {
        printf("Digite o %do elemento do vetor: ", i+1);
        scanf("%d", &vet[i]);
    }

}

void imprimeVetor (int vet[], int n)
{

    printf("VETOR: [ ");
    for (int i=0; i<n; i++) // IMPRIME O VETOR
    {
        printf("%d ", vet[i]);
    }
    printf("]\n");

}

void zeraVetor (int vet[], int n)
{
    printf("ZERADO ");
    for (int i=0;i<n; i++)
    {
        vet[i]=0;
    }
}

int maiorElemento (int vet[], int n)
{
    int maior=0;

    for (int i=0; i<n; i++)
    {
        if(vet[i]>maior)
            maior=vet[i];
    }

    return maior;
}

int menorElemento (int vet[], int n)
{
    int menor=vet[0];

    for (int i=0; i<n; i++)
    {
        if(vet[i]<menor)
            menor=vet[i];
    }

    return menor;
}

double mediaElementos (int vet[], int n)
{
    int soma=0;
    double media=0;

    for (int i=0; i<n; i++)
    {
        soma+=vet[i];
    }

    media=(float)soma/n;

    return media;
}


int main()
{
    int tam=0;

    printf("Digite a quantidade de elementos que tera o vetor: "); // LER TAMANHO DO VETOR
    scanf("%d", &tam);

    int vetor[tam];

    leVetor(vetor,tam);

    printf("\n");

    imprimeVetor(vetor,tam);

    printf("O MAIOR ELEMENTO EH: %d\n", maiorElemento(vetor,tam));
    printf("O MENOR ELEMENTO EH: %d\n", menorElemento(vetor,tam));
    printf("A MEDIA DOS ELEMENTOS EH: %.2lf\n", mediaElementos(vetor,tam));

    zeraVetor(vetor,tam);

    imprimeVetor(vetor,tam);



    return 0;
}
