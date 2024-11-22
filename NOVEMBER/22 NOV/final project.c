#include <ctype.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void escreverNumeroViagens(char *diasSemana[], int viagensDia[]) {
    for (int i = 0; i < 7; i++) {
        printf("%s: ", diasSemana[i]);
        scanf("%d", &viagensDia[i]);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Portugal.1252");

    // Número de viagens de autocarros da 'FlixBus' por dia
    char *diasSemana[] = {
        "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado", "Domingo"
    };
    int viagensDia[7] = {0};

    escreverNumeroViagens(diasSemana, viagensDia);

    int opcao;
    char resp;

    do {
        printf("\n1. Mostrar os dias da semana e as suas respetivas viagens");
        printf("\n2. Mostrar o dia com mais viagens");
        printf("\nOpção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            for (int i = 0; i < 7; i++) {
                printf("%s: %d viagens\n", diasSemana[i], viagensDia[i]);
            }
        } else if (opcao == 2) {
            int maxViagens = 100;

            for (int i = 0; i < 7; i++) {
                if (viagensDia[i] > maxViagens)
                    maxViagens = viagensDia[i];
            }
            printf("O(s) dia(s) com mais viagens foi: ");

            for (int i = 0; i < 7; i++) {
                if (viagensDia[i] >= maxViagens)
                    printf("%s ", diasSemana[i]);
            }
        }

        printf("\n\nQuer ver outra opção? (S/N): ");
        while ((getchar()) != '\n') {
        }
        // Limpa o buffer
        scanf("%c", &resp);
    } while (toupper(resp) == 'S');

    system("cls");

    return 0;
}
