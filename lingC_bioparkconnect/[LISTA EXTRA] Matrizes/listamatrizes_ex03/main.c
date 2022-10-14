/* Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais[10], quadrado[10];

    for (int i = 0; i < 10; i++){
        printf("Digite o %do numero real: ", i + 1);
        scanf("%f", &reais[i]);

        quadrado[i] = reais[i] * reais[i];
    }

    printf("Vetor Digitado: [ ");
    for (int i = 0; i < 10; i++)
    {
        if (i < 9)
            printf("%.2f, ", reais[i]);
        else
            printf("%.2f ", reais[i]);
    }
    printf("]\n");

    printf("Vetor dos Quadrados: [ ");
    for (int i = 0; i < 10; i++)
    {
        if (i < 9)
            printf("%.2f, ", quadrado[i]);
        else
            printf("%.2f ", quadrado[i]);
    }
    printf("]\n");

    return 0;
}
