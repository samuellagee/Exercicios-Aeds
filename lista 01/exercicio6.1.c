#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, x;

    // Ler os coeficientes da equação
    printf("Digite os coeficientes a e b da equacao (ax + b = 0): ");
    scanf("%f %f", &a, &b);

    // Verificar se 'a' é diferente de zero para evitar divisão por zero
    if(a != 0) {
        // Calcular a raiz da equação
        x = -b / a;
        printf("Raiz da equacao: %.2f\n", x);
    } else {
        printf("Coeficiente 'a' nao pode ser zero.\n");
    }

    return 0;
}
