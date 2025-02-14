#include <stdio.h>

    struct Estado {
        unsigned int ligado : 1; // 1 bit
        unsigned int modo : 2; // 2 bits
        unsigned int nivel : 3; // 3 bits
};

int main() {
    struct Estado dispositivo = {1, 2, 5};

    printf("Dispositivo Ligado: %u\n", dispositivo.ligado);
    printf("Modo: %u\n", dispositivo.modo);
    printf("Nível: %u\n", dispositivo.nivel);

    return 0;
}
