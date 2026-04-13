#include <stdio.h>

int main() {
    float saques[10];
    float total = 0, maior;
    int i, acima500 = 0;

    // Leitura dos valores
    for(i = 0; i < 10; i++) {
        printf("Digite o valor do saque %d: R$ ", i + 1);
        scanf("%f", &saques[i]);

        total += saques[i];

        if(saques[i] > 500) {
            acima500++;
        }

        if(i == 0) {
            maior = saques[i];
        } else {
            if(saques[i] > maior) {
                maior = saques[i];
            }
        }
    }

    // Resultados
    printf("\nTotal sacado: R$ %.2f\n", total);
    printf("Maior saque realizado: R$ %.2f\n", maior);
    printf("Quantidade de saques acima de R$ 500: %d\n", acima500);

    return 0;
}