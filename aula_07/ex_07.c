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

    int soma = 0;

    // Soma da diagonal secundaria (l + c == 4)
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            if(l + c == 4){
                soma += matriz[l][c];
            }
        }
    }

    printf("\nA soma da diagonal secundaria eh: %i", soma);

    return 0;
}