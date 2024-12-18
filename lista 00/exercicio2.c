#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, umkw, kwusados, valnormal, valdesconto;

    //printf("valor do salario e kw: ");
    scanf("%f %f", &salario, &kwusados);

    umkw = (salario/7)/100;


    valnormal = umkw * kwusados;
    valdesconto = valnormal * 0.9;

    printf("%.2f\n", umkw);
    printf("%.2f\n", valnormal);
    printf("%.2f\n", valdesconto);


    return 0;
}
