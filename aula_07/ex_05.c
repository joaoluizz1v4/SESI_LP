#include <stdio.h>

int main(){
    int matriz[3][3];
    
    // Leitura da matriz
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("\nDigite o numero de l:%i, c:%i: ", l+1, c+1);
            scanf("%i", &matriz[l][c]);
        }
    }

    // Soma de cada linha
    for(int l = 0; l < 3; l++){
        int soma = 0; // zera a cada linha
        for(int c = 0; c < 3; c++){
            soma += matriz[l][c];
        }
        printf("\nA soma da %i linha eh: %i", l+1, soma);
    }

    return 0;
}