#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, pesoIdeal;
    char sexo;

    printf("digite sua altura: ");
    scanf("%f", &altura);
    printf("qual seu sexo?(M/F) ");
    scanf(" %c", &sexo);

    if(sexo == 'M' || sexo == 'm'){
        pesoIdeal = (72.7*altura) - 58;
        printf("%f", pesoIdeal);
    }
    else if(sexo == 'F' || sexo == 'f'){
        pesoIdeal = (62.1*altura) - 44.7;
        printf("%f", pesoIdeal);
    }



    return 0;
}
