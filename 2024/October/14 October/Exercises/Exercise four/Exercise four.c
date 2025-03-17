#include <stdio.h>

int main() {
    int numbers[5];
    int even[5];
    int odd[5];
    int i, e = 0, o = 0;

    printf("Enter 5 integer numbers: \n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            even[e++] = numbers[i];
        } else {
            odd[o++] = numbers[i];
        }
    }

    printf("\nOriginal array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nEven numbers array: ");
    for (i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers array: ");
    for (i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}