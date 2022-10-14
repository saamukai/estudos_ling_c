/*  Suponha que criamos uma estrutura para armazenar produtos de um supermercado:
Implemente duas funções, uma que devolve o vetor ordenado por preços e outra que devolve o vetor
ordenado pela quantidade de itens no estoque. */ 

#include <stdio.h>
#include <stdlib.h>

typedef struct Produto{
    char nome[80];
    double preco;
    int quantidade;
} produto;

void leProdutos(produto vet[], int n);
void imprimeProdutos(produto vet[], int n);
void ordenaPreco(produto vet[], int n);
void ordenaQuant(produto vet[], int n);

int main () {
    int tam=5;
    produto lista[tam];

    leProdutos(lista, tam);
    printf("------------------------------------------\n");
    imprimeProdutos(lista,tam);
    printf("------------------------------------------\n");
    ordenaPreco(lista, tam);
    printf("-------- VETOR ORDENADO POR PRECO ---------\n");
    imprimeProdutos(lista,tam);
    printf("------------------------------------------\n");
    ordenaQuant(lista, tam);
    printf("-------- VETOR ORDENADO POR QUANTIDADE ---------\n");
    imprimeProdutos(lista,tam);
}

void leProdutos(produto vet[], int n){
    for(int i=0; i<n; i++){
        printf("Digite o nome do %do produto: ", i+1);
        scanf("%s", &vet[i].nome);
        printf("Digite o preco do %do produto: ", i+1);
        scanf("%lf", &vet[i].preco);
        printf("Digite a quantidade do %do produto: ", i+1);
        scanf("%d", &vet[i].quantidade);
    }
}

void imprimeProdutos(produto vet[], int n){
    for(int i=0; i<n; i++){
        printf("Nome do Produto: %s\n", vet[i].nome);
        printf("Preco do Produto: %.2lf\n", vet[i].preco);
        printf("Quantidade do Produto: %d\n\n", vet[i].quantidade);
    }
}

void ordenaPreco(produto vet[], int n){
    produto aux;

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(vet[i].preco > vet[i+1].preco){
                aux = vet[j];
                vet[j]=vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}

void ordenaQuant(produto vet[], int n) {
    produto aux;

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(vet[i].quantidade > vet[i+1].quantidade){
                aux = vet[j];
                vet[j]=vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}