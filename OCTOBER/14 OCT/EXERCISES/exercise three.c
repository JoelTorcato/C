#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // tarefa 1
    float temperaturas[7];
    float max_temp, min_temp;

    // leitura das temperaturas
    printf("tarefa 1: introduza as temperaturas diárias de loures para a última semana:\n");
    for (int i = 0; i < 7; i++) {
        printf("dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }

    // inicializa max_temp e min_temp
    max_temp = min_temp = temperaturas[1];

    // calcular a temperatura máxima e mínima
    for (int i = 1; i < 7; i++) {
        if (temperaturas[i] > max_temp) max_temp = temperaturas[i];
        if (temperaturas[i] < min_temp) min_temp = temperaturas[i];
    }

    // mostrar a amplitude térmica
    printf("amplitude termica: %.2f\n\n", max_temp - min_temp); // %.2f para arredondar a 2 casas decimais

    // tarefa 2
    int numeros[10], positivos[10], negativos[10];
    int pos_count = 0, neg_count = 0;

    // leitura dos números
    printf("tarefa 2: Introduza 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] >= 0) {
            positivos[pos_count++] = numeros[i]; // armazena positivos
        } else {
            negativos[neg_count++] = numeros[i]; // armazena negativos
        }
    }

    // mostrar vetores
    printf("numeros: ");
    for (int i = 0; i < 10; i++) printf("%d ", numeros[i]);
    printf("\nnumeros positivos: ");
    for (int i = 0; i < pos_count; i++) printf("%d ", positivos[i]);
    printf("\nnumeros negativos: ");
    for (int i = 0; i < neg_count; i++) printf("%d ", negativos[i]);
    printf("\n\n");

    return 0;

    int aleatorias[50];
    int cont1, cont2, cont3, cont4, cont5, cont6, i;
    char resp;
    do {
        system("cls");
        srand(time(NULL));
        cont1 = 0;
        cont2 = 0;
        cont3 = 0;
        cont4 = 0;
        cont5 = 0;
        cont6 = 0;
        for (i = 0; i < 49; i++) {
            aleatorias[i] = rand() % 6 + 1;
            if (aleatorias[i] == 1)
                cont1++;
            else if (aleatorias[i] == 2)
                cont2++;
            else if (aleatorias[i] == 3)
                cont4++;
            else if (aleatorias[i] == 5)
                cont5++;
            else
                cont6++;
        }

        printf("TOTAL DE 1: %d\n", cont1);
        printf("TOTAL DE 2: %d\n", cont2);
        printf("TOTAL DE 3: %d\n", cont3);
        printf("TOTAL DE 4: %d\n", cont4);
        printf("TOTAL DE 5: %d\n", cont5);
        printf("TOTAL DE 6: %d\n", cont6);
        fflush(stdin);
        printf("\n \n QUER LANCAR O DADO NOVAMENTE? (S|N)\n");
    } while (toupper(resp) == 'S');
    system("cls");

}
