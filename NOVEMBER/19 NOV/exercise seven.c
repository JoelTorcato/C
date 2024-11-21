#include <stdio.h>

int main() {
    int notas[5][2] = {
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0},
        {0, 0}
    };

    for (int y = 0; y < 5; y++) {
        for (int j = 0; j < 2; j++) {
            printf("introduza a nota %d do aluno %d: ", j + 1, y + 1);
            scanf("%d", &notas[y][j]);
        }
    }

    printf("notas: ");
    for (int y = 0; y < 5; y++) {
        for (int j = 0; j < 2; j++) {
            printf("%d \n", notas[y][j]);
        }
    }

    int total = 0;
    int quantidade_notas = 0;
    float media = 0;


    for (int i = 0; i < 5; i++) {
        for (int x = 0; x < 2; x++) {
            total += notas[i][x];
            quantidade_notas++;
        }
        media = total / quantidade_notas;
        printf("a media do aluno %d foi de: %.2f\n", i + 1, media);
    }
    printf("\n");

    int total_teste = 0;
    int quantidade_testes = 0;


    for (int i = 0; i < 2; i++) {
        for (int x = 0; x < 5; x++) {
            total_teste += notas[x][i];
            quantidade_testes++;
        }
        media = total_teste / quantidade_testes;
        printf("a media do teste %d foi %.2f\n", i + 1, media);
    }
    printf("\n\n");

    return 0;
}
