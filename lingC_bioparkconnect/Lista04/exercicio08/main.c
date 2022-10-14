/* Ler um vetor R de 5 elementos contendo o gabarito da LOTO.
A seguir ler um vetor A de 10 elementos contendo uma aposta. A seguir imprima quantos pontos fez o apostador. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gabarito[5], aposta[10], pontosFeitos[5], contaPontos=0;

    // LER O VET GABARITO
    for (int i=0; i<5; i++)
    {
        printf("Digite o %do valor do gabarito: ", i+1);
        scanf("%d", &gabarito[i]);
    }
    printf("\n");

    // LER O VET APOSTA
    for (int i=0; i<10; i++)
    {
        printf("Digite o %do numero para apostar: ", i+1);
        scanf("%d", &aposta[i]);
    }

    // PROCURA POR ELEMENTOS COMUNS E SALVA NO PONTOS FEITOS
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (aposta[i]==gabarito[j])
            {
                pontosFeitos[i]=aposta[i];
                contaPontos++;
            }
        }
    }

    // IMPRIME O VETOR X
    printf("O APOSTADOR FEZ %d PONTOS\n", contaPontos);

    return 0;
}
