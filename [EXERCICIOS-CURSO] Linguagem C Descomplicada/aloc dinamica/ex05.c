/* Fac¸a um programa que leia um numero N e: ´
• Crie dinamicamente e leia um vetor de inteiro de N posic¸oes; ˜
• Leia um numero inteiro X e conte e mostre os m ´ ultiplos desse n ´ umero que existem ´
no vetor. */ 

#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, x;
    printf("Digite um numero N: ");
    scanf("%d", &n);

    int *v = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        printf("Digite o %do numero do vetor: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("Digite um numero X: ");
    scanf("%d", &x);

    printf("Multiplos de X: ");
    for (int i = 0; i < n; i++){
        if(v[i]%x==0)
            printf("%d | ", v[i]);
    }

    return 0;
}