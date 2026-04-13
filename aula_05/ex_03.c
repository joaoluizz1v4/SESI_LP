#include <stdio.h>

int main() {
    int v[12];
    int i;
    int crescente = 1, decrescente = 1;

    // Leitura dos 12 valores
    for (i = 0; i < 12; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &v[i]);
    }

    // Verificando se é crescente ou decrescente
    for (i = 0; i < 11; i++) {
        if (v[i] > v[i + 1]) {
            crescente = 0;
        }
        if (v[i] < v[i + 1]) {
            decrescente = 0;
        }
    }

    // Resultado
    if (crescente) {
        printf("Ordem crescente\n");
    } 
    else if (decrescente) {
        printf("Ordem decrescente\n");
    } 
    else {
        printf("Desordenada\n");
    }

    return 0;
}