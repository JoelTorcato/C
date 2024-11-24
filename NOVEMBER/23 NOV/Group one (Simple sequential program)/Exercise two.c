#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Verificar e manipular caracteres: letras, números, espaços e conversões maiúscula/minúscula.


int main() {
    // Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

    int opcao = 0;
    char resp;

    do {
        printf("\nTabuada do: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            for (int i = 1; i <= 10; i++)
                printf("1 x %d = %d\n", i, i);
        } else if (opcao == 2) {
            for (int i = 1; i <= 10; i++)
                printf("2 x %d = %d\n", i, i * 2);
        } else if (opcao == 3) {
            for (int i = 1; i <= 10; i++) {
                printf("3 x %d = %d\n", i, i * 3);
            }
        } else if (opcao == 4) {
            for (int i = 1; i <= 10; i++) {
                printf("4 x %d = %d\n", i, i * 4);
            }
        } else if (opcao == 5) {
            for (int i = 1; i <= 10; i++) {
                printf("5 x %d = %d\n", i, i * 5);
            }
        } else if (opcao == 6) {
            for (int i = 0; i <= 10; i++) {
                printf("6 x %d = %d\n", i, i * 6);
            }
        } else if (opcao == 7) {
            for (int i = 1; i <= 10; i++) {
                printf("7 x %d = %d\n", i, i * 7);
            }
        } else if (opcao == 8) {
            for (int i = 1; i <= 10; i++) {
                printf("8 x %d = %d\n", i, i * 8);
            }
        } else if (opcao == 9) {
            for (int i = 1; i <= 10; i++) {
                printf("9 x %d = %d\n", i, i * 9);
            }
        }
        printf("\nQuer ver outra tabuada? (S/N): ");

        while ((getchar()) != '\n') {
        } //getchar() retorna o valor lido

        scanf("%c", &resp);
    } while (toupper(resp) == 'S'); //  toupper() converte a letra minúscula na letra maiúscula e vice versa.
    system("cls"); // Limpa a tela de saída de um programa.

    return 0;
}
    
