#include <stdio.h>
#include <stdlib.h>

int main() {
    float preco;
    int procedencia;

    // Solicitar o pre�o e a proced�ncia
    printf("Qual o valor? ");
    scanf("%f", &preco);
    printf("Qual procedencia (c�digo)? ");
    scanf("%d", &procedencia);

    // Usar switch para determinar a proced�ncia com base no c�digo
    switch (procedencia) {
        case 1:
            printf("Sul\n");
            break;
        case 2:
            printf("Norte\n");
            break;
        case 3:
            printf("Leste\n");
            break;
        case 4:
            printf("Oeste\n");
            break;
        case 5:
        case 6:
            printf("Nordeste\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Sudeste\n");
            break;
        default:
            // Usar uma verifica��o adicional para c�digos em intervalo de 10 a 30
            if (procedencia >= 10 && procedencia <= 20) {
                printf("Centro-oeste\n");
            } else if (procedencia >= 21 && procedencia <= 30) {
                printf("Nordeste\n");
            } else {
                printf("Codigo de procedencia invalido!\n");
            }
            break;
    }

    return 0;
}
