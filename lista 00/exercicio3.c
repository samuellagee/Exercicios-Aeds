#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float base, altura, perimetro, area, diagonal;

    //printf("digite a base e altura: ");
    scanf("%f %f", &base, &altura);


    perimetro = (base*2) + (altura*2);
    area = base * altura;
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("%.2f\n", perimetro);
    printf("%.2f\n", area);
    printf("%.2f\n", diagonal);



    return 0;
}
