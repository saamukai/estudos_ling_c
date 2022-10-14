#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd=0;
    float preco=0, total=0;

    printf("Digite quantos produtos o cliente comprou: ");
    scanf("%d", &qtd);

    for (int i=1; i<=qtd; i++)
    {
        printf("Digite o preco do produto %d: ", i);
        scanf("%f", &preco);
        total+=preco;
    }

    printf("O cliente devera pagar pela compra o total de %.2f reais\n", total);

    return 0;
}
