#include <stdio.h>
#include <stdlib.h>


void tabuada (int n)
{
    int resultado=0;

    for (int i=0; i<=10; i++)
    {
        resultado=n*i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
}


int main()
{
    int numero=0, opcao=0;

    do {
    printf("Digite o numero para que deseja calcular a tabuada: ");
    scanf("%d", &numero);
    tabuada(numero);
    printf("\nEscolha uma opcao: ");
    printf("\n1. Calcular outro numero\n2. Sair do programa");
    printf("\nEscolha: ");
    scanf("%d", &opcao);
    } while (opcao!=2);

    return 0;
}
