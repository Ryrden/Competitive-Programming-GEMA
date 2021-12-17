#include <stdio.h>

int main() {

    // declarou as variaveis
    int codigo1;
    int quantidade1;
    float valor1;

    int codigo2;
    int quantidade2;
    float valor2;

    // ler os dados
    scanf("%d", &codigo1);
    scanf("%d", &quantidade1);
    scanf("%f", &valor1);

    scanf("%d", &codigo2);
    scanf("%d", &quantidade2);
    scanf("%f", &valor2);

    // processamento

    float valor = (valor1 * quantidade1) + (valor2 * quantidade2);

    
    printf("VALOR A PAGAR: R$ %.2f\n", valor);

    return 0;
}