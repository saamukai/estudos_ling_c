/** . Calcule a área de uma pizza que possui um raio R (pi=3.14) A = pi x r^2**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio=0;

    printf("Digite o raio da pizza (em cm): ");
    scanf("%f", &raio);

    float area = (3.14 * (pow(raio,2)));

    printf("O raio da pizza eh %.2f centimetros quadrados\n", area);

    return 0;
}
