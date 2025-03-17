#include <stdio.h>

int main() {
    int n[10];
    int i;

    printf("Enter 10 integer numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 10; i++) {
        if (n[i] < 0) {
            n[i] = 0;
        }
    }

    printf("\nArray with negative numbers replaced by zero: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", n[i]);
    }

    return 0;
}