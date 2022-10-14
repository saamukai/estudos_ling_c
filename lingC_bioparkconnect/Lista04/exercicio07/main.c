/* Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a
R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X.  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetR[5], vetS[5], vetX[5], contaComuns=0;

    // LER OS VETORES SIMULTANEAMENTE
    for (int i=0; i<5; i++)
    {
        printf("Digite um valor para o indice %d do vetor R: ", i);
        scanf("%d", &vetR[i]);
        printf("Digite um valor para o indice %d do vetor S: ", i);
        scanf("%d", &vetS[i]);
    }

    // PROCURA POR ELEMENTOS COMUNS E SALVA NO VETX
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (vetR[i]==vetS[j])
            {
                vetX[i]=vetR[i];
                contaComuns++;
            }
        }
    }

    // IMPRIME O VETOR X
    printf("O VETOR X de elementos COMUNS: ");

    for (int i=0; i<contaComuns; i++)
    {
        printf("%d ", vetX[i]);
    }
    printf("\n");


    return 0;
}
