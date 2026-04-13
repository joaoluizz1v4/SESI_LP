#include <stdio.h>

int main() {
    int v[10];
    int i, j;
    int dominante = -1;

    // Leitura dos 10 valores
    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    // Verificar se existe dominante
    for(i = 0; i < 10; i++) {
        int cont = 0;

        for(j = 0; j < 10; j++) {
            if(v[i] == v[j]) {
                cont++;
            }
        }

        if(cont > 10 / 2) {  // mais da metade
            dominante = v[i];
            break;
        }
    }

    // Resultado
    if(dominante != -1) {
        printf("Valor dominante: %d\n", dominante);
    } else {
        printf("Nao existe valor dominante.\n");
    }

    return 0;
}