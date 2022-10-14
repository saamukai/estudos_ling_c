#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcao;
    int tamanho;

    printf("\n");
    printf("Escolha o desenho que deseja imprimir na tela: ");
    printf("\na. Diagonal Esquerda\nb. Diagonal Esquerda Subindo\nc. Diagonal Direita Descendo\nd. Diagonal Direita");
    printf("\ne. Quadrado\nf. Letra Z\ng. Letra Z Invertida\nh. Letra X\ni. Quadrado com Diagonais\nj. Sair do Programa\n");

    do {
    printf("\nDigite a opcao desejada: ");
    scanf("%c", &opcao);

    switch (opcao)
    {
        case 'a':
        {
            printf("Voce escolheu opcao a: Diagonal Esquerda\n");
            printf("Digite o tamanho (maior que 1): ");
            scanf("%d", &tamanho);

            for(int i=0; i<tamanho; i++)
            {
                    for(int j=0; j<=i; j++)
                    {
                        printf("# ");
                    }
                printf("\n");
            }

            break;
        }

        case 'B':
        {
            printf("\nVoce escolheu opcao b: Diagonal Esquerda Subindo\n");
            printf("Digite o tamanho (maior que 1): ");
            scanf("%d", &tamanho);
            printf("\n");

            for(int i=0; i<tamanho; i++)
            {
                    for(int j=0; j<tamanho-i; j++)
                    {
                        printf("# ");
                    }
                printf("\n");
            }

            break;
        }

        case 'c':
        {
            printf("\nVoce escolheu opcao c: Diagonal Direita Descendo\n");
            printf("Digite o tamanho (maior que 1): ");
            scanf("%d", &tamanho);
            printf("\n");

            for(int i=0; i<tamanho; i++)
            {
                if (i>=1)
                    for(int j=1; j<i; j++)
                    {
                        printf("  ");
                    }

                for(int k=0; k<tamanho-i; k++)
                {
                    printf("# ");
                }
                printf("\n");
            }

            break;
        }

        case 'd':
        {
            printf("\nVoce escolheu opcao d: Diagonal Direita Subindo\n");
            printf("Digite o tamanho (maior que 1): ");
            scanf("%d", &tamanho);
            printf("\n");

            for(int i=0; i<tamanho; i++)
            {
                for(int k=1; k<tamanho-i; k++)
                {
                    printf("  ");
                }


                for(int j=0; j<=i; j++)
                {
                    printf("# ");
                }
                printf("\n");
            }

            break;
        }

        case 'e':
        {
            printf("Voce escolheu a opcao: e. Quadrado\n");
            printf("Digite o tamanho (maior que 1): ");
            scanf("%d", &tamanho);
            printf("\n");

            for (int i=0; i<tamanho; i++)
                printf("# ");

            printf("\n");

            for (int j=0; j<tamanho-2; j++)
            {
                printf("# ");
                for (int k=0; k<tamanho-2; k++)
                {
                    printf("  ");
                }
                printf("# ");
                printf("\n");
            }

            for (int l=0; l<tamanho; l++)
                printf("# ");

            printf("\n");

            break;
        }

        case 'f':
        {
            printf("\nVoce escolheu a opcao: f. Letra Z\n");
            printf("Digite o tamanho (maior que 1): ");
            scanf("%d", &tamanho);
            printf("\n");

            for (int i=0; i<tamanho; i++)
                printf("# ");

            printf("\n");

            for (int j=0; j<tamanho-2; j++)
            {
                    for(int k=2; k<tamanho-j; k++)
                    {
                        printf("  ");
                    }
                printf("#");
                printf("\n");
            }

            for (int i=0; i<tamanho; i++)
                printf("# ");

            printf("\n");

            break;
        }


        case 'g':
        {
            printf("\nVoce escolheu a opcao: g. Letra Z Invertida\n");
            printf("Digite o tamanho (maior que 1): ");
            scanf("%d", &tamanho);
            printf("\n");

            for (int i=0; i<tamanho; i++)
                printf("# ");

            printf("\n");

            for (int j=0; j<tamanho-2; j++)
            {
                    for(int k=0; k<=j; k++)
                    {
                        printf("  ");
                    }
                printf("#");
                printf("\n");
            }

            for (int i=0; i<tamanho; i++)
                printf("# ");

            printf("\n");

            break;
        }

        case 'h':
        {
            printf("\nVoce escolheu a opcao: h. Letra X\n");
            printf("Digite o tamanho (maior que 1): ");
            scanf("%d", &tamanho);
            printf("\n");

            for (int i=0; i<tamanho; i++)
            {
                for (int j=0; j<tamanho; j++)
                {
                    if(i==0)
                        printf("# ");
                    else if(i==tamanho-1)
                        printf("# ");
                    else if(i+j==tamanho-1 || i==j)
                        printf("# ");
                    else
                        printf("  ");
                }
                printf("\n");
            }

            break;
        }

        case 'i':
        {
            printf("\nVoce escolheu a opcao: i. Quadrado com Diagonais\n");
            printf("Digite o tamanho (maior que 1): ");
            scanf("%d", &tamanho);
            printf("\n");

            for (int i=0; i<tamanho; i++)
            {

                for (int j=0; j<tamanho; j++)
                {
                    if(i==0 || i==tamanho-1)
                        printf("# ");
                    else if(j==0)
                        printf("# ");
                    else if(j==tamanho-1)
                        printf("# ");
                    else if(i+j==tamanho-1 || i==j)
                        printf("# ");
                    else
                        printf("  ");
                }
                printf("\n");
            }

            break;
        }

        case 'j':
        {
            printf("\nVoce escolheu sair do programa!\n");
            break;
        }

        default:
        {
            printf("\nDigite uma opcao valida\n");
            break;
        }
    }
    } while (opcao!='j');

    return 0;
}
