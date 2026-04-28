#include <stdio.h>

int main(){
    int A[2][2], B[2][2], C[2][2];
    
    // Leitura da matriz A
    printf("\n--- Matriz A ---\n");
    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 2; c++){
            printf("Digite A[%i][%i]: ", l+1, c+1);
            scanf("%i", &A[l][c]);
        }
    }

    // Leitura da matriz B
    printf("\n--- Matriz B ---\n");
    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 2; c++){
            printf("Digite B[%i][%i]: ", l+1, c+1);
            scanf("%i", &B[l][c]);
        }
    }

    // Multiplicacao das matrizes
    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 2; c++){
            C[l][c] = 0;
            for(int k = 0; k < 2; k++){
                C[l][c] += A[l][k] * B[k][c];
            }
        }
    }

    // Exibicao da matriz resultado
    printf("\n--- Matriz Resultado (C = A x B) ---\n");
    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 2; c++){
            printf("%i ", C[l][c]);
        }
        printf("\n");
    }

    return 0;
}