#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numA, numB, diferenca;

    printf("Digite dois numeros inteiros separados por espaco (A B): ");
    scanf("%d %d", &numA, &numB);

    if (numA>numB)
    {
        diferenca=numA-numB;
        printf("A diferenca do maior numero pelo menor eh: %d", diferenca);
    }

    else if(numA<numB)
    {
        diferenca=numB-numA;
        printf("A diferenca do maior numero pelo menor eh: %d", diferenca);
    }

    else
    {
        diferenca=numA-numB;
        printf("Os numeros sao iguais. A diferenca eh: %d", diferenca);
    }

    return 0;
}
