#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr = array; 
    int soma = 0;

    printf("Elementos do array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        soma += *(ptr + i);
    }

    printf("Soma dos elementos: %d\n", soma);

    return 0;
}
