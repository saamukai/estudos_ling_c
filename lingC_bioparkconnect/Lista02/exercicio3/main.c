#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numA, numB;
    printf("Digite dois numeros separados por espaço (A B): ");
    scanf("%d %d", &numA, &numB);

    if (numA==numB)
        printf("Os numeros sao iguais, portanto, A+B= %d\n", numA+numB);
    else
        printf("Os numeros sao diferentes, portanto, A*B= %d\n", numA*numB);

    return 0;
}
