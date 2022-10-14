#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade=0, pessoas=0, assistindo=0;
    int canal=0, canal3=0, canal5=0, canal8=0, canal11=0, canal13=0;
    float audienciaTotal=0;

    printf("Digite a quantidade de casas que participaram da pesquisa: ");
    scanf("%d", &quantidade);

    for(int i=1; i<=quantidade; i++)
    {
        printf("Digite quantas pessoas tem na %da casa: ", i);
        scanf("%d", &pessoas);

        while (pessoas!=0)
        {
        printf("Digite o canal e quantas pessoas estavam assistindo:\n");
        printf("Exemplo: Canal 5 e 3 pessoas, digite: 5 3\n");
        printf("Digite: ");
        scanf("%d %d", &canal, &assistindo);

            switch (canal)
            {
                case 3:
                {
                    canal3+=assistindo;
                    pessoas-=assistindo;
                    break;
                }

                case 5:
                {
                    canal5+=assistindo;
                    pessoas-=assistindo;
                    break;
                }

                case 8:
                {
                    canal8+=assistindo;
                    pessoas-=assistindo;
                    break;
                }

                case 11:
                {
                    canal11+=assistindo;
                    pessoas-=assistindo;
                    break;
                }

                case 13:
                {
                    canal13+=assistindo;
                    pessoas-=assistindo;
                    break;
                }

                default:
                    printf("Digite um canal valido\n");
            }
        }
    }

    audienciaTotal=canal3+canal5+canal8+canal11+canal13;

    printf("\nTaxas de Audiencias:\n");
    printf("Canal 3 %.2f%%\n",  ((float)canal3/audienciaTotal)*100);
    printf("Canal 5 %.2f%%\n",  ((float)canal5/audienciaTotal)*100);
    printf("Canal 8 %.2f%%\n",  ((float)canal8/audienciaTotal)*100);
    printf("Canal 11 %.2f%%\n", ((float)canal11/audienciaTotal)*100);
    printf("Canal 13 %.2f%%\n", ((float)canal13/audienciaTotal)*100);


    return 0;
}
