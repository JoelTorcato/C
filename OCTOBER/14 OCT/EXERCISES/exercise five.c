#include <stdio.h>

int main() {
    int n[10];
    int i;

    printf("insira 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("numeros %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 10; i++) {
        if (n[i] < 0) {
            n[i] = 0;
        }
    }

    printf("\nvetor com negativos substituidos por zero: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}