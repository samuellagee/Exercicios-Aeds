#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerador, denominador;
    float numdecimal;
    //printf("numerador e denominador: ");
    scanf("%i %i", &numerador, &denominador);

    numdecimal = (float)numerador/denominador;

    printf("%.2f", numdecimal);

    return 0;
}
