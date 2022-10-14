#include <stdio.h>
#include <stdlib.h>


void tabuada (int n)
{
    int resultado=0;

    for (int i=0; i<=10; i++)
    {
        resultado=n*i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
    printf("\n");

}

void todas ()
{
    for (int j=1; j<=10; j++)
    {
        tabuada(j);
    }
}


int main()
{
    todas();
    return 0;
}
