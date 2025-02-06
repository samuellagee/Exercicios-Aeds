#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, reajuste;

    printf("Qual seu salario? ");
    scanf("%f", &salario);

    if(salario < 500){
        reajuste = salario*0.3 + salario;
        printf("%f", reajuste);
    }
    else{
        printf("Sem reajuste");
    }

    return 0;
}
