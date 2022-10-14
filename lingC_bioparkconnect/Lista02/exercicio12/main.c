#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;

    printf("Digite tres valores (X Y Z): ");
    scanf("%f %f %f", &x, &y, &z);

    if ((y+z>x) && (x+z>y) && (x+y>z))
    {
        if ((x==y)&&(x==z))
            printf("O triangulo eh equilatero\n");
        else if ((x!=y)&&(x!=z)&&(z!=y))
            printf("O triangulo eh escaleno\n");
        else
            printf("O triangulo eh isosceles\n");
    }
    else
        printf("O valores informados nao formam um triangulo\n");

    return 0;
}
