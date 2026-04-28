#include <stdio.h>

int main(){
    int matriz[5][5];
    
    // Leitura da matriz
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            printf("\nDigite o numero de l:%i, c:%i: ", l+1, c+1);
            scanf("%i", &matriz[l][c]);
        }
    }

    // Substitui valores negativos por zero
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            if(matriz[l][c] < 0){
                matriz[l][c] = 0;
            }
        }
    }

    // Exibe a matriz resultante
    printf("\nMatriz apos substituicao:\n");
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            printf("%i ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}