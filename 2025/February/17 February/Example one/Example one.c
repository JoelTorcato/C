#include <stdio.h>

#define QUADRADO(x) ((x * x))

int main(){
    printf("Quadrado de 4: %d\n", QUADRADO(4));
    printf("Quadrado de 5: %d\n", QUADRADO(5+1));

    return 0;
}