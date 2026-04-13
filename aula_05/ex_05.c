#include <stdio.h>

int main() {
    float temp[7], soma = 0, media;
    int i;
    int diaQuente = 0, diaFrio = 0;
    int acimaMedia = 0;

    // Leitura das temperaturas
    for(i = 0; i < 7; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }

    // Calcula média
    media = soma / 7;

    // Descobre dia mais quente e mais frio
    for(i = 1; i < 7; i++) {
        if(temp[i] > temp[diaQuente]) {
            diaQuente = i;
        }
        if(temp[i] < temp[diaFrio]) {
            diaFrio = i;
        }
    }

    // Conta quantos dias ficaram acima da média
    for(i = 0; i < 7; i++) {
        if(temp[i] > media) {
            acimaMedia++;
        }
    }

    // Resultados
    printf("\nMedia das temperaturas: %.2f\n", media);
    printf("Dia mais quente: Dia %d (%.2f graus)\n", diaQuente + 1, temp[diaQuente]);
    printf("Dia mais frio: Dia %d (%.2f graus)\n", diaFrio + 1, temp[diaFrio]);
    printf("Quantidade de dias acima da media: %d\n", acimaMedia);

    return 0;
}