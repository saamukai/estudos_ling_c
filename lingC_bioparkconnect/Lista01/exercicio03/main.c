/* A padaria Hotp?o vende uma certa quantidade de p?es franceses e uma quantidade de broas a cada dia.
Cada p?ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
com a venda dos p?es e broas (juntos), e quanto deve guardar numa conta de poupan?a (10% do total arrecadado).
Voc? foi contratado para fazer os c?lculos para o dono. Com base nestes fatos, fa?a um algoritmo
para ler as quantidades de p?es e de broas, e depois calcular os dados solicitados. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorPaes=0.12, valorBroas=1.50;
    int paes=0, broas=0;

    printf("Digite a quantidade de paes vendidos no dia: ");
    scanf("%d", &paes);
    printf("\nDigite a quantidade de broas vendidas no dia: ");
    scanf("%d", &broas);
    printf("\nHoje voce arrecadou um total de %.2f reais com a venda dos paes", (float)paes*valorPaes);
    printf("\nHoje voce arrecadou um total de %.2f reais com a venda das broas", (float)broas*valorBroas);

    float totalDia = (((float)paes*valorPaes)+((float)broas*valorBroas));

    printf("\n\nO total arrecadado (vende de broas e paes) no dia foi de %.2f reais", totalDia);
    printf("\n\nVoce deve guardar %.3f reais na sua poupanca\n\n", (totalDia*0.1));

    return 0;
}
