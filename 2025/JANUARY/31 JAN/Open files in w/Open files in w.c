#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("php.txt", "w");
    if (f == NULL) {
        puts("Error creating file!");
        return 1;
    }
    fprintf(f, "Writing test on the file.\n");
    fclose(f);
    puts("php.txt file created!");

    f = fopen("php.txt", "r");
    if (f == NULL) {
        puts("Unable to open php.txt file");
    } else {
        puts("php.txt file opened successfully!");
        fclose(f);
    }
    return 0;
}