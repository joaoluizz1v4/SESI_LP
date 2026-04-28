#include <stdio.h>

int main(){
    int matriz[4][4];
    
    // Leitura da matriz
    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4; c++){
            printf("\nDigite o numero de l:%i, c:%i: ", l+1, c+1);
            scanf("%i", &matriz[l][c]);
        }
    }

    int maior = matriz[0][0];
    int menor = matriz[0][0];

    // Verifica maior e menor
    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4; c++){
            if(matriz[l][c] > maior){
                maior = matriz[l][c];
            }
            if(matriz[l][c] < menor){
                menor = matriz[l][c];
            }
        }
    }

    printf("\nMaior valor: %i", maior);
    printf("\nMenor valor: %i", menor);

    return 0;
}