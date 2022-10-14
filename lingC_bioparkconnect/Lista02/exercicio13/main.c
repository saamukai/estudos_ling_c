#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, notas100, notas50, notas10, notas5, notas1;
    printf("Digite o valor: ");
    scanf("%d", &valor);

    notas100=valor/100;
    valor-=(valor/100)*100;

    notas50=valor/50;
    valor-=(valor/50)*50;

    notas10=valor/10;
    valor-=(valor/10)*10;

    notas5=valor/5;
    valor-=(valor/5)*5;

    notas1=valor;

    printf("O valor digitado pode ser encontrado com os menores numeros de notas de\n");
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 1: %d\n", notas1);

    return 0;
}
