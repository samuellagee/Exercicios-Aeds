#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, maior;
    printf("Digite os 3 numeros: ");
    scanf(" %i %i %i", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3)
        printf("%i", num1);
    else if(num2 > num1 && num2 > num3)
        printf("%i", num2);
    else
        printf("%i", num3);



    return 0;
}
