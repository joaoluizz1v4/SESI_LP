#include <stdio.h>

int main() {
    int v[10];
    int pares[10], impares[10];
    int i, contPares = 0, contImpares = 0;

    // Leitura dos 10 números
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    // Separar pares e ímpares
    for(i = 0; i < 10; i++) {
        if(v[i] % 2 == 0) {
            pares[contPares] = v[i];
            contPares++;
        } else {
            impares[contImpares] = v[i];
            contImpares++;
        }
    }

    // Exibir resultados
    printf("\nQuantidade de pares: %d\n", contPares);
    printf("Pares: ");
    for(i = 0; i < contPares; i++) {
        printf("%d ", pares[i]);
    }

    printf("\n\nQuantidade de impares: %d\n", contImpares);
    printf("Impares: ");
    for(i = 0; i < contImpares; i++) {
        printf("%d ", impares[i]);
    }

    printf("\n");

    return 0;
}