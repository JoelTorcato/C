#include <stdio.h>

int main() {
    int golos[5][3] = {
        {2, 1, 3},
        {0, 1, 0},
        {4, 0, 1},
        {1, 0, 1},
        {0, 4, 2}
    };
    int opcao;

    do {
        printf("\n1. golos de um jogador num jogo\n");
        printf("2. total de golos\n");
        printf("3. maior numero de golos\n");
        printf("4. media de golos por jogo\n");
        printf("5. jogadores com 2 golos\n");
        printf("6. total de golos por jogo\n");
        printf("7. total de golos por jogador\n");
        printf("0. sair\n");
        printf("opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int jogador, jogo;
            printf("jogador (0-4): ");
            scanf("%d", &jogador);
            printf("jogo (0-2): ");
            scanf("%d", &jogo);
            printf("golos: %d\n", golos[jogador][jogo]);
        } else if (opcao == 2) {
            int total = 0;
            for (int i = 0; i < 5; i++)
                for (int j = 0; j < 3; j++)
                    total += golos[i][j];
            printf("total: %d\n", total);
        } else if (opcao == 3) {
            int maior = 0;
            for (int i = 0; i < 5; i++)
                for (int j = 0; j < 3; j++)
                    if (golos[i][j] > maior)
                        maior = golos[i][j];
            printf("maior: %d\n", maior);
        } else if (opcao == 4) {
            int total = 0;
            for (int i = 0; i < 5; i++)
                for (int j = 0; j < 3; j++)
                    total += golos[i][j];
            printf("media: %.2f\n", total / 15.0);
        } else if (opcao == 5) {
            printf("jogadores com 2 golos:\n");
            for (int i = 0; i < 5; i++)
                for (int j = 0; j < 3; j++)
                    if (golos[i][j] == 2)
                        printf("jogador %d no jogo %d\n", i, j);
        } else if (opcao == 6) {
            for (int j = 0; j < 3; j++) {
                int total = 0;
                for (int i = 0; i < 5; i++)
                    total += golos[i][j];
                printf("jogo %d: %d\n", j, total);
            }
        } else if (opcao == 7) {
            for (int i = 0; i < 5; i++) {
                int total = 0;
                for (int j = 0; j < 3; j++)
                    total += golos[i][j];
                printf("jogador %d: %d\n", i, total);
            }
        }
    } while (opcao != 0);

    return 0;
}
