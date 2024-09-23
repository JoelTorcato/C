#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int n;
    long int fatorial(int n);
    printf("introduza o numero do qual pretende saber o factorial\t");
    scanf("%d", &n);
    printf("o valor de %d!=%ld", n, fatorial(n));
}

long int fatorial(int x) {
    if (x == 1)
        return (1);
    else
        return (x * fatorial(x - 1));
}
