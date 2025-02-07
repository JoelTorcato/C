#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int array_x[5] = {11, 15, 14, 16, 18};
    int *p_array = array_x; 

    printf("Dados originais: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p_array + i)); 
    }
    printf("\n");

    printf("Dados invertidos: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", *(p_array + i));
    }
    printf("\n");

    return 0;
}
