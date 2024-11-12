#include <stdio.h>

int main() {
    float despesas[12] = {100, 200, 300, 300, 200, 100, 100, 100, 200, 300, 200, 500}; // valores de despesas por mês
    float total_despesas = 0, media;  // total das despesas e média inicializados a 0
    int i;

    // a)
    for (i = 0; i < 12; i++) {
        total_despesas += despesas[i]; // soma todas as despesas mensais
    }

    // b)
    media = total_despesas / 12;

    // c)
    printf("meses com despesas acima da média mensal (%.2f):\n", media);
    for (i = 0; i < 12; i++) {
        if (despesas[i] > media) {
            printf("mes %d, despesa: %.2f\n", i + 1, despesas[i]);  // nês é indexado a partir de 1
        }
    }

    // d)
    float maior = despesas[0];
    for (i = 1; i < 12; i++) {
        if (despesas[i] > maior) {
            maior = despesas[i];  // atualiza a maior despesa
        }
    }

    printf("mes(es) com a maior despesa (%.2f):\n", maior);
    for (i = 0; i < 12; i++) {
        if (despesas[i] == maior) {  // encontra todos os meses com a maior despesa
            printf("mes %d\n", i + 1);
        }
    }

    // e)
    float menor = despesas[0];
    for (i = 1; i < 12; i++) {
        if (despesas[i] < menor) {
            menor = despesas[i];  // atualiza a menor despesa
        }
    }

    printf("mes(es) com a menor despesa (%.2f):\n", menor);
    for (i = 0; i < 12; i++) {
        if (despesas[i] == menor) {  // encontra todos os meses com a menor despesa
            printf("mes %d\n", i + 1);
        }
    }

    return 0;
}
