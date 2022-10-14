/* Dado os numeros n e m (digitados pelo usuário) , escreva a tabuada de n de
1 até  m .
Ex.: n = 2 , m = 20 faz a tabuada de 2 de 1 a 20.
Restrinja a entrada de dados de maneira que caso seja digitado um valor menor
que 2 e maior que 9 seja exibida uma mensagem de aviso e não calcule a
tabuada. */

#include <stdio.h>
#include <stdlib.h>

void tabuada (int numero, int limite);

int main () { 
    int m, n;

    do {
    printf("Digite um numero n: ");
    scanf("%d", &n);

    if (n<2 || n>9)
        printf("Erro! Digite um valor entre 2 e 9");
    } while (n<2 || n>9);

    printf("Digite um numero m: ");
    scanf("%d", &m);

    tabuada(n,m);

    return 0;
}

void tabuada (int numero, int limite) {
    
    for(int i=0; i<=limite; i++){
        printf("%d x %d = %d\n", numero, i, numero*i);
    }
}