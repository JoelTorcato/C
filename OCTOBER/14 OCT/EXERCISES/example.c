#include <stdio.h>

int main() {

    // 1.2. Inicializar a matriz com os valores fornecidos
    int golos[5][3] = {
        {2, 1, 3},
        {0, 1, 0},
        {4, 0, 1},
        {1, 0, 1},
        {0, 4, 2}
    };

    // Exibir a matriz (opcional, para verificar os valores)
    printf("Número de golos marcados pelos jogadores:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", golos[i][j]);
        }
        printf("\n");
    }

    return 0;
}
