#include <stdio.h>

int quadrado(int x) {
    return x * x;
}

int main() {
    printf("Quadrado de 4: %d\n", quadrado(4));
    printf("Quadrado de 5: %d\n", quadrado(5+1));

    return 0;
}