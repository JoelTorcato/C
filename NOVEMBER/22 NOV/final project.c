#include <ctype.h> // Verificar e manipular caracteres: letras, números, espaços e conversões maiúscula/minúscula.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // A biblioteca stdlib.h é uma biblioteca padrão do C que fornece funções úteis para manipulação de memória, conversões, geração de números aleatórios e controle de processos.


void escreverNumeroViagens(char *diasSemana[], int viagensDia[]) {
    // *Declarei a variável para ficarem no escopo global
    for (int i = 0; i < 7; i++) {
        printf("%s: ", diasSemana[i]);
        scanf("%d", &viagensDia[i]);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Portugal.1252"); // *Tentei pôr em português, mas não deu bem (perguntar ao professor)

    // Número de viagens de autocarros da 'FlixBus' por dia
    char *diasSemana[] = {
        "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado", "Domingo"
    };
    int viagensDia[6] = {0};

    // escreverNumeroViagens(diasSemana, viagensDia);

    int opcao;
    char resp;

    do {
        // *o bloco de comandos é executado pelo menos uma vez de forma obrigatória, independente do resultado da expressão lógica.
        printf("\n1. Mostrar os dias da semana e as suas respetivas viagens");
        printf("\n2. Mostrar o dia com mais viagens");
        printf("\n3. Mostrar o dia com menos viagens");
        printf("\n4. Mostrar a média de viagens por semana");
        printf("\n5. Mostrar a média de viagens por fim de semana");
        printf("\n6. Mostrar o dia(s) da semana que houve 0 viagens");

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

            // *Pego apenas o Sábado e o Domingo, através da Array
            for (int i = 5; i < 7; i++) {
                totalFimDeSemana = totalFimDeSemana + viagensDia[i];
            }
            mediaFimDeSemana = totalFimDeSemana / 2;
            printf("A média de viagens por fim de semana é de: %.2f", mediaFimDeSemana);
        } else if (opcao == 6)
            for (int i = 0; i < 7; i++) {
                if (viagensDia[i] == 0);
            }
        printf("O(s) dia(s) da semana que houve 0 viagens foi: ");

        for (int i = 0; i < 7; i++) {
            if (viagensDia[i] == 0)
                printf("%s ", diasSemana[i]);
        }

        printf("\nQuer ver outra opção? (S/N): ");

        while ((getchar()) != '\n') {
            //getchar() retorna o valor lido
        }
        scanf("%c", &resp);
    } while (toupper(resp) == 'S'); //  toupper() converte a letra minúscula na letra maiúscula e vice versa.
    system("cls"); // Limpa a tela de saída de um programa.

    return 0;
}
