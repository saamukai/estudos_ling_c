/* Suponha que criamos uma estrutura para armazenar Datas:
Implemente um algoritmo que receba um vetor de Datas como parâmetro e que retorne as datas em
ordem cronológica (crie uma função com cabeçalho: void ordena(struct Data vet[], int tam).
Dica: Ordene o vetor separadamente por cada um dos campos. */

typedef struct Data{
    int dia;
    int mes;
    int ano;
} data;

void ordena(data vet[], int tam)

#include <stdio.h>
#include <stdlib.h>

int main () {
    int tamanho=3;
    data calendario[tamanho];

    for(int i=0; i<tamanho; i++){
        printf("Digite o dia: ");
        scanf("%d", &calendario[i].dia);
        printf("Digite o mes: ");
        scanf("%d", &calendario[i].mes);
        printf("Digite o ano: ");
        scanf("%d", &calendario[i].ano);
    }

    printf("Datas Digitadas: ");
    for(int i=0; i<tamanho; i++){
        printf("%d / %d / %d\n", calendario[i].dia, calendario[i].mes, calendario[i].ano);
    }
    printf("\n");
    ordena(calendario, tamanho);

    printf("Datas Ordenadas: ");
    for(int i=0; i<tamanho; i++){
        printf("%d / %d / %d\n", calendario[i].dia, calendario[i].mes, calendario[i].ano);
    }
    
    return 0;
}

void ordena(data vet[], int tam){
    data aux;

    for(int i=0; i<tam-1; i++){
        for(int j=0; j<tam-1; j++){
            if(vet[i].dia>vet[i+1].dia){
                aux.dia = vet[j].dia;
                vet[j].dia = vet[j+1].dia;
                vet[j+1].dia = aux.dia;
            }
            if(vet[i].mes>vet[i+1].mes){
                aux.mes = vet[j].mes;
                vet[j].mes = vet[j+1].mes;
                vet[j+1].mes = aux.mes;
            }
            if(vet[i].ano>vet[i+1].ano){
                aux.ano = vet[j].ano;
                vet[j].ano = vet[j+1].ano;
                vet[j+1].ano = aux.ano;
            }
        }
    }
}