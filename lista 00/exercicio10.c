#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, minutos, mintotal;
    //printf("horas e minutos: ");
    scanf("%i %i", &horas, &minutos);

    mintotal = horas*60 + minutos;

    printf("%i", mintotal);

    return 0;
}
