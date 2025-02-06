#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, x;

    // Ler os coeficientes da equa��o
    printf("Digite os coeficientes a e b da equacao (ax + b = 0): ");
    scanf("%f %f", &a, &b);

    // Verificar se 'a' � diferente de zero para evitar divis�o por zero
    if(a != 0) {
        // Calcular a raiz da equa��o
        x = -b / a;
        printf("Raiz da equacao: %.2f\n", x);
    } else {
        printf("Coeficiente 'a' nao pode ser zero.\n");
    }

    return 0;
}
