#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, soma, media;

    for (int i=1; i<=20; i++)
    {
        printf("Digite a %d idade: ",i);
        scanf("%d", &idade);
        soma+=idade;
    }

    media=soma/20;
    printf("A media das idades informadas eh: %d\n", media);

    return 0;
}
