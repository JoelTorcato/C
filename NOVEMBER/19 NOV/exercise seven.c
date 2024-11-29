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
        printf("a m?dia do aluno %d foi de: %.2f\n", i + 1, media);
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

    int melhor_nota = 0;
    for (int i = 0; i < 5; i++)
        for (int x = 0; x < 2; x++)
            if (notas[x][i] > melhor_nota)
                melhor_nota = notas[x][i];
    printf("a melhor nota foi: %d\n", melhor_nota);

    printf("\n");


    int idade[] = {17, 17, 16, 18, 16};
    char *alunos[] = {"ANA", "CARLOS", "MANUEL", "RUI", "TIAGO"};

    int opcao;

    do {
        printf("\n1. media de idades\n");
        printf("2. nome dos alunos mais novos\n");
        printf("3. numero total de alunos com idades superiores ou iguais a 18\n");
        printf("4. listagem dos nomes e respetiva idade\n");
        printf("0. sair\n");
        printf("opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int total = 0;
            for (int i = 0; i < 5; i++)
                total = total + idade[i];
            printf("media: %.2f\n", total / 5.0);
        } else if (opcao == 2) {
            int menor_idade = 100;

            for (int i = 0; i < 5; i++) {
                if (idade[i] < menor_idade)
                    menor_idade = idade[i];
            }

            printf("o(s) aluno(s) mais novos sao: ");

            for (int i = 0; i < 5; i++) {
                if (idade[i] <= menor_idade)
                    printf("%s ", alunos[i]);
            }
            printf("\n");
        } else if (opcao == 3) {
            printf("o(s) aluno(s) maiores de 18 sao: ");

            for (int i = 0; i < 5; i++) {
                if (idade[i] >= 18)
                    printf("%s ", alunos[i]);
            }
            printf("\n");
        } else if (opcao == 4) {
            for (int i = 0; i < 5; i++) {
                printf("%s - %d anos\n", alunos[i], idade[i]);
            }
            printf("\n\n");
        }
    } while (opcao != 0);

    return 0;
}
