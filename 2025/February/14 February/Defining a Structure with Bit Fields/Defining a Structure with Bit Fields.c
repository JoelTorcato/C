#include <stdio.h>

    struct Estado {
        unsigned int ligado : 1;
        unsigned int modo : 2;
        unsigned int nivel : 3;
};

int main() {
    struct Estado dispositivo = {1, 2, 5};

    printf("Dispositivo Ligado: %u\n", dispositivo.ligado);
    printf("Modo: %u\n", dispositivo.modo);
    printf("Nível: %u\n", dispositivo.nivel);

    return 0;
}
