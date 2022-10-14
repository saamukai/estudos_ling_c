#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, novoPreco;
    char opcao;

    printf("\nEscolha a forma de pagamento, digite A, B, C ou D\n");
    printf("\na) A vista em dinheiro ou cheque, recebe 10%% de desconto");
    printf("\nb) A vista no cartao de credito, recebe 15%% de desconto");
    printf("\nc) Em duas vezes, preco normal de etiqueta sem juros");
    printf("\nd) Em duas vezes, preco normal de etiqueta mais juros de 10%%");
    printf("\nEscolha: ");
    scanf("%c", &opcao);
    printf("\nDigite o preco do produto: ");
    scanf("%f", &preco);

    if ((opcao=='a') || (opcao=='A'))
    {
        novoPreco=preco-(preco*0.1);
        printf("\nO preco do produto sera de %.2f reais a ser pago a vista em dinheiro\n", novoPreco);
    }
    else if ((opcao=='b') || (opcao=='B'))
    {
        novoPreco=preco-(preco*0.15);
        printf("\nO preco do produto sera de %.2f reais a ser pago a vista no cartao\n", novoPreco);
    }
    else if ((opcao=='c') || (opcao=='C'))
    {
        novoPreco=preco/2;
        printf("\nO preco do produto sera de %.2f reais a ser pago em duas vezes\n", novoPreco);
    }
    else if ((opcao=='d') || (opcao=='D'))
    {
        preco += (preco*0.1);
        printf("O valor do produto com 10%% de juros eh %.2f reais", preco);
        novoPreco=preco/2;
        printf("\nO preco do produto sera de %.2f reais a ser pago em duas vezes\n", novoPreco);
    }
    else
    {
        printf("\nDigite uma opcao valida\n");
    }

    return 0;
}
