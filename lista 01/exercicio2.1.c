#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;
    printf("digite as quatro notas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;
    printf("%.2f\n", media);

    if(media>=7){
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }







    return 0;
}
