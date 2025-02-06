#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, valorMais;
    char investimento;

    printf("qual valor? ");
    scanf("%f", &valor);
    printf("qual investimento?(P/F) ");
    scanf(" %c", &investimento);

    if(investimento == 'P' || investimento == 'p'){
        valorMais = valor*0.03 + valor;
        printf("%f", valorMais);
    }
    else if(investimento == 'F' || investimento == 'f'){
        valorMais = valor*0.04 + valor;
        printf("%f", valorMais);
    }

    return 0;
}
