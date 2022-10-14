#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao=0;

    do {
    int y=0, g=0, c=0, x=0, z=0, e=0, n=0, d=0;

    printf("Digite uma opcao:\n1. Calcular um ano de pascoa.\n2. Sair do Programa\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    do {
    printf("Digite o ano: ");
    scanf("%d", &y);
    if (y<=1582)
        printf("Digite um ano maior que 1582\n");
    } while (y<=1582);

    g=(y%19)+1;
    c=(y/100)+1;
    x=((3*c)/4)-12;
    z=((8*c+5)/25)-5;
    e=(11*g+20+z-x)%30;

    if(((e==25) && (g>11)) || (e==24));
        e++;

    n=44-e;

    if(n<21)
        n+=30;

    d=((5*y)/4)-(x+10);
    n=(n+7)-((d+n)%7);

    if(n>31)
        printf("Pascoa: %d de abril de %d\n", n-31, y);
    else
        printf("Pacoa: %d de marco de %d", n, y);

    printf("\n\n");

    } while (opcao!=2);

    return 0;
}
