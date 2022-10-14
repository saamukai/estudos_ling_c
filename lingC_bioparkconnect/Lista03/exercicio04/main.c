#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100];
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Digite um nome: ");
    scanf("%s", nome);

    while (n!=0)
    {
        printf("%s\n", nome);
        n--;
    }


    return 0;
}
