#include <stdio.h>

int main() {
    int numeros[6], total = 0;
    float media;
    int maior, menor;

    // a)
    printf("introduza 6 numeros:\n");
    for (int i = 0; i < 6; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // b)
    printf("\nvetor na horizontal:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // c)
    printf("\nvetor na vertical:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", numeros[i]);
    }

    // d)
    printf("\nvetor na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // e)
    for (int i = 0; i < 6; i++) {
        total += numeros[i];
    }
    media = total / 6.0;  // divisão por float para garantir precisão decimal

    printf("\ntotal dos valores: %d\n", total);
    printf("media dos valores: %.2f\n", media);  // %.2f para arredondar a 2 casas decimais

    // f)
    maior = menor = numeros[0];  // inicializa o maior e menor com o primeiro elemento
    for (int i = 1; i < 6; i++) {
        if (numeros[i] > maior) maior = numeros[i];
        if (numeros[i] < menor) menor = numeros[i];
    }

    printf("maior valor: %d\n", maior);
    printf("menor valor: %d\n", menor);

    return 0;
}
