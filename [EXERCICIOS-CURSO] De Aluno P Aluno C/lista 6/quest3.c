#include <stdio.h>
int main()
{
    char nome[20];
    int tamanho=0;

    printf("\nEscreva um nome: ");
    gets(nome); // scanf("%s", &nome);
    printf("A palavra digita foi: %s", nome);
    tamanho = sizeof(nome)/sizeof(nome);
    printf("\nO tamanho da palavra %s eh: %i", nome, tamanho);

    return 0;
}
