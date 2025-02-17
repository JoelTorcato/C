#include <stdio.h>

#define QUADRADO(x) ((x * x))

int main() {
    int num = 5;
    printf("O quadrado de %d é %d\n", num, QUADRADO(num));
    
    return 0;
}