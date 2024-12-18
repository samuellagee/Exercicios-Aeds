#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846

int main()
{
    float raio, perimetro, area;
    //printf("digite o raio: ");
    scanf("%f", &raio);

    perimetro = 2*PI*raio;
    area = PI*raio*raio;

    printf("%.2f\n", perimetro);
    printf("%.2f\n", area);

    return 0;
}
