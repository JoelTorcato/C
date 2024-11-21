#include <stdio.h>

char *vendedores[] = {"ana", "pedro", "afonso", "joana", "maria", "bruno", "marisa", "isabel"};
int automóveis[] = {3, 1, 0, 10, 7, 2, 0, 20};

int main() {
    for (int i = 0; i < 8; i++) {
        if (automóveis[i] <= 5) {
            printf("%s: %d euros\n", vendedores[i], 1000 + 50);
        } else if (automóveis[i] <= 10) {
            printf("%s: %d euros\n", vendedores[i], 1000 + 75);
        } else {
            printf("%s: %d euros\n", vendedores[i], 1000 + 100);
        }
    }
}