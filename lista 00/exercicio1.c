#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int c, d, u;
    int numeroinvert;

    //printf("Digite um numero de 3 casas decimais (100 ao 999): ");
    scanf("%i", &numero);

    c = numero / 100;
    d = (numero / 10) % 10;
    u = numero % 10;

    numeroinvert = u * 100 + d * 10 + c;

    printf("%i", numeroinvert);

    return 0;

}
