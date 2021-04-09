#include <stdio.h>

int main (int argc, char *argv[])
{
    int a,b;
    float c,d;
    long int e;

	printf("Informe 5 numeros ");
    scanf("%d %d %f %f %ld", &a,&b,&c,&d,&e);

    printf("%f %d %f %d %d", c,e,d,a,b);
}