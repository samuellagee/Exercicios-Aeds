#include <stdio.h>
#include <math.h>

int main() {
    int primeiroTermo, razao, quintoTermo;


     //printf("Digite a razao da PG: ");
    scanf("%d", &razao);


    //printf("Digite o primeiro termo da PG: ");
    scanf("%d", &primeiroTermo);




    quintoTermo = primeiroTermo * pow(razao, 4);


    printf("%d\n", quintoTermo);

    return 0;
}
