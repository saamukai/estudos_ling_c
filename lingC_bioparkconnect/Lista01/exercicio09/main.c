/** Uma f?brica de camisetas produz os tamanhos pequeno, m?dio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais.
Construa um algoritmo em que o usu?rio forne?a a quantidade de camisetas pequenas, m?dias e grandes referentes a uma venda,
e a m?quina informe quanto ser? o valor arrecadado. **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pequena=0, media=0, grande=0;

    printf("\nDigite a quantidade de camisas pequenas vendidas: ");
    scanf("%d", &pequena);
    printf("\nDigite a quantidade de camisas medias vendidas: ");
    scanf("%d", &media);
    printf("\nDigite a quantidade de camisas grandes vendidas: ");
    scanf("%d", &grande);

    int total = (pequena*10)+(media*12)+(grande*15);
    printf("\nO valor arrecado com as vendas eh de %d reais\n", total);

    return 0;
}
