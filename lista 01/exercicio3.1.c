#include <stdio.h>
#include <stdlib.h>


int main()
{
    int ano, idade;
    char fezAniversario;

    printf("que ano voce nasceu? ");
    scanf("%i", &ano);

    printf("ja fez aniversario esse ano?(S/N) ");
    scanf("% c", &fezAniversario);

    idade = 2024 - ano;

    if(fezAniversario == 'N' || fezAniversario == 'n'){
        idade--;
    }
    printf("%i\n", idade);
    if(idade >= 18){
        printf("Pode dirigir");
    }
    else{
        printf("\nNao pode dirigir");
    }


    return 0;
}
