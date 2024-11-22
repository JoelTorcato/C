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
    int viagensDia[6] = {0};

    escreverNumeroViagens(diasSemana, viagensDia);

    int opcao;
    char resp;

    do {
        printf("\n1. Mostrar os dias da semana e as suas respetivas viagens");
        printf("\n2. Mostrar o dia com mais viagens");
        printf("\n3. Mostrar o dia com menos viagens");
        printf("\n4. Mostrar a média de viagens por semana");
        printf("\n5. Mostrar a média de viagens por fim de semana");

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
        } else if (opcao == 3) {
            int minViagens = 100;

            for (int i = 0; i < 7; i++) {
                if (viagensDia[i] < minViagens)
                    minViagens = viagensDia[i];
            }
            printf("O(s) dia(s) com menos viagens foi: ");

            for (int i = 0; i < 7; i++) {
                if (viagensDia[i] <= minViagens)
                    printf("%s ", diasSemana[i]);
            }
        } else if (opcao == 4) {
            int total = 0;
            float media = 0;

            for (int i = 0; i < 7; i++) {
                total = total + viagensDia[i];
            }
            media = total / 7;
            printf("A média de viagens por semana é de: %.2f", media);
        } else if (opcao == 5) {
            int totalFimDeSemana = 0;
            float mediaFimDeSemana = 0;

            // Pego apenas o Sábado e o Domingo, através da Array
            for (int i = 5; i < 7; i++) {
                totalFimDeSemana = totalFimDeSemana + viagensDia[i];
            }
            mediaFimDeSemana = totalFimDeSemana / 2;
            printf("A média de viagens por fim de semana é de: %.2f", mediaFimDeSemana);
        }


        printf("\n\nQuer ver outra opção? (S/N): ");
        while ((getchar()) != '\n') {
        }
        scanf("%c", &resp);
    } while (toupper(resp) == 'S');
    system("cls");
    return 0;
}
