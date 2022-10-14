/* Dados números n e m,  escreva a todos os números entre 1 a 200 que sejam
divisíveis por n mas não por m. */

#include <stdio.h>
#include <stdlib.h> 

int main () {
    int n,m;
    int divisiveis[100];
    int pos=0;

    printf("Digite n e m (n m): ");
    scanf("%d %d", &n, &m);

    for(int i=1; i<=200; i++)
    {
        if((i%n==0) && (i%m!=0)) {
            divisiveis[pos] = i;
            pos++;
        }
    } 
    printf("Numeros diviseis por %d (n) mas nao por %d (m): [ ", n, m);
    for (int i=0; i<pos; i++) {
        printf("%d ", divisiveis[i]);
    }
    printf("]\n");

    return 0;
}