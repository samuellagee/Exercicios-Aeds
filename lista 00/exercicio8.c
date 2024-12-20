#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, backup;
    //printf("digite numeros: ");
    scanf("%f %f", &a, &b);

    backup = a;
    a = b;
    b = backup;

    printf("%.2f %.2f", a, b);



    return 0;
}
