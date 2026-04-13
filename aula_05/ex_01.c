#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0, media;
    int i, acimaMedia = 0;

    // Ler as notas
    for(i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Calcular média
    media = soma / 10;
    printf("\nMedia da turma: %.2f\n", media);

    // Contar quantos alunos ficaram acima da média
    for(i = 0; i < 10; i++) {
        if(notas[i] > media) {
            acimaMedia++;
        }
    }

    printf("Quantidade de alunos acima da media: %d\n", acimaMedia);

    // Mostrar as notas acima da média
    printf("\nNotas acima da media:\n");
    for(i = 0; i < 10; i++) {
        if(notas[i] > media) {
            printf("%.2f\n", notas[i]);
        }
    }

    return 0;
}