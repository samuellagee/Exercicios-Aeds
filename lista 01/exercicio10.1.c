#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horasEx, faltas;
    float H;
    printf("numero de horas extras: ");
    scanf("%i", &horasEx);
    printf("numero de faltas ");
    scanf("%i", &faltas);

    H = horasEx - (2.0/3.0 * (faltas));

    if(H >= 2400){
        printf("500.00");
    }
    else if(H > 1800 && H < 2400){
        printf("400.00");
    }
    else if(H >= 1200 && H < 1800){
        printf("300.00");
    }
    else if(H >= 600 && H < 1200){
        printf("200.00");
    }
    else if(H < 600){
        printf("100.00");
    }

    return 0;
}
