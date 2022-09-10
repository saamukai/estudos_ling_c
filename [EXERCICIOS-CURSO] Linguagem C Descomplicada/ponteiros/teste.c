#include <stdio.h>
#include <stdlib.h>

int main () {
    int x = 10;
    int *p = &x;

    p = &x;

    printf("%d", p);
}